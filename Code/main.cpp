#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include "pin.H"

#include "Logging.h"
#include "OepFinder.h"
#include "Report.h"
#include "Debug.h"
#include "Config.h"
#include "FilterHandler.h"
#include "HookFunctions.h"
#include "HookSyscalls.h"
#include "PolymorphicCodeHandlerModule.h"
#include "PINShield.h"
#include "md5.h"
#include "ExceptionHandler.h"
#include "HiddenElements.h"
#include "ServerTCP.h"
#include "libdft/libdft_api.h"
#include "libdft/tagmap.h"
#include "TaintAnalysis.h"
#include "SpecialHooks.h"

//Tracer Includes
#include "TracerTdataManager.h"
#include "TracerContextChangeManager.h"
#include "Pyrebox_libcalls.h"
#include "Drltrace_libcalls.h"

namespace W {
	#include "windows.h"
}

// we use TLS for thread-specific storage, which includes
// logging facilities, syscall_t objects, and values that
// are spilled by on-entry hooks for on-exit hooks
TLS_KEY tls_key = INVALID_TLS_KEY;

syscall_t scCallbackArray[256] = { 0 }; /* TODO: 256 threads or what? */
OepFinder oepf;
PINshield thider;
HookFunctions hookFun;
double tStartCPU, tStartWallClock; 
ProcInfo *proc_info = ProcInfo::getInstance();
PolymorphicCodeHandlerModule pcpatcher;

/** Custom options for our PIN tool **/
KNOB<string> KnobConfigFile(KNOB_MODE_WRITEONCE, "pintool",
	"config", "CodaPinTracer.json", "path to configuration file");

KNOB <BOOL> KnobDebuggerInit(KNOB_MODE_WRITEONCE, "pintool",
	"debugger", "false", "prepare environment for debugger");

KNOB <BOOL> KnobAntiEvasion(KNOB_MODE_WRITEONCE, "pintool",
    "antiev", "false" , "specify if you want to activate the anti-evasion engine");

KNOB <BOOL> KnobAntiEvasionINSpatcher(KNOB_MODE_WRITEONCE, "pintool",
    "antiev-ins", "false" , "specify if you want to activate the single patching of evasive instruction as int2e, fsave...");

KNOB <BOOL> KnobAntiEvasionSuspiciousRead(KNOB_MODE_WRITEONCE, "pintool",
    "antiev-sread", "false" , "specify if you want to activate the handling of suspicious reads");

KNOB <BOOL> KnobAntiEvasionSuspiciousWrite(KNOB_MODE_WRITEONCE, "pintool",
    "antiev-swrite", "false" , "specify if you want to activate the handling of suspicious writes");

KNOB <BOOL> KnobTaintAnalysis(KNOB_MODE_WRITEONCE, "pintool",
	"taint", "false", "specify if you want to enable selective taint analysis");

KNOB <BOOL> KnobTracer(KNOB_MODE_WRITEONCE, "pintool",
	"trace", "false", "specify if you want to enable the tracing of system and library calls");



#if ENABLE_PINDEMONIUM
KNOB <UINT32> KnobInterWriteSetAnalysis(KNOB_MODE_WRITEONCE, "pintool",
	"iwae", "0", "specify if you want to track the inter_write_set analysis dumps and how many jump");

KNOB <BOOL> KnobUnpacking(KNOB_MODE_WRITEONCE, "pintool",
    "unp", "false" , "specify if you want to activate the unpacking engine");

KNOB <UINT32> KnobSkipDump(KNOB_MODE_WRITEONCE, "pintool",
    "skip", "0" , "specify how many times you want to skip the dump process when wxorx rule is broken");

KNOB <BOOL> KnobAdvancedIATFixing(KNOB_MODE_WRITEONCE, "pintool",
    "adv-iatfix", "false" , "specify if you want to activate the advanced IAT fix technique");

