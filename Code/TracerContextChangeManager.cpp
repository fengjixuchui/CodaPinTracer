#include "TracerContextChangeManager.h"

//User32 image memory range
static MemoryRange user32Img = { 0 };

//Checks if address of callback function is in user32.dll, to detect eventual KernelCallbackTable modifications
bool isInUser32(ADDRINT callbackAddr)
{
	//If user32img does not contain user32.dll memory range, retrieve it
	if (user32Img.EndAddress == 0 && user32Img.StartAddress == 0) {

		//Get user32.dll address
		W::HMODULE userMod = W::GetModuleHandle("user32.dll");

		//Get img object for user32.dll
		IMG user32 = IMG_FindByAddress((ADDRINT)userMod);

		//Fill memory range
		user32Img.StartAddress = IMG_LowAddress(user32);
		user32Img.EndAddress = IMG_HighAddress(user32);
	}

	//Check if callback address is in user32.dll memory range
	if (user32Img.StartAddress <= callbackAddr && callbackAddr <= user32Img.EndAddress) {
		return true;
	}
	else return false;

}


//Get address of KernelCallbackTable in PEB
// (based on http://www.netfairy.net/?post=239)
W::ULONG GetKernelCallbackTable()
{
	// Get TEB
	PTEB teb = (PTEB)W::NtCurrentTeb();

	// Get PEB
	PPEB peb = teb->ProcessEnvironmentBlock;

	// Obtain KernelCallbackTable in PEB
	W::ULONG KernelCallbackTable = (W::ULONG)peb->KernelCallbackTable;

	//Check if NULL, if this is the case load user32.dll to initialize the array of pointers
	if (KernelCallbackTable == NULL) {

		//Load user32.dll to ensure that KernelCallbackTable is initialized
		W::LoadLibraryA("user32.dll");

		//Retreive KernelCallbackTable
		teb = (PTEB)W::NtCurrentTeb();
		peb = teb->ProcessEnvironmentBlock;
		KernelCallbackTable = (W::ULONG)peb->KernelCallbackTable;
	}

	return KernelCallbackTable;
}


//Main context change function for tracer
void TracerContextChangeManager::tracerOnContextChange(THREADID tid, CONTEXT_CHANGE_REASON reason, const CONTEXT *orig_ctx, CONTEXT *signal_ctx, int32_t info, void*) {

	//APC Variables
	string APCName;
	RTN APCRtn;
	ADDRINT* sp_pointer_APC;
	ADDRINT sp_APC;
	ADDRINT value_APC;
	IMG APCImg;
	const char *APC_img_name;

	//Callback Variables
	ADDRINT sp;
	ADDRINT* sp_pointer;
	ADDRINT value;
	W::ULONG KernelCallbackTable;
	ADDRINT callbackAddr;
	bool inUser32;
	RTN callbackRtn;
	string rtnName;
	IMG callbackImg;
	const char *callback_img_name;

	//--Get pointer to thread local data--//
	bluepill_tls* tdata = static_cast<bluepill_tls*>(PIN_GetThreadData(tls_key, tid));

	switch (reason) {
	case(CONTEXT_CHANGE_REASON_APC):

		//LOG("APC\n");
		(tdata->file_write)(tid, tdata->buffer, tdata->OutFile, "Context change caused by APC ");

		//Get stack pointer
		sp_APC = PIN_GetContextReg(signal_ctx, REG_STACK_PTR);

		//Get contents of pointed memory location at sp, i.e. PKNORMAL_ROUTINE (the first parameter of KiUserApcDispatcher)
		sp_pointer_APC = (ADDRINT *)(sp_APC);

		//Copy address of APC
		PIN_SafeCopy(&value_APC, sp_pointer_APC, sizeof(ADDRINT));

		//Get RTN from address
		APCRtn = RTN_FindByAddress(value_APC);
		if (!RTN_Valid(APCRtn)) {
			LOG("Invalid callback routine");
			//Write to file
			(tdata->file_write)(tid, tdata->buffer, tdata->OutFile, "-> %s\n", "Invalid APC");
			break;
		}

		//Get name from routine
		APCName = RTN_Name(APCRtn);

		//Get module name
		APCImg = IMG_FindByAddress(value_APC);
		APC_img_name = strrchr(IMG_Name(APCImg).c_str(), '\\') + 1; //We just need the last part

																	//Write to file
		(tdata->file_write)(tid, tdata->buffer, tdata->OutFile, "-> %s!%s\n", APC_img_name, APCName.c_str());


		break;
	case(CONTEXT_CHANGE_REASON_EXCEPTION):
		//LOG("Exception\n");

		//Info contains CONTEXT_CHANGE_REASON_EXCEPTION: The Windows exception code.
		(tdata->file_write)(tid, tdata->buffer, tdata->OutFile, "Context change caused by exception with code 0x%x\n", info);

		//PIN_ExitApplication(-1);

		break;
	case(CONTEXT_CHANGE_REASON_CALLBACK):
		//LOG("Callback\n");
		(tdata->file_write)(tid, tdata->buffer, tdata->OutFile, "Context change caused by callback ");

		//Get stack pointer
		sp = PIN_GetContextReg(signal_ctx, REG_STACK_PTR);

		//Get contents of pointed memory location at sp+4, i.e. the callback index (sp is NULL return address)
		sp_pointer = (ADDRINT *)(sp + 4);
		PIN_SafeCopy(&value, sp_pointer, sizeof(ADDRINT));

		//Make a copy of KernelCallbackTable
		KernelCallbackTable = GetKernelCallbackTable();

		//Get address of callback from KernelCallbackTable array of pointers
		KernelCallbackTable += value * sizeof(W::ULONG);
		callbackAddr = *(W::ULONG *)KernelCallbackTable;

		//Check if callback address is in user32.dll memory range
		inUser32 = isInUser32(callbackAddr);

		if (!inUser32) {
			LOG("WARNING: callback not in user32.dll");
			(tdata->file_write)(tid, tdata->buffer, tdata->OutFile, "-> %s\n", "not in user32.dll");
		}
		ASSERT(inUser32, "WARNING: callback not in user32.dll");

		//Get routine name
		callbackRtn = RTN_FindByAddress(callbackAddr);
		if (!RTN_Valid(callbackRtn)) {
			LOG("Invalid callback routine");
			//Write to file
			(tdata->file_write)(tid, tdata->buffer, tdata->OutFile, "-> %s\n", "Invalid callback");
			break;
		}
		rtnName = RTN_Name(callbackRtn);

		//Get module name
		callbackImg = IMG_FindByAddress(callbackAddr);
		callback_img_name = strrchr(IMG_Name(callbackImg).c_str(), '\\') + 1; //We just need the last part

																			  //Write to file
		(tdata->file_write)(tid, tdata->buffer, tdata->OutFile, "-> %s!%s\n", callback_img_name, rtnName.c_str());

		break;


	}
}