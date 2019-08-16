#include "HeapModule.h"
#include "porting.h"
#include "OepFinder.h"

HeapModule* HeapModule::instance = 0;

HeapModule::HeapModule(void){
}

HeapModule* HeapModule::getInstance(){
if (instance == 0)
	instance = new HeapModule();

return instance;
}

UINT32 HeapModule::checkHeapWxorX(WriteInterval* item, ADDRINT curEip, int dumpAndFixResult){
	// include in the PE the dump of the current heap zone where a WxorX violation happened 
	if (item->getHeapFlag() && dumpAndFixResult != ScyllaWrapperInterface::ERROR_FILE_FROM_PID
							&& dumpAndFixResult != ScyllaWrapperInterface::ERROR_DUMP) {
		ADDRINT beginAddr = item->getAddrBegin();
		ADDRINT endAddr = item->getAddrEnd();
		LOG_PRINT("[INFO][OepFinder.cpp] - EIP ON THE HEAP - DUMPING THE HEAP-ZONE BEGIN 0x%08x | END 0x%08x", beginAddr, endAddr);
		UINT32 writeSetSize = S_ADDR_DIFF(beginAddr, endAddr);
		// allocate a buffer and copy the heap zone into it 		  
		unsigned char* buffer = (unsigned char*)malloc(writeSetSize);
		PIN_SafeCopy(buffer, (void const*)beginAddr, writeSetSize);

		// get the name of the last dump from the Config object 
		Config *config = Config::getInstance();
		string dump_path = config->getFixedDumpPath();

		if (dumpAndFixResult != 0) {
			dump_path = dump_path + "_dmp"; // DCD check this
		}

		if (!Helper::existFile(dump_path)) { // this is the case in which we have a not working dump but we want to add anyway the .heap 
			dump_path = config->getUnfixableDumpPath();
		}

		if (!Helper::existFile(dump_path)) {
			LOG_INFO("[CRITICAL ERROR] Dump file not found\n");
			return OepFinder::HEURISTIC_FAIL;
		}

		// and convert it into the WCHAR representation 
		std::wstring widestr = std::wstring(dump_path.begin(), dump_path.end());
		const wchar_t* widecstr = widestr.c_str();
		// calculate offset of the jump in the heap section
		UINT32 offset = S_ADDR_DIFF(beginAddr, curEip);
		
		// NOTE: REMEMEBER TO LOAD AND UNLOAD SCYLLAWRAPPER!
		ScyllaWrapperInterface *scylla_wrapper = ScyllaWrapperInterface::getInstance();
		scylla_wrapper->loadScyllaLibary();
		scylla_wrapper->ScyllaWrapAddSection(widecstr, ".heap", writeSetSize, offset, buffer);
		scylla_wrapper->unloadScyllaLibrary();
		
		free(buffer);
	} else {
		LOG_PRINT("[INFO][OepFinder.cpp] - [WARN] EIP IS NOT ON THE HEAP\n");
		// TODO use a different return code
	}

	return 0;
}

VOID HeapModule::saveHeapZones(std::vector<HeapZoneID> &hzs, std::map<std::string,std::string> &hzs_dumped){
	LOG_PRINT("[INFO][OepFinder.cpp] - SAVING ALL THE HEAP-ZONES ALLOCATED UNTIL NOW: %d HEAP-ZONES\n", hzs.size());
	std::string heaps_dir = Config::getInstance()->getWorkingDir() + "\\heaps";
	OS_MkDir(heaps_dir.c_str(), 777); // create the folder we will store the .bin of the heap zones 

	
	std::string hz_md5;
	std::string hz_md5_now;
	Config *config = Config::getInstance();

	std::string heap_map_path = heaps_dir + "\\" +  "heap_map.txt";
	std::ofstream heap_map_file(heap_map_path.c_str());

	for (std::vector<HeapZoneID>::iterator it = hzs.begin(); it != hzs.end(); ++it) {
		HeapZone& hz = it->second;
		std::string mem_hz_md5 = it->first;
		char *hz_data = (char*)malloc(hz.size);
		PIN_SafeCopy(hz_data , (void const*)hz.begin , hz.size);
		hz_md5_now = md5(hz_data); // compute md5 of the data inside the heap 

		std::map<std::string,std::string>::iterator hz_dumped_it = hzs_dumped.find(hz_md5_now);

		if (hz_dumped_it != hzs_dumped.end()){
			// a heap zone with the same data has already been dumped
			LOG_PRINT("HEAPZONE [POSITION (BEGIN 0x%08x | END 0x%08x) - DATA MD5 %s] ALREADY DUMPED! - CREATING HARD LINKS", hz.begin,hz.end, hz_md5_now.c_str());
			std::string heap_link_name = linkHZ(hz_dumped_it->second);
			logHZ(heap_link_name,hz,hz_md5);
		}else{
			LOG_PRINT("HEAPZONE [POSITION (BEGIN 0x%08x | END 0x%08x) - DATA MD5 %s] TO DUMP! - CREATING DUMP AND HARD LINKS", hz.begin,hz.end, hz_md5_now.c_str());
			std::string heap_bin_path  = dumpHZ(hz,hz_data,hz_md5_now);
			std::string heap_link_name = linkHZ(heap_bin_path);
			logHZ(heap_link_name,hz,hz_md5_now);
			ProcInfo *pInfo = ProcInfo::getInstance();
			pInfo->insertDumpedHeapZone(hz_md5_now,heap_bin_path);
		}

		free(hz_data);
	}
}


std::string HeapModule::dumpHZ(HeapZone hz, char * data, std::string hz_md5){

	std::string heap_dir_path = Config::getInstance()->getHeapDir();
	std::string heap_bin_name = "heap_" + hz_md5 + ".bin";
	std::string heap_bin_path = heap_dir_path + "\\" + heap_bin_name; // this is the heap.bin in the global folder HEAP

	// dump of the heap inside this folder 
	std::string heap_dir = Config::getInstance()->getHeapDir();
	std::ofstream heap_file(heap_bin_path.c_str(), std::ios::binary);

	heap_file.write((char *) data, hz.size);
	heap_file.close();

	return heap_bin_path;
}


std::string HeapModule::linkHZ(std::string heap_bin_path){

	// we will save the link to the heap.bin inside the folder heaps of the currente dump 
	std::string heaps_dir = Config::getInstance()->getWorkingDir() + "\\heaps";

	// creating the name of the link by extracting the name of the heap.bin 
	std::size_t pos = heap_bin_path.find("heap_");
	std::string heap_link_name = heap_bin_path.substr(pos);

	// finally composing the heap link path
	std::string heap_link_path = heaps_dir + "\\" + heap_link_name;

	W::CreateHardLink(heap_link_path.c_str() , heap_bin_path.c_str() ,NULL);

	return  heap_link_name;
}

void HeapModule::logHZ(std::string heap_link_name, HeapZone hz, std::string hz_md5){

	// open the heap_map.txt
	std::string working_dir = Config::getInstance()->getWorkingDir();  
	std::string heap_map_path = working_dir + "\\heaps" +  "\\heap_map.txt"; // write the log 

	//printf("Inside logHZ - heap_map_path: %s\n", heap_map_path.c_str());

	std::ofstream heap_map_file(heap_map_path.c_str(),ios::app);

	heap_map_file << heap_link_name << " " << std::hex << hz.begin << " " << to_string((unsigned long long)hz.size) << " " << "\n" ;

	heap_map_file.close();
}