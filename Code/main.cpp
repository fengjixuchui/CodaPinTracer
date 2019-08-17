#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include "pin.H"

#include "Logging.h"
#include "Report.h"
#include "Debug.h"
#include "Config.h"
#include "HookSyscalls.h"
#include "md5.h"
#include "ExceptionHandler.h"
#include "ServerTCP.h"

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
double tStartCPU, tStartWallClock; 
ProcInfo *proc_info = ProcInfo::getInstance();

/** Custom options for our PIN tool **/
KNOB<string> KnobConfigFile(KNOB_MODE_WRITEONCE, "pintool",
	"config", "CodaPinTracer.json", "path to configuration file");

KNOB <BOOL> KnobDebuggerInit(KNOB_MODE_WRITEONCE, "pintool",
	"debugger", "false", "prepare environment for debugger");

KNOB <BOOL> KnobTracer(KNOB_MODE_WRITEONCE, "pintool",
	"trace", "false", "specify if you want to enable the tracing of system and library calls");

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

		// check whether we have to filter the library during instrumentation
		proc_info->addLibrary(name, startAddr, endAddr);
	}
}


// - retrive the stack base address
static VOID onThreadStart(THREADID tid, CONTEXT *ctxt, INT32, VOID *){
	bluepill_tls* tdata = new bluepill_tls; // POD thus zero-initialized

	if (PIN_SetThreadData(tls_key, tdata, tid) == FALSE) {
		cout << "PIN_SetThreadData failed" << endl;
		PIN_ExitProcess(1);
	}

	// Init tracer-related tdata fields
	if (Config::getInstance()->TRACER){
		TracerTdataManager::initTracerTdata(tid, tdata);
	}
	Logging::initThreadLog(tid, tdata);
	

	ADDRINT stackBase = PIN_GetContextReg(ctxt, REG_STACK_PTR);
	ProcInfo *pInfo = ProcInfo::getInstance();
	pInfo->addThreadStackAddress(stackBase);
	pInfo->addThreadTebAddress();
	LOG_INFO("-----------------a NEW Thread started!--------------------\n");

}

static VOID onThreadFini(THREADID tid, const CONTEXT *ctx, INT32 code, VOID *v) {

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

	// Handles single-step exception 
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

// Set options for the current run
void ConfigureTool(string exename){	
	Config *config = Config::getInstance(); // triggers JSON parser
	
	// Attach debugger 
	config->ATTACH_DEBUGGER = KnobDebuggerInit.Value();

	// Set tracer flag and exename for logs naming
	config->TRACER = KnobTracer.Value();
	config->setExeName(exename);
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

	// Get start time of the execution to later compute execution time
	tStartCPU = get_cpu_time();
	tStartWallClock = get_wall_time();

	// Initialize PIN
	PIN_InitSymbols();
	if (PIN_Init(argc, argv)) {
		PIN_ERROR("CodaPinTracer leverages Pin for lightweight WINAPI tracing\n" +
			KNOB_BASE::StringKnobSummary() + "\n");
		return -1;
	}

	// Obtain a TLS key
	tls_key = PIN_CreateThreadDataKey(NULL);
	if (tls_key == INVALID_TLS_KEY) {
		cerr << "Cannot initialize TLS" << endl;
		PIN_ExitProcess(1);
	}

	// Parse KNOB args and JSON config file
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

	// If TRACER enabled init library call tracing here
	if (Config::getInstance()->TRACER) {
		TracerLibCalls::initLibCallsTracer();
	}

	// Attach debugger
	PIN_THREAD_UID threadUid;

	if (Config::getInstance()->ATTACH_DEBUGGER) {
		cout << "[INFO] Debugger Init!" << endl;
		PIN_WaitForDebuggerToConnect(10000);
		PIN_AddDebugInterpreter(DebugInterpreter, nullptr);
		PIN_SpawnInternalThread(pThreadFuncPin, 0, 0, &threadUid);
	}

	// Make Pin less conspicuous when running under Wow64
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

	// Register PIN callbacks
	PIN_AddInternalExceptionHandler(internalExceptionHandler, nullptr);
	PIN_AddThreadStartFunction(onThreadStart, nullptr);
	PIN_AddThreadFiniFunction(onThreadFini, 0);
	IMG_AddInstrumentFunction(imageLoadCallback, nullptr);
	PIN_AddFiniFunction(Fini, nullptr);
	PIN_AddFollowChildProcessFunction(followChild, nullptr);

	// TODO use KNOB for this
	//PIN_AddContextChangeFunction(onContextChange, nullptr);

	//Add specific context change function in case of tracer WOUT empty instrumentation (TODO: make exclusive wrt the one above based on KNOB)
	if (Config::getInstance()->TRACER && !Config::getInstance()->getEmptyImgInstrFlag() && !Config::getInstance()->getEmptyRtnInstrFlag()) {
		PIN_AddContextChangeFunction(TracerContextChangeManager::tracerOnContextChange, nullptr);
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
