#include "TracerLibCalls.h"
#include "Config.h"
#include "ProcInfo.h"
#include "hash_map"
#include "Drltrace_libcalls.h"
#include "Pyrebox_libcalls.h"

//Main image options
static bool NO_MAIN_IMAGE_IGNORE;
static bool NO_MAIN_IMAGE_NOARGS;

//Global counters and flags (used for debugging and for empty instrumentation)
static long long globalCountBefore = 0;
static long long globalCountAfter = 0;
static int globalCountImage = 0;
static bool EMPTY_RTN_INSTR = false;

//Return syscall count for empty RTN instrumentation
long long TracerLibCalls::getLibcallCount()
{
	return globalCountBefore;
}

//Print args with routine info
static void print_args_known(void* args_info_pointer, ADDRINT* args, const char *rtn_name, const char *img_name, ADDRINT sp,
	THREADID threadid, ADDRINT returnIp, bluepill_tls* tdata) {

	//Cast args info to the appropriate type based on PYREBOX_DB flag
	std::vector<drsys_arg_t *> args_info; //drltrace args info
	libcall_info_t* pyrebox_libcall; //Pyrebox args info

	if (Config::getInstance()->getPdbFlag()) {
		pyrebox_libcall = (libcall_info_t*)args_info_pointer;
	}
	else {
		args_info = *((std::vector<drsys_arg_t *>*)args_info_pointer);
	}

	globalCountBefore++;
	apicall_t *exeApi = (apicall_t*)malloc(sizeof(apicall_t));

	//Fill exeApi with rtn_name and img_name
	exeApi->rtn_name = rtn_name;
	exeApi->img_name = img_name;


	//Fill exeApi with prototype info and arg values and print args
	//->Fill and print mechanism based on PYREBOX_DB flag
	if (Config::getInstance()->getPdbFlag()) {
		Pyrebox_libcalls::print_args_known_pyrebox(tdata, args, exeApi, pyrebox_libcall);
	}
	else {
		Drltrace_libcalls::print_args_known_drltrace(tdata, args, exeApi, args_info);
	}

	//Create stack entry
	stackEntry *stackTop = (stackEntry*)malloc(sizeof(stackEntry));
	stackTop->currentSP = sp;
	stackTop->threadID = threadid;
	stackTop->apiInfo = exeApi;
	stackTop->returnIp = returnIp;
	stackTop->api_counter = tdata->call_number;

	//Place entry on top of stack
	(tdata->shadowStack)->push_back(*stackTop);
	

}


//Print function name
// return value: true (print args), false (do no print args)
bool print_name(ADDRINT returnIp, const char* img_name, const char* rtn_name, bluepill_tls* tdata, bool known) {

	//Call NOT in mainImg
	if (!ProcInfo::getInstance()->isInsideMainIMG(returnIp)) {

		if (NO_MAIN_IMAGE_IGNORE) {
			return false;
		}
		else {

			//Increase call number and print call number only if function is known
			if (known && !NO_MAIN_IMAGE_NOARGS) {

				tdata->call_number += 1;
				(tdata->file_write)(tdata->threadid, tdata->buffer, tdata->OutFile, "~~%d~~ %u %s!%s\n", PIN_GetTid(), tdata->call_number, img_name, rtn_name);
				(tdata->file_write)(tdata->threadid, tdata->buffer, tdata->OutFile, "%u \tWARNING : Not in main image\n", tdata->call_number);
			}
			else {
				(tdata->file_write)(tdata->threadid, tdata->buffer, tdata->OutFile, "~~%d~~ %s!%s\n", PIN_GetTid(), img_name, rtn_name);
				(tdata->file_write)(tdata->threadid, tdata->buffer, tdata->OutFile, "\tWARNING : Not in main image\n");
			}

			if (NO_MAIN_IMAGE_NOARGS) return false;
		}
	}
	//Call in mainImg
	else {

		//Increase call number and print call number only if function is known
		if (known) {
			tdata->call_number += 1;
			(tdata->file_write)(tdata->threadid, tdata->buffer, tdata->OutFile, "~~%d~~ %u %s!%s\n", PIN_GetTid(), tdata->call_number, img_name, rtn_name);
		}
		else (tdata->file_write)(tdata->threadid, tdata->buffer, tdata->OutFile, "~~%d~~ %s!%s\n", PIN_GetTid(), img_name, rtn_name);

	}

	return true;
}

//----------------ANALYSIS ROUTINES------------------------//
//--------------------------------------------------------//
//-----Print Before functions for known library calls-----//

VOID PIN_FAST_ANALYSIS_CALL PrintInfoBefore0(
	void* args_info,
	const char *rtn_name, const char *img_name,
	ADDRINT sp,
	THREADID threadid,
	ADDRINT returnIp) {

	//--Get pointer to thread local data--//
	bluepill_tls* tdata = static_cast<bluepill_tls*>(PIN_GetThreadData(tls_key, threadid));

	//Print function name
	bool print_args;
	print_args = print_name(returnIp, img_name, rtn_name, tdata, true);

	//If you don't want to print args immediately return
	if (!print_args) return;


	//LOG("Function printed " + string(rtn_name) + "\n");
	//Print args known
	print_args_known(args_info, NULL, rtn_name, img_name, sp, threadid, returnIp, tdata);


}

VOID PIN_FAST_ANALYSIS_CALL PrintInfoBefore1(
	int args_num,
	void* args_info,
	const char *rtn_name, const char *img_name,
	ADDRINT sp,
	THREADID threadid,
	ADDRINT returnIp,
	PASS_ONE_ARGS) {

	//--Get pointer to thread local data--//
	bluepill_tls* tdata = static_cast<bluepill_tls*>(PIN_GetThreadData(tls_key, threadid));

	//Print function name
	bool print_args;
	print_args = print_name(returnIp, img_name, rtn_name, tdata, true);

	//If you don't want to print args immediately return
	if (!print_args) return;

	//Dynamically allocate args
	ADDRINT* args = (ADDRINT*)malloc(sizeof(ADDRINT)*args_num);

	//Store Args in array
	COPY_ONE_ARGS;

	//LOG("Function printed " + string(rtn_name) + "\n");
	//Print args known
	print_args_known(args_info, args, rtn_name, img_name, sp, threadid, returnIp, tdata);

	//Free dynamically allocated args
	free(args);

}

VOID PIN_FAST_ANALYSIS_CALL PrintInfoBefore2(
	int args_num,
	void* args_info,
	const char *rtn_name, const char *img_name,
	ADDRINT sp,
	THREADID threadid,
	ADDRINT returnIp,
	PASS_TWO_ARGS) {

	//--Get pointer to thread local data--//
	bluepill_tls* tdata = static_cast<bluepill_tls*>(PIN_GetThreadData(tls_key, threadid));

	//Print function name
	bool print_args;
	print_args = print_name(returnIp, img_name, rtn_name, tdata, true);

	//If you don't want to print args immediately return
	if (!print_args) return;

	//Dynamically allocate args
	ADDRINT* args = (ADDRINT*)malloc(sizeof(ADDRINT)*args_num);

	//Store Args in array
	COPY_TWO_ARGS;

	//LOG("Function printed " + string(rtn_name) + "\n");
	//Print args known
	print_args_known(args_info, args, rtn_name, img_name, sp, threadid, returnIp, tdata);

	//Free dynamically allocated args
	free(args);

}

VOID PIN_FAST_ANALYSIS_CALL PrintInfoBefore3(
	int args_num,
	void* args_info,
	const char *rtn_name, const char *img_name,
	ADDRINT sp,
	THREADID threadid,
	ADDRINT returnIp,
	PASS_THREE_ARGS) {

	//--Get pointer to thread local data--//
	bluepill_tls* tdata = static_cast<bluepill_tls*>(PIN_GetThreadData(tls_key, threadid));

	//Print function name
	bool print_args;
	print_args = print_name(returnIp, img_name, rtn_name, tdata, true);

	//If you don't want to print args immediately return
	if (!print_args) return;

	//Dynamically allocate args
	ADDRINT* args = (ADDRINT*)malloc(sizeof(ADDRINT)*args_num);

	//Store Args in array
	COPY_THREE_ARGS;

	//LOG("Function printed " + string(rtn_name) + "\n");
	//Print args known
	print_args_known(args_info, args, rtn_name, img_name, sp, threadid, returnIp, tdata);

	//Free dynamically allocated args
	free(args);

}

