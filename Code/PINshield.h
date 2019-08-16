#pragma once
#include "Pin.h"
#include "Debug.h"
//#include "Log.h"
#include "FilterHandler.h"
#include "PatternMatchModule.h"
#include "FakeReadHandler.h"
#include "FakeWriteHandler.h"

namespace W {
	#include "windows.h"
}

class PINshield {
public:
	PINshield() {};
	void addInstrumentation(INS ins);

private:
	PatternMatchModule evasionPatcher;
	FakeReadHandler fakeReadH;
	FakeWriteHandler fakeWriteH;
	bool isFakeReadInitialized;
	//void ScanForMappedFiles();
	static REG GetScratchReg(UINT32 index);
	static ADDRINT handleRead(ADDRINT eip, ADDRINT read_addr, void *fakeReadH);
	static ADDRINT handleWrite(ADDRINT eip, ADDRINT write_addr, void *fakeWriteH);
};

