#pragma once
#include "pin.H"
#include "tls.h"

class TracerTdataManager {
	public:
		static void initTracerTdata(THREADID tid, bluepill_tls* tdata);
		static void deallocTracerTdata(THREADID tid, bluepill_tls* tdata);
};