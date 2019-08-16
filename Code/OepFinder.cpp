#include "OepFinder.h"
#include "porting.h"
#include "ScyllaWrapperInterface.h"

OepFinder::OepFinder(void){
	this->wxorxHandler = WxorXHandler::getInstance();
	this->report = Report::getInstance();
}

//update the write set manager
VOID handleWrite(ADDRINT ip, ADDRINT start_addr, UINT32 size, void *handler){		
	FilterHandler *filterHandler = FilterHandler::getInstance();
	//check if the target address belongs to some filtered range		
	if(!filterHandler->isFilteredWrite(start_addr,ip)){
		//if not update the write set		
		WxorXHandler *WHandler = (WxorXHandler *)handler;
		WHandler->writeSetManager(start_addr, size);
	}	
}

//check if the current instruction is a pushad or a popad
//if so then set the proper flags in ProcInfo
void OepFinder::handlePopadAndPushad(INS ins){
	string s = INS_Disassemble(ins);
	if( s.compare("popad ") == 0){ // TODO check for Pin 3+
		ProcInfo::getInstance()->setPopadFlag(TRUE);
		return;
	}
	if( s.compare("pushad ") == 0){
		ProcInfo::getInstance()->setPushadFlag(TRUE);
		return;
	}
}

//connect debug
static void ConnectDebugger()
{
    if (PIN_GetDebugStatus() != DEBUG_STATUS_UNCONNECTED){
		 LOG_INFO("errore  1");
		 return;
	}
    DEBUG_CONNECTION_INFO info;
    if (!PIN_GetDebugConnectionInfo(&info) || info._type != DEBUG_CONNECTION_TYPE_TCP_SERVER){
		  LOG_INFO("errore  3");
		 return;
	}
    
	int timeout = 30000;
	DEBUG_CONNECTION_INFO infoDbg;
	PIN_GetDebugConnectionInfo(&infoDbg);
	GdbDebugger::getInstance()->connectRemote(infoDbg._tcpServer._tcpPort);
    if (PIN_WaitForDebuggerToConnect(timeout))
        return;
}

//insert a breakpoint on the current instruction
static VOID DoBreakpoint(const CONTEXT *ctxt, THREADID tid, ADDRINT ip)
{	
    // Construct a string that the debugger will print when it stops.  If a debugger is
    // not connected, no breakpoint is triggered and execution resumes immediately.
    PIN_ApplicationBreakpoint(ctxt, tid, FALSE, "DEBUGGER");
}



