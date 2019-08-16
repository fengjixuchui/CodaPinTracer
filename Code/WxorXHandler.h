#pragma once

#include "WriteInterval.h"
#include "pin.H"
#include "Debug.h"
#include "Config.h"
#include "ProcInfo.h"

class WxorXHandler
{
public:
	typedef std::vector<WriteInterval> WriteSet;
	//singleton instance
	static WxorXHandler* getInstance();
	
	//manage the write set that contains the WriteInterval written by the program
	VOID writeSetManager(ADDRINT start_addr, UINT32 size);
	
	//check if the WxorX law is broken
	WriteInterval* getWxorXinterval(ADDRINT ip);
	
	//manage the write set that contains the WriteInterval written by the program and injected in another process
	VOID writeSetManager(ADDRINT startAddr, UINT32 size, W::DWORD pid);
	
	//check if the W xor X law is broken inside injected process
	WriteSet& getWxorXintervalInjected(W::DWORD pid);
	
	VOID clearWriteSet(W::DWORD pid);
	VOID displayWriteSet(W::DWORD pid);
	VOID incrementCurrJMPNumber(int writeItemIndex);
	
private: 
	WxorXHandler();
	static WxorXHandler* instance;

	map<W::DWORD, WriteSet> WriteSetContainer;
	W::DWORD pid;

	VOID _writeSetManager(ADDRINT startAddr, UINT32 size, WriteSet &currentWriteSet);
};

