#pragma once
#include "pin.H"

class AssemblyHandler {

public:
	static AssemblyHandler* getInstance();

	static VOID patchRtdsc(ADDRINT ip, CONTEXT *ctxt, ADDRINT cur_eip);
	static VOID patchCpuidEntry(ADDRINT ip, CONTEXT *ctxt, ADDRINT cur_eip);
	static VOID patchCpuidExit(ADDRINT ip, CONTEXT *ctxt, ADDRINT cur_eip);
	static VOID patchInt2d(CONTEXT *ctx, THREADID tid, ADDRINT accessAddr);

	UINT64 _edx_eax;
	UINT32 _eax;
	UINT32 _edx;
	ADDRINT param;


private:
	//singleton
	AssemblyHandler(void);

	static AssemblyHandler* instance;

};