VOID PIN_FAST_ANALYSIS_CALL PrintInfoBefore4(
	int args_num,
	void* args_info,
	const char *rtn_name, const char *img_name,
	ADDRINT sp,
	THREADID threadid,
	ADDRINT returnIp,
	PASS_FOUR_ARGS) {

	//--Get pointer to thread local data--//
	bluepill_tls* tdata = static_cast<bluepill_tls*>(PIN_GetThreadData(tls_key, threadid));

	//Print function name
	bool print_args;
	print_args = print_name(returnIp, img_name, rtn_name, tdata, true);

	//If you don't want to print args immediately return
	if (!print_args) return;

	//Dynamically allocate args
	ADDRINT* args = (ADDRINT*)malloc(sizeof(ADDRINT)*(args_num));

	//Store Args in array
	COPY_FOUR_ARGS;

	//LOG("Function printed " + string(rtn_name) + "\n");

	//Print args known
	print_args_known(args_info, args, rtn_name, img_name, sp, threadid, returnIp, tdata);

	//Free dynamically allocated args
	free(args);

}

VOID PIN_FAST_ANALYSIS_CALL PrintInfoBefore5(
	int args_num,
	void* args_info,
	const char *rtn_name, const char *img_name,
	ADDRINT sp,
	THREADID threadid,
	ADDRINT returnIp,
	PASS_FIVE_ARGS) {

	//--Get pointer to thread local data--//
	bluepill_tls* tdata = static_cast<bluepill_tls*>(PIN_GetThreadData(tls_key, threadid));

	//Print function name
	bool print_args;
	print_args = print_name(returnIp, img_name, rtn_name, tdata, true);

	//If you don't want to print args immediately return
	if (!print_args) return;

	//Dynamically allocate args
	ADDRINT* args = (ADDRINT*)malloc(sizeof(ADDRINT)*args_num);

	//Store Args in array
	COPY_FIVE_ARGS;

	//LOG("Function printed " + string(rtn_name) + "\n");
	//Print args known
	print_args_known(args_info, args, rtn_name, img_name, sp, threadid, returnIp, tdata);

	//Free dynamically allocated args
	free(args);

}

VOID PIN_FAST_ANALYSIS_CALL PrintInfoBefore6(
	int args_num,
	void* args_info,
	const char *rtn_name, const char *img_name,
	ADDRINT sp,
	THREADID threadid,
	ADDRINT returnIp,
	PASS_SIX_ARGS) {

	//--Get pointer to thread local data--//
	bluepill_tls* tdata = static_cast<bluepill_tls*>(PIN_GetThreadData(tls_key, threadid));

	//Print function name
	bool print_args;
	print_args = print_name(returnIp, img_name, rtn_name, tdata, true);

	//If you don't want to print args immediately return
	if (!print_args) return;

	//Dynamically allocate args
	ADDRINT* args = (ADDRINT*)malloc(sizeof(ADDRINT)*args_num);

	//Store Args in array
	COPY_SIX_ARGS;

	//LOG("Function printed " + string(rtn_name) + "\n");
	//Print args known
	print_args_known(args_info, args, rtn_name, img_name, sp, threadid, returnIp, tdata);

	//Free dynamically allocated args
	free(args);
}

VOID PIN_FAST_ANALYSIS_CALL PrintInfoBefore7(
	int args_num,
	void* args_info,
	const char *rtn_name, const char *img_name,
	ADDRINT sp,
	THREADID threadid,
	ADDRINT returnIp,
	PASS_SEVEN_ARGS) {

	//--Get pointer to thread local data--//
	bluepill_tls* tdata = static_cast<bluepill_tls*>(PIN_GetThreadData(tls_key, threadid));

	//Print function name
	bool print_args;
	print_args = print_name(returnIp, img_name, rtn_name, tdata, true);

	//If you don't want to print args immediately return
	if (!print_args) return;

	//Dynamically allocate args
	ADDRINT* args = (ADDRINT*)malloc(sizeof(ADDRINT)*args_num);

	//Store Args in array
	COPY_SEVEN_ARGS;

	//LOG("Function printed " + string(rtn_name) + "\n");
	//Print args known
	print_args_known(args_info, args, rtn_name, img_name, sp, threadid, returnIp, tdata);

	//Free dynamically allocated args
	free(args);

}

VOID PIN_FAST_ANALYSIS_CALL PrintInfoBefore8(
	int args_num,
	void* args_info,
	const char *rtn_name, const char *img_name,
	ADDRINT sp,
	THREADID threadid,
	ADDRINT returnIp,
	PASS_EIGHT_ARGS) {

	//--Get pointer to thread local data--//
	bluepill_tls* tdata = static_cast<bluepill_tls*>(PIN_GetThreadData(tls_key, threadid));

	//Print function name
	bool print_args;
	print_args = print_name(returnIp, img_name, rtn_name, tdata, true);

	//If you don't want to print args immediately return
	if (!print_args) return;

	//Dynamically allocate args
	ADDRINT* args = (ADDRINT*)malloc(sizeof(ADDRINT)*args_num);

	//Store Args in array
	COPY_EIGHT_ARGS;

	//LOG("Function printed " + string(rtn_name) + "\n");
	//Print args known
	print_args_known(args_info, args, rtn_name, img_name, sp, threadid, returnIp, tdata);

	//Free dynamically allocated args
	free(args);

}

VOID PIN_FAST_ANALYSIS_CALL PrintInfoBefore9(
	int args_num,
	void* args_info,
	const char *rtn_name, const char *img_name,
	ADDRINT sp,
	THREADID threadid,
	ADDRINT returnIp,
	PASS_NINE_ARGS) {

	//--Get pointer to thread local data--//
	bluepill_tls* tdata = static_cast<bluepill_tls*>(PIN_GetThreadData(tls_key, threadid));

	//Print function name
	bool print_args;
	print_args = print_name(returnIp, img_name, rtn_name, tdata, true);

	//If you don't want to print args immediately return
	if (!print_args) return;

	//Dynamically allocate args
	ADDRINT* args = (ADDRINT*)malloc(sizeof(ADDRINT)*args_num);

	//Store Args in array
	COPY_NINE_ARGS;

	//LOG("Function printed " + string(rtn_name) + "\n");
	//Print args known
	print_args_known(args_info, args, rtn_name, img_name, sp, threadid, returnIp, tdata);

	//Free dynamically allocated args
	free(args);

}

VOID PIN_FAST_ANALYSIS_CALL PrintInfoBefore10(
	int args_num,
	void* args_info,
	const char *rtn_name, const char *img_name,
	ADDRINT sp,
	THREADID threadid,
	ADDRINT returnIp,
	PASS_TEN_ARGS) {

	//--Get pointer to thread local data--//
	bluepill_tls* tdata = static_cast<bluepill_tls*>(PIN_GetThreadData(tls_key, threadid));

	//Print function name
	bool print_args;
	print_args = print_name(returnIp, img_name, rtn_name, tdata, true);

	//If you don't want to print args immediately return
	if (!print_args) return;

	//Dynamically allocate args
	ADDRINT* args = (ADDRINT*)malloc(sizeof(ADDRINT)*args_num);

	//Store Args in array
	COPY_TEN_ARGS;

	//LOG("Function printed " + string(rtn_name) + "\n");
	//Print args known
	print_args_known(args_info, args, rtn_name, img_name, sp, threadid, returnIp, tdata);

	//Free dynamically allocated args
	free(args);

}

