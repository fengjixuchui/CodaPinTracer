#include "ProcessInjectionModule.h"
#include "porting.h"


ProcessInjectionModule* ProcessInjectionModule::instance = 0;

ProcessInjectionModule* ProcessInjectionModule::getInstance()
{
	if (instance == 0)
		instance = new ProcessInjectionModule();
	return instance;
}

ProcessInjectionModule::ProcessInjectionModule(void)
{
	wxorxHandler = WxorXHandler::getInstance();
	config = Config::getInstance();
	report = Report::getInstance();
	insideCreateProcess = false;


}

BOOL ProcessInjectionModule::isInsideCreateProcess(){
	if(insideCreateProcess && remoteWriteInsideCreateProcess<3){
		LOG_INFO("1. InsideCreateProcess %d   remoteWrite %d",insideCreateProcess,remoteWriteInsideCreateProcess);
		remoteWriteInsideCreateProcess++;
		return true;
	}
	/* TODO: code was if (remoteWriteInsideCreateProcess & remoteWriteInsideCreateProcess ==3)
	 * Not really sure about the meaning of 3 here. The original code would check r==3 first,
	 * then &-ing the result with r would yield 1 iff r==3, and 0 otherwise. Fluke? :-) */
	else if(remoteWriteInsideCreateProcess == 3 ){
		LOG_INFO("2. InsideCreateProcess %d   remoteWrite %d",insideCreateProcess,remoteWriteInsideCreateProcess);
		remoteWriteInsideCreateProcess = 0;
		insideCreateProcess = false;
		return false;
	}
	else{
		LOG_INFO("3. InsideCreateProcess %d   remoteWrite %d",insideCreateProcess,remoteWriteInsideCreateProcess);
		return false;
	}
}

VOID ProcessInjectionModule::AddInjectedWrite(ADDRINT start, UINT32 size, W::DWORD pid ){
	//Check if injection tracking is active (disable during the createProcess since it make different remote write in the target process)
	if(!isInsideCreateProcess()){
		wxorxHandler->writeSetManager(start,size,pid);
	}
}

VOID ProcessInjectionModule::CheckInjectedExecution(W::DWORD pid ){
	std::vector<WriteInterval>& currentWriteSet =  WxorXHandler::getInstance()->getWxorXintervalInjected(pid);
	if(!currentWriteSet.empty()){
		LOG_INFO("Identify Injected execution %d",pid);
		HandleInjectedMemory(currentWriteSet,pid);
		wxorxHandler->clearWriteSet(pid); //clear the dumped writeItems from the current WriteSet
	}
}


VOID ProcessInjectionModule::HandleInjectedMemory(std::vector<WriteInterval>& currentWriteSet,W::DWORD pid){
	
	for(std::vector<WriteInterval>::iterator item = currentWriteSet.begin(); item != currentWriteSet.end(); ++item) {
		LOG_PRINT("\n\n-------------------------------------------------------------------------------------------------------");
		LOG_PRINT("------------------------------------ INJECTED STUB inside pid %d begin: %08x TO %08x -------------------------------------",pid,item->getAddrBegin(),item->getAddrEnd());
		LOG_PRINT("-------------------------------------------------------------------------------------------------------\n");
#if ENABLE_PINDEMONIUM
		LOG_PRINT("- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -");
		LOG_PRINT("- - - - - - - - - - - - - - - - - - - - - STAGE 1: DUMPING - - - - - - - - - - - - - - - - - - - - - - - - -");
		LOG_PRINT("- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -");
		config->setNewWorkingDirectory(true);
		string cur_dump_path = DumpRemoteWriteInterval(&(*item), pid);	
		report->createReportDump(item->getAddrBegin(),item->getAddrBegin(),item->getAddrEnd(),Config::getInstance()->getDumpNumber(),false,pid);
		
		//check if the memory has been dumped correctly and execute the heuristics
		if (cur_dump_path != ""){
			ExecuteHeuristics(cur_dump_path);
		}
		
		report->closeReportDump();
#endif
		config->incrementDumpNumber();
	}
}


/**
Dump on disk the memory range written on the remote process address space with  
return a string containing the path of the dumped memory
**/
string ProcessInjectionModule::DumpRemoteWriteInterval(WriteInterval* item,W::DWORD pid){
	//Dump remote process memory for each item inside the  currentWriteSet
	W::SIZE_T dwBytesRead = 0;
	UINT32 size =  (UINT32)(item->getAddrEnd()-item->getAddrBegin());
	unsigned char * buffer = (unsigned char *)malloc(size);
	W::HANDLE process = W::OpenProcess(PROCESS_VM_READ,false,pid);
	if(W::ReadProcessMemory(process,(W::LPVOID)item->getAddrBegin(),buffer,  size,&dwBytesRead)){
		string path = config->getWorkingDir()+ "/" + to_string(pid) + "_" + getNameFromPid(pid) + ".bin"; /* DCD: long double for pid?!?*/
		Helper::writeBufferToFile(buffer,size,path);
		LOG_INFO("Dumped remote injected memory inside pid %d to %s",pid,path.c_str());
		return path;
	}
	else{
		LOG_ERROR("Error reading injected process %d  memory %s",pid,W::GetLastError());
		return "";
	}	

}

VOID ProcessInjectionModule::setInsideCreateProcess(){
	this->insideCreateProcess = true;
}


/*
	Executes the heuristics on the dumped memory
*/
VOID ProcessInjectionModule::ExecuteHeuristics(string path_to_analyse){
		LOG_PRINT("\n- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -");
		LOG_PRINT("- - - - - - - - - - - - - - - - - - - - - STAGE 2: ANALYZING DUMP - - - - - - - - - - - - - - - - - - - - - -");
		LOG_PRINT("- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -");
		vector<string> dumps_to_analyse;
		dumps_to_analyse.push_back(path_to_analyse);
		Heuristics::yaraHeuristic(dumps_to_analyse);
	
}

string ProcessInjectionModule::getNameFromPid(W::DWORD pid) {
    W::HANDLE hSnapshot = W::CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
    if(hSnapshot) {
        W::PROCESSENTRY32 pe32;
        pe32.dwSize = sizeof(W::PROCESSENTRY32);
        if(Process32First(hSnapshot, &pe32)) {
            do {
				if(pe32.th32ProcessID == pid){
					return string(pe32.szExeFile);
				}
            } while(Process32Next(hSnapshot, &pe32));
         }
         W::CloseHandle(hSnapshot);
    }
	return "";
}