KNOB <BOOL> KnobPolymorphicCodePatch(KNOB_MODE_WRITEONCE, "pintool",
    "poly-patch", "false" , "specify if you want to activate the patch in order to avoid crash during the instrumentation of polymorphic code");

KNOB <BOOL> KnobNullyfyUnknownIATEntry(KNOB_MODE_WRITEONCE, "pintool",
    "nullify-unk-iat", "false" , "specify if you want to nullify the IAT entry not detected as correct API by the tool"
								 "\n NB: THIS OPTION WORKS ONLY IF THE OPTION adv-iatfix IS ACTIVE!");

KNOB <string> KnobPluginSelector(KNOB_MODE_WRITEONCE, "pintool",
    "plugin", "" , "specify the name of the plugin you want to launch if the IAT reconstructor fails (EX : PINdemoniumStolenAPIPlugin.dll)");
#endif

/** End of KNOB section **/

// Timing functions for Windows
// [credits: https://stackoverflow.com/a/17440673 Mysticial]
double get_wall_time() {
	W::LARGE_INTEGER time, freq;
	if (!W::QueryPerformanceFrequency(&freq)) {
		//  Handle error
		return 0;
	}
	if (!W::QueryPerformanceCounter(&time)) {
		//  Handle error
		return 0;
	}
	return (double)time.QuadPart / freq.QuadPart;
}

double get_cpu_time() {
	W::FILETIME a, b, c, d;
	if (W::GetProcessTimes(W::GetCurrentProcess(), &a, &b, &c, &d) != 0) {
		//  Returns total user time.
		//  Can be tweaked to include kernel times as well.
		return
			(double)(d.dwLowDateTime |
			((unsigned long long)d.dwHighDateTime << 32)) * 0.0000001;
	}
	else {
		//  Handle error
		return 0;
	}
}

// Print info for the current run when the application is exiting
VOID Fini(INT32 code, VOID *v){
	// note: PIN_AddPrepareForFiniFunction() not needed at the moment

	#if ENABLE_PINDEMONIUM
	//inspect the write set at the end of the execution
	WxorXHandler *wxorxHandler = WxorXHandler::getInstance(); /* TODO: this is not used? */
	//LOG_INFO("WRITE SET SIZE: %d", wxorxHandler->getWritesSet().size());
	#endif

	//If tracer is enabled free hashtables
	if (Config::getInstance()->TRACER) {

		//Filter pyrebox vs. drltrace
		if (Config::getInstance()->getPdbFlag()) {
			//Clear hash tables
			Pyrebox_libcalls::clearHashtables();
		}
		else {
			//Clear mapOfArgs
			Drltrace_libcalls::clearMapOfArgs();
		}

		//In case of EMPTY RTN instrumentation get global number of calls and write them to log
		if (Config::getInstance()->getEmptyRtnInstrFlag()) {

			long long globalCount = TracerSysCalls::getSyscallCount() + TracerLibCalls::getLibcallCount();
			stringstream ss;
			ss << globalCount;
			string str = ss.str();
			LOG("Number of calls : " + str + "\n");
		}


	}

	//get the execution time
	LOG_PRINT("Wall-clock time: %.2fs", get_wall_time() - tStartWallClock);
	LOG_PRINT("CPU execution time: %.2fs", get_cpu_time() - tStartCPU);
	//LOG_PRINT("\n\n\nTotal execution Time: %.2fs", (double)(clock() - tStart) / CLOCKS_PER_SEC);
	
	Logging::shutdownLogging();
	Report::getInstance()->closeReport();
}

BOOL followChild(CHILD_PROCESS childProcess, VOID *val)
{
	//cout << "[INFO] A new process has been spawned!" << std::endl;
	LOG_INFO("---------------------------------------------------");
	LOG_INFO("-----------A NEW PROCESS HAS BEEN SPAWNED----------");
	LOG_INFO("---------------------------------------------------");
	return true;
}