// Check if the given instruction
// - writes to memory ----> add instrumentation routine to register write information
// - belongs to a known library  -----> return
// - is a popad or pushad  -----> update the flag in ProcInfo
// - broke the W xor X law  -----> trigger the heuristics and write the report
// - update previous IP info in ProcInfo (useful for some heuristics like jumpOuterSection)
int OepFinder::isCurrentInOEP(INS ins) { // TODO check semantics of return value!!
	FilterHandler *filterHandler = FilterHandler::getInstance();
	ProcInfo *proc_info = ProcInfo::getInstance();		
	int heap_index = -1;
	ADDRINT curEip = INS_Address(ins);
	ADDRINT prevIp = proc_info->getPrevIp();
	//check if current instruction is a write
	if (INS_IsMemoryWrite(ins)) {
		INS_InsertCall(ins, IPOINT_BEFORE, (AFUNPTR)handleWrite,
							IARG_INST_PTR, // arg 1: address of instrumented instruction
							IARG_MEMORYWRITE_EA, // arg2: effective address (TODO: allows registering a MEMORY_ADDR_TRANS_CALLBACK)
							IARG_MEMORYWRITE_SIZE, // arg3: size in bytes of memory write
							IARG_PTR, // arg4: address of wxorxHandler()
							this->wxorxHandler,
							IARG_END);
	}

	/* Track instructions that can violate WxorX */

	// Ignore instructions from known libraries
	if(proc_info->isKnownLibraryInstruction(curEip)){
		return OepFinder::INS_FILTERED;
	}

	// update flags in ProcInfo if the instruction is a popad or a pushad
	this->handlePopadAndPushad(ins);	
	
	// if the instruction violates WxorX, return the index of the WriteItem in which
	// the EIP is, othewrise return a code for no violation
	WriteInterval* item = wxorxHandler->getWxorXinterval(curEip);
	//W xor X broken
	if (item != NULL ){
		Config *config = Config::getInstance();
		
		if (config->getDumpNumber() < config->SKIP_DUMP) {
			//LOG_INFO("Skipping  Dump Number: %d Dumps to skip: %d", (int)Config::getInstance()->getDumpNumber(), config->SKIP_DUMP);
			ADDRINT currJMPLength = ABS_ADDR_DIFF(prevIp, curEip);
			skipCurrentDump(item, currJMPLength, config);
			return OepFinder::SKIPPED_DUMP;
		}
		
		// if not the first broken in this write set		
		if (item->getBrokenFlag()){
			//LOG_INFO("%08x -> %s -> %s",curEip,INS_Disassemble(ins).c_str(),RTN_FindNameByAddress(curEip).c_str());
			//if INTER_WRITESET_ANALYSIS_ENABLE flag is enable check if inter section JMP and trigger analysis	
			if (config->INTER_WRITESET_ANALYSIS_ENABLE){ 				
				intraWriteSetJMPAnalysis(curEip, prevIp, ins, item);
			}
		}
		//first broken in this write set ---> analysis and dump ---> set the broken flag for this write interval 
		else {
			LOG_PRINT("\n\n-------------------------------------------------------------------------------------------------------");
			LOG_PRINT("------------------------------------ NEW STUB begin: %08x TO %08x -------------------------------------",item->getAddrBegin(),item->getAddrEnd());
			LOG_PRINT("-------------------------------------------------------------------------------------------------------\n");
			LOG_PRINT("- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -");
			LOG_PRINT("- - - - - - - - - - - - - - - - - - - - - STAGE 1: DUMPING - - - - - - - - - - - - - - - - - - - - - - - - -");
			LOG_PRINT("- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -");
			LOG_INFO("Current EIP %08x",curEip);
			
			W::DWORD pid = W::GetCurrentProcessId();
			Config::getInstance()->setNewWorkingDirectory(false); // create the folder dump_0 inside the folder associated to this timestamp 
			report->createReportDump(curEip,
									 item->getAddrBegin(),
									 item->getAddrEnd(),
									 Config::getInstance()->getDumpNumber(),
									 false,
									 pid);

			int result = this->dumpAndFixIAT(curEip, pid, config); // invokes Scylla
			this->dumpAndCollectHeap(item,curEip,result);		
			Config::getInstance()->setWorking(result);
			
			LOG_PRINT("\n- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -");
			LOG_PRINT("- - - - - - - - - - - - - - - - - - - - - STAGE 3: ANALYZING DUMP - - - - - - - - - - - - - - - - - - - - - -");
			LOG_PRINT("- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -");
			
			this->analysis(item, ins, prevIp, curEip, result);
			item->setBrokenFlag(true);
			
			Config::getInstance()->incrementDumpNumber(); //Incrementing the dump number even if Scylla is not successful
			//W::DebugBreak();
			report->closeReportDump();
				
		}
		// If we want to debug the program manually let's set the breakpoint after the triggered analysis
		if (Config::getInstance()->ATTACH_DEBUGGER) {
			//INS_InsertCall(ins,  IPOINT_BEFORE, (AFUNPTR)DoBreakpoint, IARG_CONST_CONTEXT, IARG_THREAD_ID, IARG_END);
		}
		proc_info->setPrevIp(INS_Address(ins));
	}

	// update the previous IP field in ProcInfo
	proc_info->setPrevIp(INS_Address(ins));

	return OepFinder::NOT_WXORX_INST; // TODO I'm not sold on this one, seems wrong
}


void OepFinder::intraWriteSetJMPAnalysis(ADDRINT curEip,ADDRINT prev_ip,INS ins, WriteInterval *item){	
	LOG_PRINT("\n- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -");
	LOG_PRINT("- - - - - - - - - - - - - - - - - - INTRA-WRITESET ANALYSIS TRIGGERED! - - - - - - - - - - - - - - - - - - - -");
	WxorXHandler *wxorxH = WxorXHandler::getInstance();
	ProcInfo *pInfo = ProcInfo::getInstance();
	Config *config = Config::getInstance();
	//long jump detected intra-writeset ---> trigger analysis and dump
	ADDRINT currJMPLength = ABS_ADDR_DIFF(prev_ip, curEip);
	ADDRINT JMPtreshold = item->getThreshold();

	if (currJMPLength > JMPtreshold){
		// check if the current WriteSet has already dumped more than WRITEINTERVAL_MAX_NUMBER_JMP times
		// and if the previous instruction is from a library (Long jump happened because of ret from library)
		if (item->getCurrNumberJMP() < config->WRITEINTERVAL_MAX_NUMBER_JMP && !pInfo->isLibraryInstruction(prev_ip)) {
			// try to dump and Fix the IAT if successful trigger the analysis
			LOG_PRINT("- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -");
	        LOG_PRINT("- - - - - - - - - - - - - - - - - - INTRA-DUMP ANALYSIS TRIGGERED! - - - - - - - - - - - - - - - - - - - -");
			LOG_PRINT("- - - - - - - - - - - - - - - - - -currJMPLength: %d - Treshold: %d - - - - - - - - - - - - - - - - - - - -", currJMPLength,JMPtreshold);
			LOG_PRINT("- - - - - - - - - JUMP NUMBER %d OF LENGTH %d  IN STUB FROM %08x TO %08x- - - - - - - - - - - - - -\n",item->getCurrNumberJMP(),currJMPLength, item->getAddrBegin(),item->getAddrEnd());
			LOG_INFO("Current EIP %08x", curEip);
			
			report->createReportDump(curEip,item->getAddrBegin(),item->getAddrEnd(),Config::getInstance()->getDumpNumber(),true,W::GetCurrentProcessId());
			
			Config* config = Config::getInstance();
			config->setNewWorkingDirectory(false); // create a new folder to store the dump 
			W::DWORD pid = W::GetCurrentProcessId();
			int result = this->dumpAndFixIAT(curEip, pid, config);
			this->dumpAndCollectHeap(item,curEip,result);
			config->setWorking(result);
			this->analysis(item, ins, prev_ip, curEip , result);
			report->closeReportDump(); //close the current dump report
			item->incrementCurrNumberJMP();
			config->incrementDumpNumber(); //Incrementing the dump number even if Scylla is not successful
		}				
	}else{
		LOG_PRINT("- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");
		LOG_PRINT("- - - - - - - - - - - - - - - - - INTRA-DUMP SKIPPED - - - - - - - - - - - - - - - - - - - - - - - - - - - - -");
		LOG_PRINT("- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");
	}
}