VOID PIN_FAST_ANALYSIS_CALL PrintInfoBefore11(
	int args_num,
	void* args_info,
	const char *rtn_name, const char *img_name,
	ADDRINT sp,
	THREADID threadid,
	ADDRINT returnIp,
	PASS_ELEVEN_ARGS) {

	//--Get pointer to thread local data--//
	bluepill_tls* tdata = static_cast<bluepill_tls*>(PIN_GetThreadData(tls_key, threadid));

	//Print function name
	bool print_args;
	print_args = print_name(returnIp, img_name, rtn_name, tdata, true);

	//If you don't want to print args immediately return
	if (!print_args) return;

	//Dynamically allocate args
	ADDRINT* args = (ADDRINT*)malloc(sizeof(ADDRINT)*args_num);

	//Store Args in array
	COPY_ELEVEN_ARGS;

	//LOG("Function printed " + string(rtn_name) + "\n");
	//Print args known
	print_args_known(args_info, args, rtn_name, img_name, sp, threadid, returnIp, tdata);

	//Free dynamically allocated args
	free(args);

}

VOID PIN_FAST_ANALYSIS_CALL PrintInfoBefore12(
	int args_num,
	void* args_info,
	const char *rtn_name, const char *img_name,
	ADDRINT sp,
	THREADID threadid,
	ADDRINT returnIp,
	PASS_TWELVE_ARGS) {

	//--Get pointer to thread local data--//
	bluepill_tls* tdata = static_cast<bluepill_tls*>(PIN_GetThreadData(tls_key, threadid));

	//Print function name
	bool print_args;
	print_args = print_name(returnIp, img_name, rtn_name, tdata, true);

	//If you don't want to print args immediately return
	if (!print_args) return;

	//Dynamically allocate args
	ADDRINT* args = (ADDRINT*)malloc(sizeof(ADDRINT)*args_num);

	//Store Args in array
	COPY_TWELVE_ARGS;

	//LOG("Function printed " + string(rtn_name) + "\n");
	//Print args known
	print_args_known(args_info, args, rtn_name, img_name, sp, threadid, returnIp, tdata);

	//Free dynamically allocated args
	free(args);

}

VOID PIN_FAST_ANALYSIS_CALL PrintInfoBefore13(
	int args_num,
	void* args_info,
	const char *rtn_name, const char *img_name,
	ADDRINT sp,
	THREADID threadid,
	ADDRINT returnIp,
	PASS_THIRTEEN_ARGS) {

	//--Get pointer to thread local data--//
	bluepill_tls* tdata = static_cast<bluepill_tls*>(PIN_GetThreadData(tls_key, threadid));

	//Print function name
	bool print_args;
	print_args = print_name(returnIp, img_name, rtn_name, tdata, true);

	//If you don't want to print args immediately return
	if (!print_args) return;

	//Dynamically allocate args
	ADDRINT* args = (ADDRINT*)malloc(sizeof(ADDRINT)*args_num);

	//Store Args in array
	COPY_THIRTEEN_ARGS;

	//LOG("Function printed " + string(rtn_name) + "\n");
	//Print args known
	print_args_known(args_info, args, rtn_name, img_name, sp, threadid, returnIp, tdata);

	//Free dynamically allocated args
	free(args);

}

VOID PIN_FAST_ANALYSIS_CALL PrintInfoBefore14(
	int args_num,
	void* args_info,
	const char *rtn_name, const char *img_name,
	ADDRINT sp,
	THREADID threadid,
	ADDRINT returnIp,
	PASS_FOURTEEN_ARGS) {

	//--Get pointer to thread local data--//
	bluepill_tls* tdata = static_cast<bluepill_tls*>(PIN_GetThreadData(tls_key, threadid));

	//Print function name
	bool print_args;
	print_args = print_name(returnIp, img_name, rtn_name, tdata, true);

	//If you don't want to print args immediately return
	if (!print_args) return;

	//Dynamically allocate args
	ADDRINT* args = (ADDRINT*)malloc(sizeof(ADDRINT)*args_num);

	//Store Args in array
	COPY_FOURTEEN_ARGS;

	//LOG("Function printed " + string(rtn_name) + "\n");
	//Print args known
	print_args_known(args_info, args, rtn_name, img_name, sp, threadid, returnIp, tdata);

	//Free dynamically allocated args
	free(args);

}

VOID PIN_FAST_ANALYSIS_CALL PrintInfoBefore15(
	int args_num,
	void* args_info,
	const char *rtn_name, const char *img_name,
	ADDRINT sp,
	THREADID threadid,
	ADDRINT returnIp,
	PASS_FIFTEEN_ARGS) {

	//--Get pointer to thread local data--//
	bluepill_tls* tdata = static_cast<bluepill_tls*>(PIN_GetThreadData(tls_key, threadid));

	//Print function name
	bool print_args;
	print_args = print_name(returnIp, img_name, rtn_name, tdata, true);

	//If you don't want to print args immediately return
	if (!print_args) return;

	//Dynamically allocate args
	ADDRINT* args = (ADDRINT*)malloc(sizeof(ADDRINT)*args_num);

	//Store Args in array
	COPY_FIFTEEN_ARGS;

	//LOG("Function printed " + string(rtn_name) + "\n");
	//Print args known
	print_args_known(args_info, args, rtn_name, img_name, sp, threadid, returnIp, tdata);

	//Free dynamically allocated args
	free(args);

}

VOID PIN_FAST_ANALYSIS_CALL PrintInfoBefore16(
	int args_num,
	void* args_info,
	const char *rtn_name, const char *img_name,
	ADDRINT sp,
	THREADID threadid,
	ADDRINT returnIp,
	PASS_SIXTEEN_ARGS) {

	//--Get pointer to thread local data--//
	bluepill_tls* tdata = static_cast<bluepill_tls*>(PIN_GetThreadData(tls_key, threadid));

	//Print function name
	bool print_args;
	print_args = print_name(returnIp, img_name, rtn_name, tdata, true);

	//If you don't want to print args immediately return
	if (!print_args) return;

	//Dynamically allocate args
	ADDRINT* args = (ADDRINT*)malloc(sizeof(ADDRINT)*args_num);

	//Store Args in array
	COPY_SIXTEEN_ARGS;

	//LOG("Function printed " + string(rtn_name) + "\n");
	//Print args known
	print_args_known(args_info, args, rtn_name, img_name, sp, threadid, returnIp, tdata);

	//Free dynamically allocated args
	free(args);

}

VOID PIN_FAST_ANALYSIS_CALL PrintInfoBefore17(
	int args_num,
	void* args_info,
	const char *rtn_name, const char *img_name,
	ADDRINT sp,
	THREADID threadid,
	ADDRINT returnIp,
	PASS_SEVENTEEN_ARGS) {

	//--Get pointer to thread local data--//
	bluepill_tls* tdata = static_cast<bluepill_tls*>(PIN_GetThreadData(tls_key, threadid));

	//Print function name
	bool print_args;
	print_args = print_name(returnIp, img_name, rtn_name, tdata, true);

	//If you don't want to print args immediately return
	if (!print_args) return;

	//Dynamically allocate args
	ADDRINT* args = (ADDRINT*)malloc(sizeof(ADDRINT)*args_num);

	//Store Args in array
	COPY_SEVENTEEN_ARGS;

	//LOG("Function printed " + string(rtn_name) + "\n");
	//Print args known
	print_args_known(args_info, args, rtn_name, img_name, sp, threadid, returnIp, tdata);

	//Free dynamically allocated args
	free(args);

}

VOID PIN_FAST_ANALYSIS_CALL PrintInfoBefore18(
	int args_num,
	void* args_info,
	const char *rtn_name, const char *img_name,
	ADDRINT sp,
	THREADID threadid,
	ADDRINT returnIp,
	PASS_EIGHTEEN_ARGS) {

	//--Get pointer to thread local data--//
	bluepill_tls* tdata = static_cast<bluepill_tls*>(PIN_GetThreadData(tls_key, threadid));

	//Print function name
	bool print_args;
	print_args = print_name(returnIp, img_name, rtn_name, tdata, true);

	//If you don't want to print args immediately return
	if (!print_args) return;

	//Dynamically allocate args
	ADDRINT* args = (ADDRINT*)malloc(sizeof(ADDRINT)*args_num);

	//Store Args in array
	COPY_EIGHTEEN_ARGS;

	//LOG("Function printed " + string(rtn_name) + "\n");
	//Print args known
	print_args_known(args_info, args, rtn_name, img_name, sp, threadid, returnIp, tdata);

	//Free dynamically allocated args
	free(args);

}