// - Get initial entropy
// - Get PE section data 
// - Add filtered library
// - Add protected libraries 
void imageLoadCallback(IMG img,void *){
	static int va_hooked = 0;
	ProcInfo *proc_info = ProcInfo::getInstance();
	FilterHandler *filterHandler = FilterHandler::getInstance();

	// get image info
	ADDRINT startAddr = IMG_LowAddress(img);
	ADDRINT endAddr = IMG_HighAddress(img);
	const string name = IMG_Name(img);
	
	if(IMG_IsMainExecutable(img)){ // get initial entropy of the PE	(no libraries)
		proc_info->setMainIMGAddress(startAddr, endAddr);
		proc_info->setFirstINSaddress(IMG_Entry(img)); // get address of first instruction
		proc_info->setProcName(name); // program name
		float initial_entropy = proc_info->GetEntropy(); // initial entropy
		proc_info->setInitialEntropy(initial_entropy);
		
		// create Report File
		Report::getInstance()->initializeReport(proc_info->getProcName(), startAddr, endAddr , initial_entropy);
		
		// forward pass over all sections in the PE
		for (SEC sec= IMG_SecHead(img); SEC_Valid(sec); sec = SEC_Next(sec)) {
			proc_info->insertSection(Section(sec));
		}
		proc_info->PrintSections();

		/** Library call tracing part for MAIN IMG**/ 
		//-> RTN insert call here
		if (Config::getInstance()->TRACER) {
			TracerLibCalls::addAnalysisRtns(img);
		}

	} else { // library filtering & API hooking
		/* if you need to protect sections of other DLLs put them here
		 * (=> read & writes inside the specified area will be caught) */
		if (name.find("ntdll") != std::string::npos) { /* TODO: add more libs */
			for (SEC sec= IMG_SecHead(img); SEC_Valid(sec); sec = SEC_Next(sec)) {
				if (SEC_Name(sec).compare(".text") == 0) {
					LOG_INFO("Adding NTDLL %08x %08x", SEC_Address(sec), SEC_Address(sec)+SEC_Size(sec));
					proc_info->addProtectedSection(SEC_Address(sec), SEC_Address(sec)+SEC_Size(sec), ".text", "NTDLL");
				}
			}
		}

		/** Library call tracing part for other IMGs **/
		//-> RTN insert call here
		if (Config::getInstance()->TRACER) {
			TracerLibCalls::addAnalysisRtns(img);
		}

		/** API hooking part: look for functions of interest inside the DLL **/
		hookFun.hookDispatcher(img);
		SpecialHooks::setFunctionHooks(img);

		// check whether we have to filter the library during instrumentation
		proc_info->addLibrary(name, startAddr, endAddr);
		if(filterHandler->isNameInFilteredLibrary(name)){
			filterHandler->addToFilteredLibrary(name, startAddr, endAddr);
			LOG_INFO("Added module %s to the filtered library\n", name);
		}
	}
}

// trigger the instrumentation routine(s) for each instruction
void instrumentInstruction(INS ins, void *v){
	Config *config = Config::getInstance();
	
	if (config->DBI_SHIELD_MODE){
		thider.addInstrumentation(ins);
	}
	
	if (config->TAINT_MODE) {
		instrumentForTaintCheck(ins);		
	}
	
	#if ENABLE_PINDEMONIUM
	if(config->UNPACKING_MODE){
		oepf.isCurrentInOEP(ins);
	}
	#endif
}

// trigger the instrumentation routine for each trace collected (useful in order to spiot polymorphic code on the current trace)
VOID instrumentTrace(TRACE trace, void *v){
	// polymorphic code handler
	pcpatcher.inspectTrace(trace);
}


