#include "PatternMatchModule.h"
#include "Logging.h"
#include "Config.h"
#include "porting.h"
#include "AssemblyHandler.h"
#include "ExceptionHandler.h"

//----------------------------- PATCH FUNCTIONS -----------------------------//

//avoid the leak of the modified ip by pin
VOID patchInt2e(ADDRINT ip, CONTEXT *ctxt, ADDRINT cur_eip) {
	// TODO Win64 is a different story!
	LOG_EVASION("[EVASION?] int2e instruction detected (possible real EIP leak)");
	//set the return value of the int2e (stored in edx) as the current ip
	PIN_SetContextReg(ctxt, REG_GDX, cur_eip);	
} 

/* TODO this might be a problem for 64-bit target! see FPSTATE */
//avoid the leak of the modified ip by pin
VOID patchFsave(ADDRINT ip, CONTEXT *ctxt, ADDRINT cur_eip) {
	//set the return value of the int2e (stored in edx) as the current ip
	LOG_EVASION("[EVASION?] Fsave instruction detected (possible real EIP leak)");

	FPSTATE a;
	//get the current fp unit state
	PIN_GetContextFPState(ctxt, &a);
	//set the correct ip and save the state
	#ifdef __LP64__
	ASSERT(false, "FPSTATE->fxsave_legacy._fpuip is 32-bit long");
	#else
	a.fxsave_legacy._fpuip = cur_eip;
	#endif
	PIN_SetContextFPState(ctxt, &a);
} 

// [from Arancino's codebase - now DISABLED]
// fake the result of an rdtsc operation by dividing it by RDTSC_DIVISOR
VOID patchRdtsc(ADDRINT ip, CONTEXT *ctxt, ADDRINT cur_eip ){
	//get the two original values ()
	ADDRINT eax_value = PIN_GetContextReg(ctxt, REG_GAX); // was EAX
	ADDRINT edx_value = PIN_GetContextReg(ctxt, REG_GDX); // was EDX
	//store the value of edx in a 64 bit data in order to shift this value correctly
	ADDRINT tmp_edx = edx_value;
	//we have to compose the proper returned value (EDX:EAX) so let's shift the value of EDX by 32 bit on the left (tmp_edx00..0) and add to this value eax_value (tmp_edxeax_value) and divide the result by a proper divisor
	UINT64 divided_time = ( ((UINT64)tmp_edx << 32) + eax_value ) / Config::RDTSC_DIVISOR;
	//get the right parts
	ADDRINT eax_new_value = (ADDRINT)((divided_time << 32) >> 32);
	ADDRINT edx_new_value = divided_time >> 32;
	//LOG_INFO("Detected a rdtsc, EAX before = %08x , EAX after = %08x , EDX before: %08x , EDX after: %08x\n", eax_value, le_fighe_bianche, edx_value, edx_new_value);
	//set the registerss
	PIN_SetContextReg(ctxt, REG_GAX,eax_new_value);
	PIN_SetContextReg(ctxt, REG_GDX,edx_new_value);
}

//----------------------------- END PATCH FUNCTIONS -----------------------------//


PatternMatchModule::PatternMatchModule()
{
	//set the initial patch pointer to zero (an invalid address) 
	this->curPatchPointer = 0x0;
	this->index = 0; // TODO
	//create the map for our our patches
	//ex : if i find an int 2e instruction we have the functon pointer for the right patch 
	this->indexMap.insert(std::pair<string, int>("int 0x2e", INT2_INDEX));
	//this->indexMap.insert(std::pair<string, int>("fsave", FSAVE_INDEX));
	this->indexMap.insert(std::pair<string, int>("rdtsc ", RDTSC_INDEX));
	this->indexMap.insert(std::pair<string, int>("cpuid ", CPUID_INDEX));
	this->indexMap.insert(std::pair<string, int>("int 0x2d", INT2D_INDEX));
}

