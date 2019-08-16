#pragma once
#include "pin.H"
#include "Report.h"
#include "Helper.h"
#include "ReportImportedFunction.h"
namespace W{
	#include "windows.h"
}
#include <string>
#include "Debug.h"
#include <sstream>
#include "Config.h"

typedef UINT32 (* def_ScyllaDumpAndFix)(int pid, W::DWORD_PTR oep, W::WCHAR * output_file,W::WCHAR * base_path, W::WCHAR * tmp_dump);
typedef UINT32 (* def_ScyllaWrapAddSection)(const W::WCHAR * dump_path , const W::CHAR * sectionName, W::DWORD sectionSize, UINT32 offset , W::BYTE * sectionData);

class ScyllaWrapperInterface
{

public:
	enum ScyllaWrapperCode { 
		ERROR_LAUNCH = -5,
		// see ScyllaWrapper.cpp from ScyllaWrapper tool
		ERROR_FILE_FROM_PID = -4,
		ERROR_DUMP = -3,
		ERROR_IAT_NOT_FOUND = -2,
		ERROR_IAT_NOT_FIXED = - 1,
		SUCCESS_FIX = 0
	};
	static ScyllaWrapperInterface* getInstance();
	//Create a process which launch the ScyllaDumper.exe executable to dump the binary and fix the IAT
	UINT32 launchScyllaDumpAndFix(W::DWORD pid, ADDRINT curEip, string dumpFileName, string tmpDump, bool call_plugin_flag, string plugin_full_path, string reconstructed_imports_file);
	//interface to the ScyllaWrapper.dll
	def_ScyllaDumpAndFix	ScyllaDumpAndFix;
	def_ScyllaWrapAddSection ScyllaWrapAddSection;
	void loadScyllaLibary();
	void unloadScyllaLibrary();

private:
	Config *config;
	ScyllaWrapperInterface::ScyllaWrapperInterface();
	static ScyllaWrapperInterface* instance;
	void * hScyllaWrapper;
	void addImportFunctionToDumpReport(string reconstructed_imports_file);
};