// - retrive the stack base address
static VOID onThreadStart(THREADID tid, CONTEXT *ctxt, INT32, VOID *){
	bluepill_tls* tdata = new bluepill_tls; // POD thus zero-initialized

	if (PIN_SetThreadData(tls_key, tdata, tid) == FALSE) {
		cerr << "PIN_SetThreadData failed" << endl;
		PIN_ExitProcess(1);
	}

	//Init tracer-related tdata fields
	if (Config::getInstance()->TRACER){
		TracerTdataManager::initTracerTdata(tid, tdata);
	}
	Logging::initThreadLog(tid, tdata);
	

	ADDRINT stackBase = PIN_GetContextReg(ctxt, REG_STACK_PTR);
	ProcInfo *pInfo = ProcInfo::getInstance();
	pInfo->addThreadStackAddress(stackBase);
	pInfo->addThreadTebAddress();
	LOG_INFO("-----------------a NEW Thread started!--------------------\n");
	if (Config::getInstance()->TAINT_MODE) {		
		thread_ctx_t *thread_ctx_ptr = libdft_thread_start(ctxt);
		registerThreadTaintAnalysis(tid, thread_ctx_ptr);
	}
}

static VOID onThreadFini(THREADID tid, const CONTEXT *ctx, INT32 code, VOID *v) {
	if (Config::getInstance()->TAINT_MODE) {
		libdft_thread_fini(ctx);
		unregisterThreadTaintAnalysis(tid);
	}
	bluepill_tls *tdata = static_cast<bluepill_tls*>(PIN_GetThreadData(tls_key, tid));

	//Dealloc tracer-related tdata fields
	if (Config::getInstance()->TRACER) {
		TracerTdataManager::deallocTracerTdata(tid, tdata);
	}

	Logging::shutdownThreadLogging(tdata);

	//Delete tdata
	delete(tdata);
}

// - if the flag is pecified start pin as launched with the flag appdebug
void initDebug(){
	DEBUG_MODE mode;
	mode._type = DEBUG_CONNECTION_TYPE_TCP_SERVER;
	mode._options = DEBUG_MODE_OPTION_STOP_AT_ENTRY;
	PIN_SetDebugMode(&mode);
}


static VOID InstrumentRoutine(RTN rtn, VOID *) {

	// TODO refactor with help from JSON & vector<string>
	// TODO what if I call KiFastSystemCall via its standard (fixed) address
	// notify every time one of these functions is called in the executable
#if 1
	const char* rtnName = RTN_Name(rtn).c_str();
	if (strstr(rtnName, "Rtl") == NULL) {
		RTN_Open(rtn);
		RTN_InsertCall(rtn, IPOINT_BEFORE, (AFUNPTR)PrintDebug, IARG_ADDRINT, rtnName, IARG_END);
		RTN_Close(rtn);
	}
#endif

#if 0
	char* strings[] = { "RtlAllocateHeap", "RtlReAllocateHeap", "ProcessId",
						"Critical", "Rtl", "VirtualAlloc", "AllocateVirtualMemory", 
						"KiFastSystemCall","VirtualFree", "ZwFreeVirtualMemory",
						"NtQuerySection", "NtOpenSection", "NtMapViewOfSection",
						"NtOpenSection" };
	
	const char* rtnName = RTN_Name(rtn).c_str();

	int index;
	for (index = 0; index < sizeof(strings); ++index) {
		if (strstr(rtnName, strings[index])) {
			break;
		}
	}
	if (index == sizeof(strings)) return;

	RTN_Open(rtn);
	RTN_InsertCall(rtn, IPOINT_BEFORE, (AFUNPTR)PrintDebug, IARG_ADDRINT, rtnName, IARG_END);
	RTN_Close(rtn);
	
#endif

#if 0	
	/* look for one specific function and possibly print its arguments */
	if (RTN_Name(rtn).find("KiUserException") != string::npos) {
		const char* a = RTN_Name(rtn).c_str();
		RTN_Open(rtn);
		//RTN_InsertCall(rtn, IPOINT_AFTER, (AFUNPTR)prova, IARG_FUNCRET_EXITPOINT_REFERENCE, IARG_END);
		RTN_InsertCall(rtn, IPOINT_BEFORE, (AFUNPTR)PrintDebug, IARG_ADDRINT, a, IARG_END);
		RTN_Close(rtn);
	}
#endif
	/**/
}

