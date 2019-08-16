#pragma once

#include <stdio.h>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <fstream>
#include "json.h"
#include "WriteInterval.h"
#include "ProcInfo.h"

namespace W {
	#include "windows.h"
}

//disable PINdemonium stuff (not fully tested at the moment)
#define ENABLE_PINDEMONIUM	0

// new logging system (evaluation mode only)
#define EVALUATION_LOGGING 0 // TODO

#define FORCE_LOG_FLUSH	1

//if it is uncommented the result will be saved on file otherwise they'll be printed to stdout
#define LOG_WRITE_TO_FILE 1 // TODO drop?

// information on the syscall
typedef struct _syscall_t {
	ADDRINT syscall_number;
	union { // TODO
		ADDRINT args[16];
		struct {
			ADDRINT arg0, arg1, arg2, arg3;
			ADDRINT arg4, arg5, arg6, arg7; 
		};
	};
} syscall_t;

class Config
{
public:
	static Config* getInstance();
	static void setConfigFile(std::string path);
#if EVALUATION_LOGGING
	const char* getLogFilePath();
	const char* getTestFilePath();
	const char* getPinPIDstring();
#endif

	//getters
	string getBasePath();
	string getCurrentDumpPath();
	string getFixedDumpPath();
	string getCurrentReconstructedImportsPath();
	string getUnfixableDumpPath();
	string getYaraResultPath();
	string getReportPath();
	string getScyllaDumperPath();
	string getScyllaWrapperPath();
	string getScyllaPluginsPath();
	UINT32 getDumpNumber();
	string getFilteredWrites();
	
	//tracer getters
	string getTracerDir();
	string getExeName();
	int getMaxArgsUnk();
	string getOutputFileName();
	const char* getDrltraceConfigFile();
	bool getEmptyImgInstrFlag();
	bool getEmptyRtnInstrFlag();
	bool getMainImageFlag();
	bool getMainImageNoArgsFlag();
	bool getPdbFlag();

	//utils
	void incrementDumpNumber();
	//void Config::writeOnTimeLog(string s);
	void setWorking (int dumpAndFixIATstatus);
	void setNewWorkingDirectory(bool isInjection);
	void setExeName(string exename);
	string getWorkingDir();
	string getHeapDir();
	//string getInjectionDir();
	string getYaraExePath();
	string getYaraRulesPath();

	//--------------------------Command line Tuning Flags----------------------------
	BOOL  ATTACH_DEBUGGER;
	static const UINT32 MAX_JUMP_INTER_WRITE_SET_ANALYSIS;
	
	//Tunable from command line
	bool INTER_WRITESET_ANALYSIS_ENABLE; //Trigger the analysis inside a WriteSet in which WxorX is already broken if a Long JMP is encontered (MPress packer)
	UINT32 WRITEINTERVAL_MAX_NUMBER_JMP;
	UINT32 SKIP_DUMP;

	// modes of operation
	bool UNPACKING_MODE;
    bool DBI_SHIELD_MODE;
	bool TAINT_MODE;
	bool TRACER;
	
	// PinShield-specific flags
	bool DBI_SHIELD_INS_PATCHING;
	bool DBI_SHIELD_SREAD;
	bool DBI_SHIELD_SWRITE;

	// PINDemonium-specific flags
	bool UNPACKING_ADVANCED_IAT_FIX; // TODO unused?
	bool UNPACKING_POLYMORPHIC_CODE_PATCH;
	bool UNPACKING_NULLIFY_UNKNOWN_IAT_ENTRY; // TODO unused?
	string UNPACKING_SCYLLA_PLUGINS_PATH; // full path
	bool UNPACKING_CALL_PLUGIN_FLAG;

	//Timing attack configurations
	static const UINT32 TIMEOUT_TIMER_SECONDS;
	static const UINT32 TICK_DIVISOR; //this is used in order to lowe the ticks returnedd from GetTickCount and timeGetTime 
	static const UINT32 CC_DIVISOR; // this is used in order to lower the microseconds returned from the QueryPerformanceCounter 
	static const UINT32 KSYSTEM_TIME_DIVISOR; // this is used to lower the LONG lowpart returned from the timeGetTime in the struct _KSYSTEM_TIME inside kuser_shared_data
	static const UINT32 RDTSC_DIVISOR;
	static const UINT32 INTERRUPT_TIME_DIVISOR;
	static const UINT32 SYSTEM_TIME_DIVISOR;

		
private:
	Config::Config();
	static Config* instance;
	static std::string configFilePath;

	// starts from 0
	UINT32 dump_number;

	// parsed from JSON config file
	//string main_log_name;
	//string thread_log_name;

	string report_filename;
	string filtered_writes;		// Which write instructions are filtered (possible values: 'stack teb')
	string scylla_dumper_path;
	string scylla_plugins_path;
	string scylla_wrapper_path;
	string yara_exe_path;
	string yara_rules_path;

	/* computed from other variables */
	string base_path;				// JSON[results_path] + getCurDateAndTime()
	string working_dir;				// base_path + {"injection_", "dump_"} + dump_number
	string fixed_dump_path;			// working_dir + getProcName() + "_" + dump_number + ".exe"
	string unfixable_dump_path;		// working_dir + "NW_" + getProcName() + "_" + dump_number + ".exe" 
	string heap_dir;				// base_path + "\\HEAP"

	/* tracer variables */
	string trace_dir;				// base_path + "\\HEAP"
	string exename;					// Exe name for log naming
	int max_args_unk;				// Max number of args for unknown routines
	string output_file_name;		// Custom output file name
	const char* drltrace_config_file;	// Drltrace config file path
	//--Flags for empty instrumentation -> Exclusive
	bool empty_img_instr;			// Empty IMG instrumentation flag
	bool empty_rtn_instr;			// Empty RTN instrumentation flag
	//--Flags for dealing with return addr not in main image
	//3 granularities
	//1 - Trace args from calls with return outside main image -> main_image = false, no_args = false
	//2 - Trace calls with return outside main WOUT args -> main_image = false, no_args = true
	//3 - Ignore calls with return outside main (Default) -> main_image = true, no_args = true
	bool main_image;				
	bool no_args;
	bool pdb;

	
	//UINT32 timeout;				// DCD disabled by the authors
	//int working;					// DCD commented out as was initialized to -1 and then update by setWorking() but never read
	//string not_working_directory; // DCD became unused after refactoring or was unused before?
	//string cur_list_path;			// Path of the list of the detected function // DCD unused
	//int numberOfBadImports;		// DCD unused

};

