#include "Config.h"
#include "porting.h"
#include "Logging.h"
#include "ScyllaWrapperInterface.h"

#if EVALUATION_LOGGING
namespace W {
	#include "windows.h"
}
#endif

//Tuning Flags
const UINT32 Config::MAX_JUMP_INTER_WRITE_SET_ANALYSIS = 20;

// Divisor of the timing 
//if we divide high_1_part and high_2_part with two different values the timeGetTime() doesn't work
//it doesn't work because high_1_part and high_2_part are used in order to understand if the value read for the low_part
//is consistent ( high_1_part == high_2_part -> low_part consistent ) 
const UINT32 Config::KSYSTEM_TIME_DIVISOR = 1;
const UINT32 Config::TICK_DIVISOR = 3000;	//this value is based on exait technique (the time returned is equal to the time returned when the program is not instrumented)
const UINT32 Config::CC_DIVISOR = 3500;	//this value is based on exait technique (the time returned is equal to the time returned when the program is not instrumented)

//the rdtsc works like this:
//store the least 32 significant bit of the returned value in EAX and the most 32 significant bit in EDX ( value = EDX:EAX )
const UINT32 Config::RDTSC_DIVISOR = 400;
const UINT32 Config::INTERRUPT_TIME_DIVISOR = 1000;
const UINT32 Config::SYSTEM_TIME_DIVISOR = 100;

// singleton
Config* Config::instance = nullptr;
std::string Config::configFilePath;

Config* Config::getInstance() {
	if (instance == nullptr) {
		instance = new Config();
	}
	return instance;
}

void Config::setConfigFile(std::string path) {
	configFilePath = path;
}

Config::Config(){
	ASSERT(!configFilePath.empty(), "Config file path not set");

	// read configuration
	//std::cerr << configFilePath << std::endl;
	std::ifstream config_file(configFilePath.c_str(), std::ifstream::binary);
	if (!config_file.good()) {
		std::cerr << "Could not find JSON config file: " << configFilePath << std::endl;
		PIN_ExitProcess(1);
	}
	
	Json::Value root;
	Json::Reader reader;

	bool parsingSuccessful = reader.parse(config_file, root, false);
	if (!parsingSuccessful) {
		std::cerr << "Error parsing the JSON config file: "
				  << reader.getFormattedErrorMessages() << std::endl;
		PIN_ExitProcess(1);
	}

	// build the path for this execution
	this->base_path = root["results_path"].asString();
	bool addTimestamp = root["timestamped_folder"].asBool();
	if (addTimestamp) {
		OS_MkDir(this->base_path.c_str(), 777);
		this->base_path += "\\" + Helper::getCurDateAndTime() + "\\";
	}
	OS_RETURN_CODE ret = OS_MkDir(this->base_path.c_str(), 777);
	if (ret.generic_err == OS_RETURN_CODE_FILE_OPEN_FAILED) {
		std::cerr << "Cannot create the results folder specified in the JSON file!"
				  << std::endl;
		PIN_ExitProcess(1);
	}

	this->heap_dir = this->base_path + "\\HEAP"; // TODO disable?
	OS_MkDir(this->heap_dir.c_str(), 777);

	std::string main_log_name = root["main_log_name"].asString();
	std::string thread_log_name = root["thread_log_name"].asString();
	Logging::initLogging(this->base_path, main_log_name, thread_log_name);

	// more JSON parsing
	this->report_filename = root["report_filename"].asString();
	this->filtered_writes = root["filtered_writes"].asString();
	this->yara_exe_path = root["yara_exe_path"].asString();
	this->yara_rules_path = root["yara_rules_path"].asString();
	this->scylla_dumper_path = root["scylla_dump_path"].asString();
	this->scylla_plugins_path = root["scylla_plugins_path"].asString();
	this->scylla_wrapper_path = root["scylla_wrapper_path"].asString();

	//Set tracer parameters -> Probably will have to use a config file. Same json one or another one ? Ask Daniele. For now hardcode.
	this->max_args_unk = 4;
	this->output_file_name = "";
	this->drltrace_config_file = "drltrace_win.config";
	this->empty_img_instr = false;
	this->empty_rtn_instr = false;
	this->main_image = true;
	this->no_args = true;
	this->pdb = false;
	//Set tracer dir
	this->trace_dir = this->base_path + "\\TRACER";
	OS_MkDir(this->trace_dir.c_str(), 777);

	/* TODO Arancino's report file was mentioned here */
	//set the initial dump number
	this->dump_number = 0;

	//this->working = -1;
}

/* ----------------------------- GETTER -----------------------------*/

#if EVALUATION_LOGGING
const char* Config::getLogFilePath() {
	return this->logFilePath.c_str();
}

const char* Config::getTestFilePath() {
	return this->testFilePath.c_str();
}