VOID onContextChange(THREADID threadIndex, CONTEXT_CHANGE_REASON reason, const CONTEXT *ctxtFrom,
					 CONTEXT *ctxtTo, INT32 info, VOID *v) {
	
	if (reason == CONTEXT_CHANGE_REASON_EXCEPTION) { // ==4
		if (Config::getInstance()->ATTACH_DEBUGGER && ProcInfo::getInstance()->waitForDebugger) {
			PIN_WaitForDebuggerToConnect(99000);
			ProcInfo::getInstance()->waitForDebugger = FALSE;
			ProcInfo::getInstance()->flagStep = 0;
		}
		cout << reason << " + 0x" << hex << info << endl; // TODO use macro to print
	}
}

EXCEPT_HANDLING_RESULT internalExceptionHandler(THREADID tid, EXCEPTION_INFO *pExceptInfo, PHYSICAL_CONTEXT *pPhysCtxt, VOID *v) {

	cout << PIN_ExceptionToString(pExceptInfo).c_str() << " Code: " << pExceptInfo->GetExceptCode() << endl; // TODO use macro to print

	if (Config::getInstance()->TAINT_MODE) { // DCD this belongs to libdft
		EXCEPT_HANDLING_RESULT ret = libdft_fix_eflags(tid, pExceptInfo, pPhysCtxt, v);
		if (ret == EHR_HANDLED) return EHR_HANDLED;
	}

	// handles single-step exception 
	if (pExceptInfo->GetExceptCode() == EXCEPTCODE_DBG_SINGLE_STEP_TRAP) {
		LOG_EVASION("[SINGLE_STEP] - *");
		ExceptionHandler *eh = ExceptionHandler::getInstance();
		eh->setExceptionToExecute(0x80000003L); // TODO STATUS_BREAKPOINT from NTSTATUS
		return EHR_HANDLED;
	}

	LOG_INFO("******Caught Exception:******\n");
	LOG_INFO("%s", PIN_ExceptionToString(pExceptInfo).c_str());
	LOG_INFO("*****Continue to search a valid exception handler******\n");
	return EHR_CONTINUE_SEARCH;
}

// set options for the current run
void ConfigureTool(string exename){	
	Config *config = Config::getInstance(); // triggers JSON parser

	config->TAINT_MODE = KnobTaintAnalysis.Value();

	config->DBI_SHIELD_MODE = KnobAntiEvasion.Value();
	config->DBI_SHIELD_INS_PATCHING = KnobAntiEvasionINSpatcher.Value();
	config->DBI_SHIELD_SREAD = KnobAntiEvasionSuspiciousRead.Value();
	config->DBI_SHIELD_SWRITE = KnobAntiEvasionSuspiciousWrite.Value();
	
	config->ATTACH_DEBUGGER = KnobDebuggerInit.Value();

	//Set tracer flag and exename for logs naming
	config->TRACER = KnobTracer.Value();
	config->setExeName(exename);

	#if ENABLE_PINDEMONIUM
	config->UNPACKING_MODE = KnobUnpacking.Value();
	config->INTER_WRITESET_ANALYSIS_ENABLE = KnobInterWriteSetAnalysis.Value() ? true : false;	
	config->UNPACKING_ADVANCED_IAT_FIX = KnobAdvancedIATFixing.Value();
	config->UNPACKING_POLYMORPHIC_CODE_PATCH = KnobPolymorphicCodePatch.Value();
	config->UNPACKING_NULLIFY_UNKNOWN_IAT_ENTRY = KnobNullyfyUnknownIATEntry.Value();
	config->SKIP_DUMP = KnobSkipDump.Value();

	if (config->INTER_WRITESET_ANALYSIS_ENABLE) {
		config->WRITEINTERVAL_MAX_NUMBER_JMP = KnobInterWriteSetAnalysis.Value();
		if (config->WRITEINTERVAL_MAX_NUMBER_JMP <= Config::MAX_JUMP_INTER_WRITE_SET_ANALYSIS) {
			LOG_WARNING("Invalid number of jumps to track, set to default value: 2\n");
			config->WRITEINTERVAL_MAX_NUMBER_JMP = 2;
		}
	}

	// get the selected plugin
	config->UNPACKING_CALL_PLUGIN_FLAG = !KnobPluginSelector.Value().empty();
	if (config->UNPACKING_CALL_PLUGIN_FLAG) {
		config->UNPACKING_SCYLLA_PLUGINS_PATH = config->getScyllaPluginsPath() + KnobPluginSelector.Value();
		W::DWORD fileAttrib = W::GetFileAttributes(config->UNPACKING_SCYLLA_PLUGINS_PATH.c_str());
		//file doesn't exist
		if(fileAttrib == 0xFFFFFFFF){
			LOG_ERROR("[ERROR] THE SELECTED SCYLLA PLUGIN DOES NOT EXIST!\n");
			exit(-1);
		}
	}
	#endif

	//set filtered write
	FilterHandler::getInstance()->setFilters(config->getFilteredWrites());
}