// skip the current dump
VOID OepFinder::skipCurrentDump(WriteInterval* item, ADDRINT currJMPLength, Config* config) {
	if (!item->getBrokenFlag()) {
		item->setBrokenFlag(true);
		config->incrementDumpNumber();
	} else if(config->INTER_WRITESET_ANALYSIS_ENABLE &&
			  currJMPLength > item->getThreshold()){
		item->incrementCurrNumberJMP();
		config->incrementDumpNumber();
	}
}


BOOL OepFinder::analysis(WriteInterval* item, INS ins, ADDRINT prev_ip, ADDRINT curEip , int dumpAndFixResult){
	//call the proper heuristics
	//we have to implement it in a better way!!
	Heuristics::longJmpHeuristic(ins, prev_ip);
	Heuristics::entropyHeuristic();
	Heuristics::jmpOuterSectionHeuristic(ins, prev_ip);
	Heuristics::pushadPopadHeuristic();
	//Heuristics::initFunctionCallHeuristic(curEip,&item);

	vector<string> dumps_to_analyse;
	
	dumps_to_analyse.push_back(Config::getInstance()->getCurrentDumpPath());
	Heuristics::yaraHeuristic(dumps_to_analyse);

	LOG_INFO("CURRENT WRITE SET SIZE : %d\t START : 0x%08x\t END : 0x%08x\t BROKEN-FLAG : %d", (item->getAddrEnd() - item->getAddrBegin()), item->getAddrBegin(), item->getAddrEnd(), item->getBrokenFlag());

	//write the heuristic results on ile
	return OepFinder::HEURISTIC_FAIL; /* TODO: type seems to be wrong */
}

UINT32 OepFinder::dumpAndFixIAT(ADDRINT curEip, W::DWORD pid, Config* config){
	// WAS: Getting Current process PID and Base Address (DCD: base address?)
	string outputFile = config->getFixedDumpPath();
	string reconstructed_imports_file  = config->getCurrentReconstructedImportsPath();
	string tmpDump = outputFile + "_dmp";
	//std::wstring tmpDump_w = std::wstring(tmpDump.begin(), tmpDump.end());
	string plugin_full_path = config->UNPACKING_SCYLLA_PLUGINS_PATH;	
	LOG_INFO("Calling scylla with : Current PID %d, Current output file dump %s, Plugin %d",pid, outputFile.c_str(), config->UNPACKING_SCYLLA_PLUGINS_PATH.c_str());
	
	// -------- Scylla launched as an exe --------	
	ScyllaWrapperInterface *sc = ScyllaWrapperInterface::getInstance();	
	UINT32 result = sc->launchScyllaDumpAndFix(pid,
											   curEip,
											   outputFile,
											   tmpDump,
											   config->UNPACKING_CALL_PLUGIN_FLAG,
											   config->UNPACKING_SCYLLA_PLUGINS_PATH,
											   reconstructed_imports_file);
	if (result != ScyllaWrapperInterface::SUCCESS_FIX) {
		LOG_ERROR("Scylla execution: Failed with error %d", result);
		return result; // either Scylla's exit code or ScyllaWrapperInterface::ERROR_LAUNCH
	}

	LOG_INFO("Scylla execution: Success");
	return ScyllaWrapperInterface::SUCCESS_FIX;
}


VOID OepFinder::dumpAndCollectHeap(WriteInterval* item, ADDRINT curEip, int dumpAndFixResult){
	HeapModule *heapM = HeapModule::getInstance();
	ProcInfo *pInfo = ProcInfo::getInstance();
	//std::map<std::string, HeapZone> hzs = pInfo->getHeapMap(); // TODO reference?
	std::vector<HeapZoneID> &hzs = pInfo->getHeapZones();
	std::map<std::string, std::string> hzs_dumped = pInfo->getDumpedHZ(); // TODO reference?

	LOG_PRINT("\n- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -");
	LOG_PRINT("- - - - - - - - - - - - - - - - - - - - - STAGE 2: DUMP HEAP - - - - - - - -- - - - - - - - - - - - - - - - -");
	LOG_PRINT("- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -");

	// if the curEip is in an heap zone let's save it inside the PE dumped 
	heapM->checkHeapWxorX(item, curEip, dumpAndFixResult);

	// in any case if there are heap zones let's save them in a separate folder
	if (hzs.size() > 0){
		heapM->saveHeapZones(hzs, hzs_dumped); // TODO ASAP
	}
}

