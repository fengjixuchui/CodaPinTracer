#include "AssemblyHandler.h"
#include "ProcInfo.h"
#include "HiddenElements.h"
#include "ExceptionHandler.h"
#include "Logging.h"

AssemblyHandler::AssemblyHandler(void) {
	this->_edx_eax = 0x6000000002346573ULL; // initial time of the machine 
	this->_eax = 0;
	this->_edx = 0;
}

// singleton
AssemblyHandler* AssemblyHandler::instance = nullptr;

AssemblyHandler* AssemblyHandler::getInstance() {

	if (instance == nullptr)
		instance = new AssemblyHandler();

	return instance;

}

VOID AssemblyHandler::patchRtdsc(ADDRINT ip, CONTEXT *ctxt, ADDRINT cur_eip) {
	#define RDTSC_LOGCOUNT 10
	static int logCounter = 0;

	ACTIVE_HOOK(EN_rdtsc);

	ProcInfo* in = ProcInfo::getInstance();
	AssemblyHandler* rd = AssemblyHandler::getInstance();

	if (ProcInfo::getInstance()->isInsideMainIMG(ip)) {
		if (logCounter == 0) {
			LOG_EVASION("[RDTSC] - Rdtsc");
			logCounter = (logCounter + 1) % RDTSC_LOGCOUNT;
		}
	}
	#undef RDTSC_LOGCOUNT

	rd->_edx = (rd->_edx_eax & 0xffffffff00000000ULL) >> 32; //prende 32 bit piu significativi
	rd->_edx_eax += in->sleepMs; //add to result ms of previous sleep call
	rd->_eax = rd->_edx_eax & 0x00000000ffffffffULL; //prende i 32 bit meno significativi
	rd->_edx_eax += 30;
	in->sleepMs = 0;

	PIN_SetContextReg(ctxt, REG_GAX, rd->_eax); // DCD was EAX
	PIN_SetContextReg(ctxt, REG_GDX, rd->_edx); // DCD was EDX
}

VOID AssemblyHandler::patchCpuidEntry(ADDRINT ip, CONTEXT *ctxt, ADDRINT cur_eip) {

	ACTIVE_HOOK(EN_cpuid);

	AssemblyHandler* rd = AssemblyHandler::getInstance();
	ADDRINT _eax;

	PIN_GetContextRegval(ctxt, REG_GAX, reinterpret_cast<UINT8*>(&_eax));
	rd->param = _eax;

}

VOID AssemblyHandler::patchCpuidExit(ADDRINT ip, CONTEXT *ctxt, ADDRINT cur_eip) {
	
	ACTIVE_HOOK(EN_cpuid);

	AssemblyHandler* rd = AssemblyHandler::getInstance();
	ADDRINT _ecx;
	ADDRINT _ebx;
	ADDRINT _edx;

	PIN_GetContextRegval(ctxt, REG_GDX, reinterpret_cast<UINT8*>(&_edx));
	PIN_GetContextRegval(ctxt, REG_GBX, reinterpret_cast<UINT8*>(&_ebx));
	PIN_GetContextRegval(ctxt, REG_GCX, reinterpret_cast<UINT8*>(&_ecx));

	if (rd->param == 1) {
		if (ProcInfo::getInstance()->isInsideMainIMG(ip)) {
			LOG_EVASION("[CPUID] - 0x1");
		}

		UINT32 mask = 0xFFFFFFFFULL;
		_ecx &= (mask >> 1);
	}
	else if (rd->param >= 0x40000000 && rd->param <= 0x400000FF) {
		LOG_EVASION("[CPUID] - 0x4");
		_ecx = 0x0ULL;
		_ebx = 0x0ULL;
		_edx = 0x0ULL;
	}

	PIN_SetContextReg(ctxt, REG_GCX, _ecx);
	PIN_SetContextReg(ctxt, REG_GBX, _ebx);
	PIN_SetContextReg(ctxt, REG_GDX, _edx);

}

VOID AssemblyHandler::patchInt2d(CONTEXT *ctx, THREADID tid, ADDRINT accessAddr) {

	ACTIVE_HOOK(EN_int0x2d);

	LOG_EVASION("[INT 2D] - int 2d");

	//insert exception on int 2d
	ExceptionHandler *eh = ExceptionHandler::getInstance();
	eh->setExceptionToExecute(0x80000003L);

}