//----------------------------------------------------------//

//-----Print Before functions for known library calls AND empty instrumentation -----//

VOID PIN_FAST_ANALYSIS_CALL PrintInfoBeforeEmpty0(
	void* args_info,
	const char *rtn_name, const char *img_name,
	ADDRINT sp,
	THREADID threadid,
	ADDRINT returnIp) {

	globalCountBefore++;

}

VOID PIN_FAST_ANALYSIS_CALL PrintInfoBeforeEmpty1(
	int args_num,
	void* args_info,
	const char *rtn_name, const char *img_name,
	ADDRINT sp,
	THREADID threadid,
	ADDRINT returnIp,
	PASS_ONE_ARGS) {

	globalCountBefore++;

}

VOID PIN_FAST_ANALYSIS_CALL PrintInfoBeforeEmpty2(
	int args_num,
	void* args_info,
	const char *rtn_name, const char *img_name,
	ADDRINT sp,
	THREADID threadid,
	ADDRINT returnIp,
	PASS_TWO_ARGS) {

	globalCountBefore++;

}

VOID PIN_FAST_ANALYSIS_CALL PrintInfoBeforeEmpty3(
	int args_num,
	void* args_info,
	const char *rtn_name, const char *img_name,
	ADDRINT sp,
	THREADID threadid,
	ADDRINT returnIp,
	PASS_THREE_ARGS) {

	globalCountBefore++;

}

VOID PIN_FAST_ANALYSIS_CALL PrintInfoBeforeEmpty4(
	int args_num,
	void* args_info,
	const char *rtn_name, const char *img_name,
	ADDRINT sp,
	THREADID threadid,
	ADDRINT returnIp,
	PASS_FOUR_ARGS) {

	globalCountBefore++;

}

VOID PIN_FAST_ANALYSIS_CALL PrintInfoBeforeEmpty5(
	int args_num,
	void* args_info,
	const char *rtn_name, const char *img_name,
	ADDRINT sp,
	THREADID threadid,
	ADDRINT returnIp,
	PASS_FIVE_ARGS) {

	globalCountBefore++;

}

VOID PIN_FAST_ANALYSIS_CALL PrintInfoBeforeEmpty6(
	int args_num,
	void* args_info,
	const char *rtn_name, const char *img_name,
	ADDRINT sp,
	THREADID threadid,
	ADDRINT returnIp,
	PASS_SIX_ARGS) {

	globalCountBefore++;

}

VOID PIN_FAST_ANALYSIS_CALL PrintInfoBeforeEmpty7(
	int args_num,
	void* args_info,
	const char *rtn_name, const char *img_name,
	ADDRINT sp,
	THREADID threadid,
	ADDRINT returnIp,
	PASS_SEVEN_ARGS) {

	globalCountBefore++;

}

VOID PIN_FAST_ANALYSIS_CALL PrintInfoBeforeEmpty8(
	int args_num,
	void* args_info,
	const char *rtn_name, const char *img_name,
	ADDRINT sp,
	THREADID threadid,
	ADDRINT returnIp,
	PASS_EIGHT_ARGS) {

	globalCountBefore++;

}

VOID PIN_FAST_ANALYSIS_CALL PrintInfoBeforeEmpty9(
	int args_num,
	void* args_info,
	const char *rtn_name, const char *img_name,
	ADDRINT sp,
	THREADID threadid,
	ADDRINT returnIp,
	PASS_NINE_ARGS) {

	globalCountBefore++;

}

VOID PIN_FAST_ANALYSIS_CALL PrintInfoBeforeEmpty10(
	int args_num,
	void* args_info,
	const char *rtn_name, const char *img_name,
	ADDRINT sp,
	THREADID threadid,
	ADDRINT returnIp,
	PASS_TEN_ARGS) {

	globalCountBefore++;

}

VOID PIN_FAST_ANALYSIS_CALL PrintInfoBeforeEmpty11(
	int args_num,
	void* args_info,
	const char *rtn_name, const char *img_name,
	ADDRINT sp,
	THREADID threadid,
	ADDRINT returnIp,
	PASS_ELEVEN_ARGS) {

	globalCountBefore++;

}

VOID PIN_FAST_ANALYSIS_CALL PrintInfoBeforeEmpty12(
	int args_num,
	void* args_info,
	const char *rtn_name, const char *img_name,
	ADDRINT sp,
	THREADID threadid,
	ADDRINT returnIp,
	PASS_TWELVE_ARGS) {

	globalCountBefore++;

}

VOID PIN_FAST_ANALYSIS_CALL PrintInfoBeforeEmpty13(
	int args_num,
	void* args_info,
	const char *rtn_name, const char *img_name,
	ADDRINT sp,
	THREADID threadid,
	ADDRINT returnIp,
	PASS_THIRTEEN_ARGS) {

	globalCountBefore++;

}

VOID PIN_FAST_ANALYSIS_CALL PrintInfoBeforeEmpty14(
	int args_num,
	void* args_info,
	const char *rtn_name, const char *img_name,
	ADDRINT sp,
	THREADID threadid,
	ADDRINT returnIp,
	PASS_FOURTEEN_ARGS) {

	globalCountBefore++;

}

VOID PIN_FAST_ANALYSIS_CALL PrintInfoBeforeEmpty15(
	int args_num,
	void* args_info,
	const char *rtn_name, const char *img_name,
	ADDRINT sp,
	THREADID threadid,
	ADDRINT returnIp,
	PASS_FIFTEEN_ARGS) {

	globalCountBefore++;

}

VOID PIN_FAST_ANALYSIS_CALL PrintInfoBeforeEmpty16(
	int args_num,
	void* args_info,
	const char *rtn_name, const char *img_name,
	ADDRINT sp,
	THREADID threadid,
	ADDRINT returnIp,
	PASS_SIXTEEN_ARGS) {

	globalCountBefore++;

}

VOID PIN_FAST_ANALYSIS_CALL PrintInfoBeforeEmpty17(
	int args_num,
	void* args_info,
	const char *rtn_name, const char *img_name,
	ADDRINT sp,
	THREADID threadid,
	ADDRINT returnIp,
	PASS_SEVENTEEN_ARGS) {

	globalCountBefore++;

}

VOID PIN_FAST_ANALYSIS_CALL PrintInfoBeforeEmpty18(
	int args_num,
	void* args_info,
	const char *rtn_name, const char *img_name,
	ADDRINT sp,
	THREADID threadid,
	ADDRINT returnIp,
	PASS_EIGHTEEN_ARGS) {

	globalCountBefore++;

}

//-----Print Before function for unknown library calls-----//

VOID PIN_FAST_ANALYSIS_CALL PrintInfoBeforeUnk(const char *rtn_name, const char *img_name,
	THREADID threadid,
	ADDRINT returnIp,
	ADDRINT sp
) {
	//--Get pointer to thread local data--//
	bluepill_tls* tdata = static_cast<bluepill_tls*>(PIN_GetThreadData(tls_key, threadid));

	//Print function name
	bool print_args;
	print_args = print_name(returnIp, img_name, rtn_name, tdata, false);

	//If you don't want to print args immediately return
	if (!print_args) return;

	ADDRINT* sp_pointer;
	ADDRINT value;
	int size;

	//Obtain max_args_unk arguments from stack
	for (int i = 1; i <= (Config::getInstance())->getMaxArgsUnk(); i++) {
		sp_pointer = (ADDRINT *)(sp + 4 * i);
		size = PIN_SafeCopy(&value, sp_pointer, sizeof(ADDRINT));
		//If an unaccessible memory region is reached just stop
		if (size < sizeof(ADDRINT)) {
			stringstream ss;
			ss << i;
			string str = ss.str();
			LOG("Early return : " + str + "\n");
			return;
		}

		(tdata->file_write)(tdata->threadid, tdata->buffer, tdata->OutFile, "\targ %d: 0x%x\n", i - 1, value);


	}
}

//-----Print Before functions for unknown library calls AND empty instrumentation -----//

VOID PIN_FAST_ANALYSIS_CALL PrintInfoBeforeUnkEmpty(const char *rtn_name, const char *img_name,
	THREADID threadid,
	ADDRINT returnIp,
	ADDRINT sp
) {

	globalCountBefore++;
}