//search if we have a patch for the current instruction and if yes insert the patch in the next round
bool PatternMatchModule::patchDispatcher(INS ins, ADDRINT curEip){

	//Handle some exception in previous instruction
	ExceptionHandler *eh = ExceptionHandler::getInstance();
	ProcInfo *pc = ProcInfo::getInstance();
	/* raise exception at second istruction after real trap*/
	if (eh->isPendingException()) {
		if (pc->insCount == 0)
			pc->insCount++;
		else {
			pc->insCount = 0;
			INS_InsertCall(ins, IPOINT_BEFORE, (AFUNPTR)ExceptionHandler::executeExceptionIns, IARG_CONTEXT,
						   IARG_THREAD_ID, IARG_ADDRINT, INS_Address(ins), IARG_END);
			return true;
		}
	}

#ifndef __LP64__
	if (!ProcInfo::isRunningInWow64() && Config::getInstance()->ATTACH_DEBUGGER 
		&& pc->flagStep < 2 && ProcInfo::getInstance()->isInsideMainIMG(INS_Address(ins))) {
		pc->flagStep = pc->flagStep + 1;
		if (pc->flagStep == 1) {}
		else {
			W::BYTE deb = 0;
			W::DWORD flag = 0;
			W::BYTE* _teb32 = (W::BYTE*)W::NtCurrentTeb();
			PEB32* peb32 = (PEB32*)(*(W::DWORD*)(_teb32 + 0x30));
			W::WriteProcessMemory((W::HANDLE)(-1), (W::LPVOID*)(&peb32->BeingDebugged), &deb, sizeof(W::BYTE), 0);
			W::WriteProcessMemory((W::HANDLE)(-1), (W::LPVOID*)(peb32 + 0x68), &flag, sizeof(W::DWORD), 0);
		}
	}
#endif
	//if we have found an instruction that has to be patched in the previous round then we have a correct function pointer end we can instrument the code
	//we have to use this trick because some instructions, such as int 2e, don't have a fall throug and is not possible to insert an analysis routine with the IPOINT_AFTER attribute
	if (this->curPatchPointer != 0x0){
		//add the analysis rtoutine (the patch)
		switch (this->index) {
			case INT2_INDEX:
				//add the analysis rtoutine (the patch)
				INS_InsertCall(ins, IPOINT_BEFORE, (AFUNPTR)patchInt2e, IARG_INST_PTR, IARG_CONTEXT, IARG_ADDRINT, curEip, IARG_END);
				break;
		}
		//invalidate the function pointer for the next round
		this->curPatchPointer = 0x0;
		return true;
	}
	//disasseble the instruction
	std::string disass_instr = INS_Disassemble(ins);

	//if we find an fsave instruction or similar we have to patch it immediately
	
	/*
	std::regex rx("^f(.*)[save|env](.*)");	
	if (std::regex_match(disass_instr.cbegin(), disass_instr.cend(), rx)){
		//all the register in the context can be modified
		REGSET regsIn;
		REGSET_AddAll(regsIn);
		REGSET regsOut;
		REGSET_AddAll(regsOut);
		//add the analysis rtoutine (the patch)
		INS_InsertCall(ins, IPOINT_BEFORE,  this->patchesMap.at("fsave"), IARG_INST_PTR, IARG_PARTIAL_CONTEXT, &regsIn, &regsOut, IARG_ADDRINT, curEip, IARG_END);
		return true;
	}
	*/

	// check if we have a patch for this instruction
	for (std::map<string, int>::iterator item = this->indexMap.begin(); item != this->indexMap.end(); ++item) {
		//get the pointer to the specified function
		if (disass_instr.find(item->first) != string::npos) {
			//all the register in the context can be modified
			REGSET regsIn;
			REGSET_AddAll(regsIn);
			REGSET regsOut;
			REGSET_Clear(regsOut);
			REGSET_Insert(regsOut, REG_GAX);
			REGSET_Insert(regsOut, REG_GBX);
			REGSET_Insert(regsOut, REG_GDX);
			REGSET_Insert(regsOut, REG_GCX);
			this->index = item->second;
			switch (this->index) {
				case INT2_INDEX:
					this->curPatchPointer = (AFUNPTR)0x1; // TODO?
					break;
					/*
					case FSAVE_INDEX:
					//add the analysis rtoutine (the patch)
					INS_InsertCall(ins, IPOINT_BEFORE, this->curPatchPointer, IARG_INST_PTR, IARG_PARTIAL_CONTEXT, &regsIn, &regsOut, IARG_ADDRINT, curEip, IARG_END);
					break;
					*/
				case RDTSC_INDEX:
					INS_InsertCall(ins, IPOINT_AFTER, (AFUNPTR)AssemblyHandler::patchRtdsc, IARG_INST_PTR,
						IARG_PARTIAL_CONTEXT, &regsIn, &regsOut, IARG_ADDRINT, curEip, IARG_END);
					break;

				case CPUID_INDEX:
					INS_InsertCall(ins, IPOINT_BEFORE, (AFUNPTR)AssemblyHandler::patchCpuidEntry, 
						IARG_INST_PTR, IARG_PARTIAL_CONTEXT, &regsIn, &regsOut, IARG_ADDRINT, curEip, IARG_END);
					INS_InsertCall(ins, IPOINT_AFTER, (AFUNPTR)AssemblyHandler::patchCpuidExit, 
						IARG_INST_PTR, IARG_PARTIAL_CONTEXT, &regsIn, &regsOut, IARG_ADDRINT, curEip, IARG_END);
					break;

				case INT2D_INDEX:
					INS_InsertCall(ins, IPOINT_BEFORE, (AFUNPTR)AssemblyHandler::patchInt2d, IARG_END);
					break;

				default:
					// otherwise continue the analysis in the class PINshield
					return false; /* TODO DCD refactor if we want to add other defenses */
			}
		}
	}

	return true;
}