static BOOL DebugInterpreter(THREADID tid, CONTEXT *ctxt, const string &cmd, string *result, VOID *) {
	std::cout << "GDB Command: " << cmd << std::endl;

	if (cmd == "wait") {
		ProcInfo::getInstance()->waitForDebugger = TRUE;
		*result = "Pin will wait debugger after exception...";
		return TRUE;

	}

	// [...]
	*result = "Command not found!";
	return FALSE;  // Unknown command

}

/* ===================================================================== */
/* Main                                                                  */
/* ===================================================================== */

int main(int argc, char * argv[]) {

	// get start time of the execution
	tStartCPU = get_cpu_time();
	tStartWallClock = get_wall_time();

	// initialize PIN
	PIN_InitSymbols();
	if (PIN_Init(argc, argv)) {
		PIN_ERROR("BluePill tames evasive behavior in malicious software\n" +
			KNOB_BASE::StringKnobSummary() + "\n");
		return -1;
	}

	// obtain a TLS key
	tls_key = PIN_CreateThreadDataKey(NULL);
	if (tls_key == INVALID_TLS_KEY) {
		cerr << "Cannot initialize TLS" << endl;
		PIN_ExitProcess(1);
	}

	// parse KNOB args and JSON config file
	cout << "[INFO] Configuring Pintool" << endl;
	Config::setConfigFile(KnobConfigFile.Value());
	//Init exename --> Get name of program before --
	string exename = "";
	for (int i = argc - 1; i >= 0; i--) {
		if (strcmp("--", argv[i]) == 0) {
			exename = argv[i + 1];
			break;
		}
	}
	ConfigureTool(exename);

	if (Config::getInstance()->TAINT_MODE) {
		loadTaintLib();
	}
	SpecialHooks::initHooks();

	//If TRACER enabled init library call tracing here
	if (Config::getInstance()->TRACER) {
		TracerLibCalls::initLibCallsTracer();
	}

	PIN_THREAD_UID threadUid;

	if (Config::getInstance()->ATTACH_DEBUGGER) {
		cout << "[INFO] Debugger Init!" << endl;
		PIN_WaitForDebuggerToConnect(10000);
		PIN_AddDebugInterpreter(DebugInterpreter, nullptr);
		PIN_SpawnInternalThread(pThreadFuncPin, 0, 0, &threadUid);
	}

	// set up elements to be hidden
	HiddenElements::initializeHiddenStuff();

	// make Pin less conspicuous when running under Wow64
#ifndef __LP64__

	if (ProcInfo::isRunningInWow64()) { //wow64
		PEB64* peb64 = ProcInfo::getPeb64Wow64();
		W::DWORD flag = 0;
		W::DWORD cores = 4;
		W::WriteProcessMemory((W::HANDLE)(-1), (W::LPVOID*)(W::__readfsdword(0x30) + 0x64), &cores, sizeof(W::DWORD), 0);
		W::WriteProcessMemory((W::HANDLE)(-1), (W::LPVOID*)(&peb64->dword_NtGlobalFlag), &flag, sizeof(W::DWORD), 0);
	}
	else {
		W::DWORD cores = 4;
		W::WriteProcessMemory((W::HANDLE)(-1), (W::LPVOID*)(W::__readfsdword(0x30) + 0x64), &cores, sizeof(W::DWORD), 0);
	}



#else //64bit

	W::DWORD cores = 4;
	W::WriteProcessMemory((W::HANDLE)(-1), (W::LPVOID*)(W::__readgsqword(0x60) + 0xB8), &cores, sizeof(W::DWORD), 0);

#endif

	// register PIN callbacks

	PIN_AddInternalExceptionHandler(internalExceptionHandler, nullptr);
	INS_AddInstrumentFunction(instrumentInstruction, nullptr);
	PIN_AddThreadStartFunction(onThreadStart, nullptr);
	PIN_AddThreadFiniFunction(onThreadFini, 0);
	IMG_AddInstrumentFunction(imageLoadCallback, nullptr);
	PIN_AddFiniFunction(Fini, nullptr);
	PIN_AddFollowChildProcessFunction(followChild, nullptr);

	// TODO use KNOB for this
	//RTN_AddInstrumentFunction(InstrumentRoutine, nullptr);
	//PIN_AddContextChangeFunction(onContextChange, nullptr);

	//Add specific context change function in case of tracer WOUT empty instrumentation (TODO: make exclusive wrt the one above based on KNOB)
	if (Config::getInstance()->TRACER && !Config::getInstance()->getEmptyImgInstrFlag() && !Config::getInstance()->getEmptyRtnInstrFlag()) {
		PIN_AddContextChangeFunction(TracerContextChangeManager::tracerOnContextChange, nullptr);
	}


	#if ENABLE_PINDEMONIUM // TODO we might want to use this anyway?
	if (Config::getInstance()->UNPACKING_POLYMORPHIC_CODE_PATCH) {
		TRACE_AddInstrumentFunction(instrumentTrace,0);
	}
	#endif

	if (Config::getInstance()->TAINT_MODE) {
		// let's play with PEB just for kicks
//#define TAINT_PEB_BEINGDEBUGGED
#ifdef TAINT_PEB_BEINGDEBUGGED
		W::BYTE* _teb32 = (W::BYTE*)W::NtCurrentTeb();
		PEB32* peb32 = (PEB32*)(*(W::DWORD*)(_teb32 + 0x30));
		std::cerr << "PEB address: " << (UINT32)peb32 << std::endl;
		std::cerr << "PEB isBeingDebugged address: " << (UINT32)(&peb32->BeingDebugged) << std::endl;
		//std::cerr << "PEB address: " << W::__readfsdword(0x30) << std::endl;
		addTaintMemory((ADDRINT)(&peb32->BeingDebugged), 1, 1, true);
#endif
#define TAINT_DRIVER
#ifdef TAINT_DRIVER		
		setTaintSource(SYSCALL_KEY_NtQuerySystemInformation, 2);
#endif
		int hooks[] = {
			RTLSTR_INDEX,
			WCSSTR_INDEX,
			WCSCMP_INDEX,
			STRSTR_INDEX,
			STRCMP_INDEX,
			CMPSTR_INDEX
		};

		for (size_t i = 0; i < sizeof(hooks) / sizeof(hooks[0]); ++i) {
			std::cerr << "[Taint analysis] Enabling hook for " << SpecialHooks::solveCustomHookID(hooks[i]) << std::endl;
			SpecialHooks::enableCustomFunctionHook(hooks[i]);
		}
	}

	// bootstrap memory information
	proc_info->addProcAddresses();

	// initialize the hooking system
	HookSyscalls::enumSyscalls();
	HookSyscalls::initHooks(scCallbackArray);
	
	cout << "[INFO] Starting instrumented program" << endl << endl;
	PIN_StartProgram();	

	return 0;
}