//------------------------------------------------------------//

//Print info after syscall
VOID PIN_FAST_ANALYSIS_CALL PrintInfoAfter(const char *rtn_name, const char *img_name,
	ADDRINT sp,
	ADDRINT ip,
	THREADID threadid,
	ADDRINT ret_value) {

	apicall_t *exeApi = NULL;
	uint api_count;

	//Get shadow stack
	bluepill_tls* tdata = static_cast<bluepill_tls*>(PIN_GetThreadData(tls_key, threadid));
	std::vector<stackEntry>* shadow = (tdata->shadowStack);

	//Retrieve stack top entry apicall info
	for (vector<stackEntry>::reverse_iterator i = shadow->rbegin();
		i != shadow->rend(); ++i) {

		//Get top entry on stack checking sp, img name and rtn name -> Here also check sp equality (To prevent "missing" calls AND GetStringTypeW case)
		if ((i->currentSP == sp) && (strcmp((i->apiInfo)->img_name, img_name) == 0) && (strcmp((i->apiInfo)->rtn_name, rtn_name) == 0)) {

			//Check if returnIp is in main image -> If not return
			if (!(ProcInfo::getInstance()->isInsideMainIMG(i->returnIp)) && (NO_MAIN_IMAGE_IGNORE || NO_MAIN_IMAGE_NOARGS)) {
				return;
			}

			exeApi = i->apiInfo;
			api_count = i->api_counter;
			break;
		}
	}

	//LOG("After loop " + string(rtn_name) + "\n");
	if (exeApi == NULL) {
		//LOG("Returning " + string(rtn_name) + "\n");
		return; //We havent found the call, maybe we got here with a jump?
	}
	//LOG("After return " + string(rtn_name) + "\n");

	//No way to know if successful or not this time -> Each system call has a different return value on error
	(tdata->file_write)(threadid, tdata->buffer, tdata->OutFile, "%u    executed %s!%s =>\n", api_count, img_name, rtn_name);
	//(tdata->file_write)(tdata->threadid,OutFile, "Stack pointer after call is %d\n", sp);

	//Set return value
	(exeApi->retval).value = ret_value;
	(exeApi->retval).pre = false;


	//--Print args using prototype--
	for (int i = 0; i < exeApi->count; i++) {

		drsys_arg_t curr_arg = (exeApi->arguments)[i];
		curr_arg.pre = false;

		//Differentiate between PYREBOX_DB and drltrace
		if (Config::getInstance()->getPdbFlag()) {

			//Print only if output
			if (curr_arg.flags == INOUT) {
				Pyrebox_libcalls::print_arg_pyrebox(&curr_arg, tdata, api_count);
			}

		}
		else {

			//Print only if output
			if (TEST(DRSYS_PARAM_OUT, curr_arg.flags)) {
				Drltrace_libcalls::print_arg_drltrace(&curr_arg, tdata, api_count);
			}

		}
	}

	//Print retval differentianting between Pyrebox and drltrace
	if (Config::getInstance()->getPdbFlag()) {
		Pyrebox_libcalls::print_arg_pyrebox(&(exeApi->retval), tdata, api_count);
	}
	else {
		Drltrace_libcalls::print_arg_drltrace(&(exeApi->retval), tdata, api_count);
	}

	//(tdata->file_write)(tdata->threadid,OutFile, "Shadow stack size before resize: %d\n", shadow->size());

	//ReAdjust stack
	bool found = false;
	for (vector<stackEntry>::reverse_iterator i = shadow->rbegin();
		i != shadow->rend(); /*++i*/) {
		//buf_write(OutFile, "Stack pointer of entry is %d\n", i->currentSP);

		//If printed stack entry not found yet either
		// a) Check if top entry is the printed entry -> Set found to true and free it
		// b) If top entry is not the printed entry -> Just free it (we want to delete everything in the stack before the printed entry)
		if (!found) {

			//Check if top entry is printed stack entry
			if ((i->currentSP == sp) && (strcmp((i->apiInfo)->img_name, img_name) == 0) && (strcmp((i->apiInfo)->rtn_name, rtn_name) == 0)) {
				found = true;
			}

			free(i->apiInfo);

			//Reconstruct the reverse iterator
			i = vector<stackEntry>::reverse_iterator(shadow->erase((i + 1).base()));

			globalCountAfter++;

		}
		//Printed entry has been found, so now delete every stack entry with a lower stack pointer value
		else {

			if (i->currentSP < sp) {
				free(i->apiInfo);

				//Reconstruct the reverse iterator
				i = vector<stackEntry>::reverse_iterator(shadow->erase((i + 1).base()));

				globalCountAfter++;
			}
			else {
				i++;
			}

		}

	}

	//LOG("After finish " + string(rtn_name) + "\n");
	//buf_write(OutFile, "Shadow stack size after resize: %d\n", shadow->size());

}


//Print info after syscall for empty instrumentation
VOID PIN_FAST_ANALYSIS_CALL PrintInfoAfterEmpty(const char *rtn_name, const char *img_name,
	ADDRINT sp,
	ADDRINT ip,
	THREADID threadid,
	ADDRINT ret_value) {

	globalCountAfter++;

}


