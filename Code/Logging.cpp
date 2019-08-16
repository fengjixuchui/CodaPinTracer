#include "Logging.h"
#include "porting.h"

FILE* Logging::mainLog;

std::string Logging::strPinPID;
std::string Logging::mainLogName;
std::string Logging::threadLogName;
std::string Logging::logDir;

void Logging::initLogging(std::string &logDir, std::string mainLogName, std::string threadLogName) {
	Logging::mainLogName = mainLogName;
	Logging::threadLogName = threadLogName;
	Logging::logDir = logDir;
	Logging::strPinPID = to_string(W::GetCurrentProcessId());

	// create main log
	std::string mainLogPath = logDir + "//" + mainLogName + "." + strPinPID;
	
	Logging::mainLog = fopen(mainLogPath.c_str(), "a");
	if (!Logging::mainLog) {
		std::cerr << "Cannot open main log file " << mainLogPath
				  << " - logging will be disabled!" << std::endl;
		return;
		// TODO shall we quit Pin instead?
	}

#if FORCE_LOG_FLUSH
	if (setvbuf(Logging::mainLog, (char *)NULL, _IONBF, 0)) {
		std::cerr << "Cannot disable buffering for main log" << std::endl;
		PIN_ExitProcess(1);
	}
#endif
}

void Logging::initThreadLog(THREADID tid, bluepill_tls* tdata) {
	std::string threadLogPath = Logging::logDir + "//" + Logging::threadLogName
								+ "." + strPinPID + "." + to_string(tid);

	tdata->threadLogFile = fopen(threadLogPath.c_str(), "a");
	if (!tdata->threadLogFile) {
		std::cerr << "Cannot open thread log file " << threadLogPath
			<< " - logging will be disabled!" << std::endl;
		return;
		// TODO shall we quit Pin instead?
	}

#if FORCE_LOG_FLUSH
	if (setvbuf(tdata->threadLogFile, (char *)NULL, _IONBF, 0)) {
		std::cerr << "Cannot disable buffering for thread log" << std::endl;
		PIN_ExitProcess(1);
	}
#endif
}

void Logging::shutdownLogging() {
	fclose(Logging::mainLog);
}

void Logging::shutdownThreadLogging(bluepill_tls * tdata) {
	fclose(tdata->threadLogFile);
}

void Logging::logMain(const char* fmt, ...) {
	if (!Logging::mainLog) return; // TODO shall we quit Pin instead?
	va_list args;
	va_start(args, fmt);
	vfprintf(Logging::mainLog, fmt, args);
	va_end(args);
}

void Logging::logThread(const char* fmt, ...) {
	THREADID tid = PIN_ThreadId();
	if (tid == INVALID_THREADID) {
		cerr << "ERROR: logging an evasion in an internal thread?" << std::endl;
		return; // TODO shall we quit Pin instead?
	}
	bluepill_tls *tdata = static_cast<bluepill_tls*>(PIN_GetThreadData(tls_key, tid));
	
	ASSERT(tdata->threadLogFile != NULL, "No log descriptor for thread"); // TODO disable
	va_list args;
	va_start(args, fmt);
	vfprintf(tdata->threadLogFile, fmt, args);
	va_end(args);
}

void Logging::logThreadTLS(bluepill_tls* tdata, const char* fmt, ...) {
	ASSERT(tdata->threadLogFile != NULL, "No log descriptor for thread"); // TODO disable
	va_list args;
	va_start(args, fmt);
	vfprintf(tdata->threadLogFile, fmt, args);
	va_end(args);
}
