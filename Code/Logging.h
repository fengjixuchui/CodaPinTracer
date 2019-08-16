#pragma once
#include <cstdarg>
#include "pin.H"
#include "tls.h"

#define INFO_BUILD  1
#define WARN_BUILD  1
#define ERROR_BUILD 1
#define LOG_BUILD 1

#define __FILENAME__ (strrchr(__FILE__, '/') ? strrchr(__FILE__, '/') + 1 : __FILE__)

#define LOG_WARNING(fmt, ...) \
	do { \
		if (!WARN_BUILD) break; \
		Logging::logMain("[WARNING](%s) "fmt"\n", __FILENAME__, __VA_ARGS__); \
	} while (0)

#define LOG_ERROR(fmt, ...) \
	do { \
		if (!ERROR_BUILD) break; \
		Logging::logMain("[ERROR](%s) "fmt"\n", __FILENAME__, __VA_ARGS__); \
	} while (0)

#define LOG_INFO(fmt, ...) \
	do { \
		if (!INFO_BUILD) break; \
		Logging::logMain("[INFO](%s) "fmt"\n", __FILENAME__, __VA_ARGS__); \
	} while (0)

#define LOG_PRINT(fmt, ...) \
	do { \
		if (!LOG_BUILD) break; \
		Logging::logMain("(%s) "fmt"\n", __FILENAME__, __VA_ARGS__); \
	} while (0)

#define LOG_EVASION(fmt, ...) \
	do { \
		if (!LOG_BUILD) break; \
		Logging::logThread(fmt"\n", __VA_ARGS__); \
	} while (0)

class Logging {
public:
	static FILE* mainLog;
	static void initLogging(std::string &logDir, std::string mainLogName, std::string threadLogName);
	static void initThreadLog(THREADID tid, bluepill_tls* tdata);

	static void shutdownLogging();
	static void shutdownThreadLogging(bluepill_tls* tdata);

	static void logMain(const char* fmt, ...);
	static void logThread(const char* fmt, ...);
	static void logThreadTLS(bluepill_tls* tdata, const char* fmt, ...);

private:
	static std::string strPinPID;
	static std::string mainLogName;
	static std::string threadLogName;
	static std::string logDir;
};