//Add analysis routines
void TracerLibCalls::addAnalysisRtns(IMG img) {

	//If empty image instrumentation just count images
	if (Config::getInstance()->getEmptyImgInstrFlag()) {
		globalCountImage++;
		return;
	}

	// Walk through the symbols in the symbol table.
	//
	for (SYM sym = IMG_RegsymHead(img); SYM_Valid(sym); sym = SYM_Next(sym))
	{
		//const char* undFuncName = PIN_UndecorateSymbolName(SYM_Name(sym), UNDECORATION_NAME_ONLY).c_str();
		RTN rtn = RTN_FindByAddress(IMG_LowAddress(img) + SYM_Value(sym));

		if (RTN_Valid(rtn))
		{

			//Routine name
			const char* rtn_name = RTN_Name(rtn).c_str();

			//Check that we are not dealing with a system call, since we already dealt with them previously -> Also filter ZW for now? (Kernel mode)
			if (memcmp(rtn_name, "Nt", 2) && memcmp(rtn_name, "Zw", 2)) {

				//Image name -> Full path 
				//We just need last part
				const char *img_name = strrchr(IMG_Name(img).c_str(), '\\') + 1;

				//--Look for routine in hashmaps
				bool rtnFound = false;
				std::hash_map<string, std::vector<drsys_arg_t *>>::iterator it; //it drltrace
				std::hash_map<string, libcall_info_t*>::iterator it_pyrebox; // it pyrebox

																			 //Check if routine is in pyrebox db or in drltrace config file, depending on PYREBOX_DB value
				if (Config::getInstance()->getPdbFlag()) {
					rtnFound = Pyrebox_libcalls::findRtn(img_name, rtn_name, it_pyrebox);
				}
				else {
					rtnFound = Drltrace_libcalls::findRtn(rtn_name,it);
				}

				//KNOWN PROTOTYPE
				if (rtnFound) {

					int argNumber;
					void* libPointer;

					//Differentiate between Pyrebox and drltrace
					if (Config::getInstance()->getPdbFlag()) {
						argNumber = (it_pyrebox->second)->argnum;
						libPointer = it_pyrebox->second;
					}
					else {
						argNumber = argNumber = ((it->second).size()) - 1;
						libPointer = &(it->second);
					}

					//KNOWN PROTOTYPE AND NOT EMPTY ROUTINE INSTRUMENTATION
					if (!EMPTY_RTN_INSTR) {

						RTN_Open(rtn);

						switch (argNumber) {


						case(0):

							RTN_InsertCall(rtn, IPOINT_BEFORE, (AFUNPTR)PrintInfoBefore0, IARG_FAST_ANALYSIS_CALL,
								IARG_ADDRINT, libPointer, IARG_ADDRINT, rtn_name, IARG_ADDRINT, img_name,
								IARG_REG_VALUE, REG_STACK_PTR,
								IARG_THREAD_ID,
								IARG_RETURN_IP,
								IARG_END);
							break;


						case(1):

							RTN_InsertCall(rtn, IPOINT_BEFORE, (AFUNPTR)PrintInfoBefore1, IARG_FAST_ANALYSIS_CALL,
								IARG_ADDRINT, argNumber,
								IARG_ADDRINT, libPointer, IARG_ADDRINT, rtn_name, IARG_ADDRINT, img_name,
								IARG_REG_VALUE, REG_STACK_PTR,
								IARG_THREAD_ID,
								IARG_RETURN_IP,
								ONE_ARGS
								IARG_END);
							break;


						case(2):

							RTN_InsertCall(rtn, IPOINT_BEFORE, (AFUNPTR)PrintInfoBefore2, IARG_FAST_ANALYSIS_CALL,
								IARG_ADDRINT, argNumber,
								IARG_ADDRINT, libPointer, IARG_ADDRINT, rtn_name, IARG_ADDRINT, img_name,
								IARG_REG_VALUE, REG_STACK_PTR,
								IARG_THREAD_ID,
								IARG_RETURN_IP,
								TWO_ARGS
								IARG_END);
							break;


						case(3):
							RTN_InsertCall(rtn, IPOINT_BEFORE, (AFUNPTR)PrintInfoBefore3, IARG_FAST_ANALYSIS_CALL,
								IARG_ADDRINT, argNumber,
								IARG_ADDRINT, libPointer, IARG_ADDRINT, rtn_name, IARG_ADDRINT, img_name,
								IARG_REG_VALUE, REG_STACK_PTR,
								IARG_THREAD_ID,
								IARG_RETURN_IP,
								THREE_ARGS
								IARG_END);
							break;


						case(4):
							RTN_InsertCall(rtn, IPOINT_BEFORE, (AFUNPTR)PrintInfoBefore4, IARG_FAST_ANALYSIS_CALL,
								IARG_ADDRINT, argNumber,
								IARG_ADDRINT, libPointer, IARG_ADDRINT, rtn_name, IARG_ADDRINT, img_name,
								IARG_REG_VALUE, REG_STACK_PTR,
								IARG_THREAD_ID,
								IARG_RETURN_IP,
								FOUR_ARGS
								IARG_END);
							break;


						case(5):
							RTN_InsertCall(rtn, IPOINT_BEFORE, (AFUNPTR)PrintInfoBefore5, IARG_FAST_ANALYSIS_CALL,
								IARG_ADDRINT, argNumber,
								IARG_ADDRINT, libPointer, IARG_ADDRINT, rtn_name, IARG_ADDRINT, img_name,
								IARG_REG_VALUE, REG_STACK_PTR,
								IARG_THREAD_ID,
								IARG_RETURN_IP,
								FIVE_ARGS
								IARG_END);
							break;


						case(6):
							RTN_InsertCall(rtn, IPOINT_BEFORE, (AFUNPTR)PrintInfoBefore6, IARG_FAST_ANALYSIS_CALL,
								IARG_ADDRINT, argNumber,
								IARG_ADDRINT, libPointer, IARG_ADDRINT, rtn_name, IARG_ADDRINT, img_name,
								IARG_REG_VALUE, REG_STACK_PTR,
								IARG_THREAD_ID,
								IARG_RETURN_IP,
								SIX_ARGS
								IARG_END);
							break;


						case(7):
							RTN_InsertCall(rtn, IPOINT_BEFORE, (AFUNPTR)PrintInfoBefore7, IARG_FAST_ANALYSIS_CALL,
								IARG_ADDRINT, argNumber,
								IARG_ADDRINT, libPointer, IARG_ADDRINT, rtn_name, IARG_ADDRINT, img_name,
								IARG_REG_VALUE, REG_STACK_PTR,
								IARG_THREAD_ID,
								IARG_RETURN_IP,
								SEVEN_ARGS
								IARG_END);
							break;


						case(8):
							RTN_InsertCall(rtn, IPOINT_BEFORE, (AFUNPTR)PrintInfoBefore8, IARG_FAST_ANALYSIS_CALL,
								IARG_ADDRINT, argNumber,
								IARG_ADDRINT, libPointer, IARG_ADDRINT, rtn_name, IARG_ADDRINT, img_name,
								IARG_REG_VALUE, REG_STACK_PTR,
								IARG_THREAD_ID,
								IARG_RETURN_IP,
								EIGHT_ARGS
								IARG_END);
							break;

						case(9):
							RTN_InsertCall(rtn, IPOINT_BEFORE, (AFUNPTR)PrintInfoBefore9, IARG_FAST_ANALYSIS_CALL,
								IARG_ADDRINT, argNumber,
								IARG_ADDRINT, libPointer, IARG_ADDRINT, rtn_name, IARG_ADDRINT, img_name,
								IARG_REG_VALUE, REG_STACK_PTR,
								IARG_THREAD_ID,
								IARG_RETURN_IP,
								NINE_ARGS
								IARG_END);
							break;

						case(10):
							RTN_InsertCall(rtn, IPOINT_BEFORE, (AFUNPTR)PrintInfoBefore10, IARG_FAST_ANALYSIS_CALL,
								IARG_ADDRINT, argNumber,
								IARG_ADDRINT, libPointer, IARG_ADDRINT, rtn_name, IARG_ADDRINT, img_name,
								IARG_REG_VALUE, REG_STACK_PTR,
								IARG_THREAD_ID,
								IARG_RETURN_IP,
								TEN_ARGS
								IARG_END);
							break;

						case(11):
							RTN_InsertCall(rtn, IPOINT_BEFORE, (AFUNPTR)PrintInfoBefore11, IARG_FAST_ANALYSIS_CALL,
								IARG_ADDRINT, argNumber,
								IARG_ADDRINT, libPointer, IARG_ADDRINT, rtn_name, IARG_ADDRINT, img_name,
								IARG_REG_VALUE, REG_STACK_PTR,
								IARG_THREAD_ID,
								IARG_RETURN_IP,
								ELEVEN_ARGS
								IARG_END);
							break;

						case(12):
							RTN_InsertCall(rtn, IPOINT_BEFORE, (AFUNPTR)PrintInfoBefore12, IARG_FAST_ANALYSIS_CALL,
								IARG_ADDRINT, argNumber,
								IARG_ADDRINT, libPointer, IARG_ADDRINT, rtn_name, IARG_ADDRINT, img_name,
								IARG_REG_VALUE, REG_STACK_PTR,
								IARG_THREAD_ID,
								IARG_RETURN_IP,
								TWELVE_ARGS
								IARG_END);
							break;

						case(13):
							RTN_InsertCall(rtn, IPOINT_BEFORE, (AFUNPTR)PrintInfoBefore13, IARG_FAST_ANALYSIS_CALL,
								IARG_ADDRINT, argNumber,
								IARG_ADDRINT, libPointer, IARG_ADDRINT, rtn_name, IARG_ADDRINT, img_name,
								IARG_REG_VALUE, REG_STACK_PTR,
								IARG_THREAD_ID,
								IARG_RETURN_IP,
								THIRTEEN_ARGS
								IARG_END);
							break;

						case(14):
							RTN_InsertCall(rtn, IPOINT_BEFORE, (AFUNPTR)PrintInfoBefore14, IARG_FAST_ANALYSIS_CALL,
								IARG_ADDRINT, argNumber,
								IARG_ADDRINT, libPointer, IARG_ADDRINT, rtn_name, IARG_ADDRINT, img_name,
								IARG_REG_VALUE, REG_STACK_PTR,
								IARG_THREAD_ID,
								IARG_RETURN_IP,
								FOURTEEN_ARGS
								IARG_END);
							break;

						case(15):
							RTN_InsertCall(rtn, IPOINT_BEFORE, (AFUNPTR)PrintInfoBefore15, IARG_FAST_ANALYSIS_CALL,
								IARG_ADDRINT, argNumber,
								IARG_ADDRINT, libPointer, IARG_ADDRINT, rtn_name, IARG_ADDRINT, img_name,
								IARG_REG_VALUE, REG_STACK_PTR,
								IARG_THREAD_ID,
								IARG_RETURN_IP,
								FIFTEEN_ARGS
								IARG_END);
							break;

						case(16):
							RTN_InsertCall(rtn, IPOINT_BEFORE, (AFUNPTR)PrintInfoBefore16, IARG_FAST_ANALYSIS_CALL,
								IARG_ADDRINT, argNumber,
								IARG_ADDRINT, libPointer, IARG_ADDRINT, rtn_name, IARG_ADDRINT, img_name,
								IARG_REG_VALUE, REG_STACK_PTR,
								IARG_THREAD_ID,
								IARG_RETURN_IP,
								SIXTEEN_ARGS
								IARG_END);
							break;

						case(17):
							RTN_InsertCall(rtn, IPOINT_BEFORE, (AFUNPTR)PrintInfoBefore17, IARG_FAST_ANALYSIS_CALL,
								IARG_ADDRINT, argNumber,
								IARG_ADDRINT, libPointer, IARG_ADDRINT, rtn_name, IARG_ADDRINT, img_name,
								IARG_REG_VALUE, REG_STACK_PTR,
								IARG_THREAD_ID,
								IARG_RETURN_IP,
								SEVENTEEN_ARGS
								IARG_END);
							break;

						case(18):
							RTN_InsertCall(rtn, IPOINT_BEFORE, (AFUNPTR)PrintInfoBefore18, IARG_FAST_ANALYSIS_CALL,
								IARG_ADDRINT, argNumber,
								IARG_ADDRINT, libPointer, IARG_ADDRINT, rtn_name, IARG_ADDRINT, img_name,
								IARG_REG_VALUE, REG_STACK_PTR,
								IARG_THREAD_ID,
								IARG_RETURN_IP,
								EIGHTEEN_ARGS
								IARG_END);
							break;
						}


						//---------AFTER----------//
						
						RTN_InsertCall(rtn, IPOINT_AFTER, (AFUNPTR)PrintInfoAfter, IARG_FAST_ANALYSIS_CALL, IARG_ADDRINT, rtn_name, IARG_ADDRINT, img_name,
							IARG_REG_VALUE, REG_STACK_PTR,
							IARG_REG_VALUE, REG_INST_PTR,
							IARG_THREAD_ID,
							IARG_FUNCRET_EXITPOINT_VALUE,
							IARG_END);
						

						RTN_Close(rtn);

					}

					//KNOWN ROUTINE AND EMPTY INSTRUMENENTATION
					else {

						RTN_Open(rtn);

						switch (argNumber) {

						case(0):
							RTN_InsertCall(rtn, IPOINT_BEFORE, (AFUNPTR)PrintInfoBeforeEmpty0, IARG_FAST_ANALYSIS_CALL,
								IARG_ADDRINT, libPointer, IARG_ADDRINT, rtn_name, IARG_ADDRINT, img_name,
								IARG_REG_VALUE, REG_STACK_PTR,
								IARG_THREAD_ID,
								IARG_RETURN_IP,
								IARG_END);
							break;

						case(1):
							RTN_InsertCall(rtn, IPOINT_BEFORE, (AFUNPTR)PrintInfoBeforeEmpty1, IARG_FAST_ANALYSIS_CALL,
								IARG_ADDRINT, argNumber,
								IARG_ADDRINT, libPointer, IARG_ADDRINT, rtn_name, IARG_ADDRINT, img_name,
								IARG_REG_VALUE, REG_STACK_PTR,
								IARG_THREAD_ID,
								IARG_RETURN_IP,
								ONE_ARGS
								IARG_END);
							break;

						case(2):
							RTN_InsertCall(rtn, IPOINT_BEFORE, (AFUNPTR)PrintInfoBeforeEmpty2, IARG_FAST_ANALYSIS_CALL,
								IARG_ADDRINT, argNumber,
								IARG_ADDRINT, libPointer, IARG_ADDRINT, rtn_name, IARG_ADDRINT, img_name,
								IARG_REG_VALUE, REG_STACK_PTR,
								IARG_THREAD_ID,
								IARG_RETURN_IP,
								TWO_ARGS
								IARG_END);
							break;

						case(3):
							RTN_InsertCall(rtn, IPOINT_BEFORE, (AFUNPTR)PrintInfoBeforeEmpty3, IARG_FAST_ANALYSIS_CALL,
								IARG_ADDRINT, argNumber,
								IARG_ADDRINT, libPointer, IARG_ADDRINT, rtn_name, IARG_ADDRINT, img_name,
								IARG_REG_VALUE, REG_STACK_PTR,
								IARG_THREAD_ID,
								IARG_RETURN_IP,
								THREE_ARGS
								IARG_END);
							break;


						case(4):
							RTN_InsertCall(rtn, IPOINT_BEFORE, (AFUNPTR)PrintInfoBeforeEmpty4, IARG_FAST_ANALYSIS_CALL,
								IARG_ADDRINT, argNumber,
								IARG_ADDRINT, libPointer, IARG_ADDRINT, rtn_name, IARG_ADDRINT, img_name,
								IARG_REG_VALUE, REG_STACK_PTR,
								IARG_THREAD_ID,
								IARG_RETURN_IP,
								FOUR_ARGS
								IARG_END);
							break;


						case(5):
							RTN_InsertCall(rtn, IPOINT_BEFORE, (AFUNPTR)PrintInfoBeforeEmpty5, IARG_FAST_ANALYSIS_CALL,
								IARG_ADDRINT, argNumber,
								IARG_ADDRINT, libPointer, IARG_ADDRINT, rtn_name, IARG_ADDRINT, img_name,
								IARG_REG_VALUE, REG_STACK_PTR,
								IARG_THREAD_ID,
								IARG_RETURN_IP,
								FIVE_ARGS
								IARG_END);
							break;

						case(6):
							RTN_InsertCall(rtn, IPOINT_BEFORE, (AFUNPTR)PrintInfoBeforeEmpty6, IARG_FAST_ANALYSIS_CALL,
								IARG_ADDRINT, argNumber,
								IARG_ADDRINT, libPointer, IARG_ADDRINT, rtn_name, IARG_ADDRINT, img_name,
								IARG_REG_VALUE, REG_STACK_PTR,
								IARG_THREAD_ID,
								IARG_RETURN_IP,
								SIX_ARGS
								IARG_END);
							break;

						case(7):
							RTN_InsertCall(rtn, IPOINT_BEFORE, (AFUNPTR)PrintInfoBeforeEmpty7, IARG_FAST_ANALYSIS_CALL,
								IARG_ADDRINT, argNumber,
								IARG_ADDRINT, libPointer, IARG_ADDRINT, rtn_name, IARG_ADDRINT, img_name,
								IARG_REG_VALUE, REG_STACK_PTR,
								IARG_THREAD_ID,
								IARG_RETURN_IP,
								SEVEN_ARGS
								IARG_END);
							break;

						case(8):
							RTN_InsertCall(rtn, IPOINT_BEFORE, (AFUNPTR)PrintInfoBeforeEmpty8, IARG_FAST_ANALYSIS_CALL,
								IARG_ADDRINT, argNumber,
								IARG_ADDRINT, libPointer, IARG_ADDRINT, rtn_name, IARG_ADDRINT, img_name,
								IARG_REG_VALUE, REG_STACK_PTR,
								IARG_THREAD_ID,
								IARG_RETURN_IP,
								EIGHT_ARGS
								IARG_END);
							break;

						case(9):
							RTN_InsertCall(rtn, IPOINT_BEFORE, (AFUNPTR)PrintInfoBeforeEmpty9, IARG_FAST_ANALYSIS_CALL,
								IARG_ADDRINT, argNumber,
								IARG_ADDRINT, libPointer, IARG_ADDRINT, rtn_name, IARG_ADDRINT, img_name,
								IARG_REG_VALUE, REG_STACK_PTR,
								IARG_THREAD_ID,
								IARG_RETURN_IP,
								NINE_ARGS
								IARG_END);
							break;

						case(10):
							RTN_InsertCall(rtn, IPOINT_BEFORE, (AFUNPTR)PrintInfoBeforeEmpty10, IARG_FAST_ANALYSIS_CALL,
								IARG_ADDRINT, argNumber,
								IARG_ADDRINT, libPointer, IARG_ADDRINT, rtn_name, IARG_ADDRINT, img_name,
								IARG_REG_VALUE, REG_STACK_PTR,
								IARG_THREAD_ID,
								IARG_RETURN_IP,
								TEN_ARGS
								IARG_END);
							break;

						case(11):
							RTN_InsertCall(rtn, IPOINT_BEFORE, (AFUNPTR)PrintInfoBeforeEmpty11, IARG_FAST_ANALYSIS_CALL,
								IARG_ADDRINT, argNumber,
								IARG_ADDRINT, libPointer, IARG_ADDRINT, rtn_name, IARG_ADDRINT, img_name,
								IARG_REG_VALUE, REG_STACK_PTR,
								IARG_THREAD_ID,
								IARG_RETURN_IP,
								ELEVEN_ARGS
								IARG_END);
							break;

						case(12):
							RTN_InsertCall(rtn, IPOINT_BEFORE, (AFUNPTR)PrintInfoBeforeEmpty12, IARG_FAST_ANALYSIS_CALL,
								IARG_ADDRINT, argNumber,
								IARG_ADDRINT, libPointer, IARG_ADDRINT, rtn_name, IARG_ADDRINT, img_name,
								IARG_REG_VALUE, REG_STACK_PTR,
								IARG_THREAD_ID,
								IARG_RETURN_IP,
								TWELVE_ARGS
								IARG_END);
							break;

						case(13):
							RTN_InsertCall(rtn, IPOINT_BEFORE, (AFUNPTR)PrintInfoBeforeEmpty13, IARG_FAST_ANALYSIS_CALL,
								IARG_ADDRINT, argNumber,
								IARG_ADDRINT, libPointer, IARG_ADDRINT, rtn_name, IARG_ADDRINT, img_name,
								IARG_REG_VALUE, REG_STACK_PTR,
								IARG_THREAD_ID,
								IARG_RETURN_IP,
								THIRTEEN_ARGS
								IARG_END);
							break;

						case(14):
							RTN_InsertCall(rtn, IPOINT_BEFORE, (AFUNPTR)PrintInfoBeforeEmpty14, IARG_FAST_ANALYSIS_CALL,
								IARG_ADDRINT, argNumber,
								IARG_ADDRINT, libPointer, IARG_ADDRINT, rtn_name, IARG_ADDRINT, img_name,
								IARG_REG_VALUE, REG_STACK_PTR,
								IARG_THREAD_ID,
								IARG_RETURN_IP,
								FOURTEEN_ARGS
								IARG_END);
							break;

						case(15):
							RTN_InsertCall(rtn, IPOINT_BEFORE, (AFUNPTR)PrintInfoBeforeEmpty15, IARG_FAST_ANALYSIS_CALL,
								IARG_ADDRINT, argNumber,
								IARG_ADDRINT, libPointer, IARG_ADDRINT, rtn_name, IARG_ADDRINT, img_name,
								IARG_REG_VALUE, REG_STACK_PTR,
								IARG_THREAD_ID,
								IARG_RETURN_IP,
								FIFTEEN_ARGS
								IARG_END);
							break;

						case(16):
							RTN_InsertCall(rtn, IPOINT_BEFORE, (AFUNPTR)PrintInfoBeforeEmpty16, IARG_FAST_ANALYSIS_CALL,
								IARG_ADDRINT, argNumber,
								IARG_ADDRINT, libPointer, IARG_ADDRINT, rtn_name, IARG_ADDRINT, img_name,
								IARG_REG_VALUE, REG_STACK_PTR,
								IARG_THREAD_ID,
								IARG_RETURN_IP,
								SIXTEEN_ARGS
								IARG_END);
							break;

						case(17):
							RTN_InsertCall(rtn, IPOINT_BEFORE, (AFUNPTR)PrintInfoBeforeEmpty17, IARG_FAST_ANALYSIS_CALL,
								IARG_ADDRINT, argNumber,
								IARG_ADDRINT, libPointer, IARG_ADDRINT, rtn_name, IARG_ADDRINT, img_name,
								IARG_REG_VALUE, REG_STACK_PTR,
								IARG_THREAD_ID,
								IARG_RETURN_IP,
								SEVENTEEN_ARGS
								IARG_END);
							break;

						case(18):
							RTN_InsertCall(rtn, IPOINT_BEFORE, (AFUNPTR)PrintInfoBeforeEmpty18, IARG_FAST_ANALYSIS_CALL,
								IARG_ADDRINT, argNumber,
								IARG_ADDRINT, libPointer, IARG_ADDRINT, rtn_name, IARG_ADDRINT, img_name,
								IARG_REG_VALUE, REG_STACK_PTR,
								IARG_THREAD_ID,
								IARG_RETURN_IP,
								EIGHTEEN_ARGS
								IARG_END);
							break;
						}


						//---------AFTER----------//

						RTN_InsertCall(rtn, IPOINT_AFTER, (AFUNPTR)PrintInfoAfterEmpty, IARG_FAST_ANALYSIS_CALL, IARG_ADDRINT, rtn_name, IARG_ADDRINT, img_name,
							IARG_REG_VALUE, REG_STACK_PTR,
							IARG_REG_VALUE, REG_INST_PTR,
							IARG_THREAD_ID,
							IARG_FUNCRET_EXITPOINT_VALUE,
							IARG_END);

						RTN_Close(rtn);


					}

				}


				//UNKNOWN PROTOTYPE
				else {

					//UNKNOWN PROTOTYPE and NOT EMPTY INSTRUMENTATION
					if (!EMPTY_RTN_INSTR) {

						RTN_Open(rtn);

						RTN_InsertCall(rtn, IPOINT_BEFORE, (AFUNPTR)PrintInfoBeforeUnk, IARG_FAST_ANALYSIS_CALL, IARG_ADDRINT, rtn_name, IARG_ADDRINT, img_name,
							IARG_THREAD_ID,
							IARG_RETURN_IP,
							IARG_REG_VALUE, REG_STACK_PTR,
							IARG_END);

						RTN_Close(rtn);

					}
					//UKNOWN PROTOTYPE and EMPTY INSTRUMENTATION
					else {

						RTN_Open(rtn);

						RTN_InsertCall(rtn, IPOINT_BEFORE, (AFUNPTR)PrintInfoBeforeUnkEmpty, IARG_FAST_ANALYSIS_CALL, IARG_ADDRINT, rtn_name, IARG_ADDRINT, img_name,
							IARG_THREAD_ID,
							IARG_RETURN_IP,
							IARG_REG_VALUE, REG_STACK_PTR,
							IARG_END);


						RTN_Close(rtn);

					}

				}


			}
		}

	}

}


