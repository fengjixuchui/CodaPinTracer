#pragma once
#include "pin.H"
#include "Helper.h"
#include <string.h>
#include "ProcInfo.h"
#include "ScyllaWrapperInterface.h"
#include "OepFinder.h"

namespace W{
	#include "windows.h"
}

class HeapModule
{
public:
	//singleton instance
	static HeapModule* getInstance();
	UINT32 checkHeapWxorX(WriteInterval* item, ADDRINT curEip, int dumpAndFixResult);
	VOID saveHeapZones(std::vector<HeapZoneID> &hzs, std::map<std::string, std::string> &hzs_dumped);

private:
	HeapModule(void);
	static HeapModule *instance;
	std::string dumpHZ(HeapZone hz, char * data, std::string hz_md5);
	std::string linkHZ(std::string heap_bin_path);
	void logHZ(std::string heap_link_name, HeapZone hz, std::string hz_md5);

};