const char* Config::getPinPIDstring() {
	return this->PinPIDstring.c_str();
}
#endif

string Config::getReportPath(){
	return this->base_path + this->report_filename;
}

string Config::getBasePath(){
	return this->base_path;
}

string Config::getHeapDir(){
	return this->heap_dir;
}

UINT32 Config::getDumpNumber(){
	return this->dump_number;
}

string Config::getUnfixableDumpPath(){ // DCD fixed uninitialized field
	std::string proc_name = ProcInfo::getInstance()->getProcName();

	this->unfixable_dump_path = this->working_dir + "\\NW-" + proc_name + to_string(this->dump_number) + ".exe";
	return this->unfixable_dump_path;
}

string Config::getFixedDumpPath(){	
	//Creating the output filename string of the current dump (ie finalDump_0.exe or finalDump_1.exe)
	std::string proc_name = ProcInfo::getInstance()->getProcName();

	this->fixed_dump_path = this->working_dir + "\\" + proc_name + "_" + to_string(this->dump_number) + ".exe" ;
	return this->fixed_dump_path;
}

string Config::getCurrentDumpPath(){
	string fixed_dump = this->getFixedDumpPath();          // path to file generated when Scylla is able to fix the IAT and reconstruct the PE
	string not_fixed_dump = this->getUnfixableDumpPath();   // path to file generated when Scylla is NOT able to fix the IAT and reconstruct the PE
	
	if (Helper::existFile(fixed_dump)) { // if a Scylla-fixed dump exists return it
		return fixed_dump;
	} else if (Helper::existFile(not_fixed_dump)) { // if an unfixed dump exists return it
		return not_fixed_dump; 
	} else{
		LOG_ERROR("Dump file hasn't been created");  // no file created so nothing to return
		return string();
	}
}

string Config::getCurrentReconstructedImportsPath(){
	return this->base_path + "reconstructed_imports.txt";
}


string Config::getYaraResultPath(){	
 	//Creating the output filename string of the current dump (ie finalDump_0.exe or finalDump_1.exe)
 	return this->base_path + "yaraResults" + "_" + to_string(this->dump_number) + ".txt" ;
 }

string Config::getScyllaDumperPath(){

	return this->scylla_dumper_path;
}

string Config::getScyllaWrapperPath(){
	return this->scylla_wrapper_path;
}

string Config::getScyllaPluginsPath(){
	return this->scylla_plugins_path;
}

string Config::getFilteredWrites(){
	return this->filtered_writes;
}

string Config::getYaraExePath(){
	return this->yara_exe_path;
}

string Config::getYaraRulesPath(){
	return this->yara_rules_path;
}

// Tracer getters

string Config::getTracerDir() {
	return this->trace_dir;
}

string Config::getExeName() {
	return this->exename;
}

int Config::getMaxArgsUnk() {
	return this->max_args_unk;
}

string Config::getOutputFileName() {
	return this->output_file_name;
}

const char* Config::getDrltraceConfigFile() {
	return this->drltrace_config_file;
}

bool Config::getEmptyImgInstrFlag(){
	return this->empty_img_instr;
}

bool Config::getEmptyRtnInstrFlag() {
	return this->empty_rtn_instr;
}

bool Config::getMainImageFlag() {
	return this->main_image;
}

bool Config::getMainImageNoArgsFlag() {
	return this->no_args;
}

bool Config::getPdbFlag() {
	return this->pdb;
}

/* ----------------------------- UTILS -----------------------------*/

void Config::setExeName(string exename) {
	this->exename = exename;
}

//Increment dump number
void Config::incrementDumpNumber(){
	this->dump_number++;
}


void Config::setNewWorkingDirectory(bool isInjection){
	std::string prefix = "";
	if(isInjection){
		prefix = "injection_";
	}
	else{
		prefix = "dump_";
	}
	
	this->working_dir = this->base_path + prefix + to_string(this->getDumpNumber());

	OS_MkDir(this->working_dir.c_str(), 777);

}

string Config::getWorkingDir(){
	return this->working_dir;
}


void Config::setWorking(int dumpAndFixIATstatus) {
	//this->working = dumpAndFixIATstatus;

	std::string working_tag =  this->working_dir + "-[working]";
	std::string not_working_tag =  this->working_dir + "-[not working]";

	// TODO DCD UNUSED - maybe for when Scylla cannot be launched?
	//std::string not_dumped_tag =  this->working_dir + "-[not dumped]";

	if (dumpAndFixIATstatus == ScyllaWrapperInterface::SUCCESS_FIX) {
		rename(this->working_dir.c_str(),working_tag.c_str());
		this->working_dir = working_tag;
	}
	else{
		rename(this->working_dir.c_str(),not_working_tag.c_str());
		this->working_dir = not_working_tag;
	}
}