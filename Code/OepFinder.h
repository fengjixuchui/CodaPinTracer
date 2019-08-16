#pragma once

#include "pin.H"
#include "WxorXHandler.h"
#include "Debug.h"
#include "Heuristics.h"
#include "FilterHandler.h"
#include "ProcInfo.h"
#include "Config.h"
#include "Report.h"
#include "md5.h"
#include "Helper.h"
namespace W {
	#include "windows.h"
}
#include "GdbDebugger.h"
#include "ScyllaWrapperInterface.h"
#include "TimeTracker.h"
#include "HeapModule.h"

//return value for isCurrentInOEP function


class OepFinder
{

public:
	OepFinder(void);
	int isCurrentInOEP(INS ins);

	enum OepFinderCode {
		SKIPPED_DUMP = -4,
		INS_FILTERED = -3,
		HEURISTIC_FAIL = -2,
		NOT_WXORX_INST = -1,
		FOUND_OEP = 0
	};

private:
	//check if the current instruction is a pushad or a popad
	//if so then set the proper flags in ProcInfo
	void handlePopadAndPushad(INS ins);
	VOID skipCurrentDump(WriteInterval* item, ADDRINT currJMPLength, Config* config);
	BOOL analysis(WriteInterval* item, INS ins, ADDRINT prev_ip, ADDRINT curEip , int dumpAndFixResult);
	void intraWriteSetJMPAnalysis(ADDRINT curEip, ADDRINT prev_ip, INS ins, WriteInterval *item);
	WxorXHandler *wxorxHandler;
	Report *report;
	UINT32 dumpAndFixIAT(ADDRINT curEip, W::DWORD pid, Config* config);
	VOID dumpAndCollectHeap(WriteInterval* item, ADDRINT curEip, int dumpAndFixResult);
};