void TracerLibCalls::initLibCallsTracer() {

	//If PyreboxDB option enabled, init PyreboxDB hashtables 
	if (Config::getInstance()->getPdbFlag()) {
		//Measure hastables creation time

		/*
		//W::DWORD t_bef = W::GetTickCount();
		W::LARGE_INTEGER li;
		if (!QueryPerformanceFrequency(&li))
		cerr << "QueryPerformanceFrequency failed!\n";
		double PCFreq = double(li.QuadPart) / 1000.0;
		QueryPerformanceCounter(&li);
		__int64 t_bef = li.QuadPart;*/

		//-> Init Pyrebox
		Pyrebox_libcalls::initHashtables();

		/*
		//W::DWORD t_aft = W::GetTickCount();
		QueryPerformanceCounter(&li);
		double t_aft = double(li.QuadPart - t_bef) / PCFreq;
		cerr << t_aft << endl;*/
	}
	//Otherwise fill drltrace hashmap from config file
	else {

		//Parse drltrace configuration file
		Drltrace_libcalls::parse_config();

	}

	//Init empty rtn instrumentation -> Can be true only if empty IMG instr is false since they are exclusive
	if (!Config::getInstance()->getEmptyImgInstrFlag()) EMPTY_RTN_INSTR = Config::getInstance()->getEmptyRtnInstrFlag();

	//Init main image options
	NO_MAIN_IMAGE_IGNORE = Config::getInstance()->getMainImageFlag();
	NO_MAIN_IMAGE_NOARGS = Config::getInstance()->getMainImageNoArgsFlag();

}