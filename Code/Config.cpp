#include "Config.h"
#include "porting.h"
#include "Logging.h"

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

	// Build the path for this execution
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

	std::string main_log_name = root["main_log_name"].asString();
	std::string thread_log_name = root["thread_log_name"].asString();
	Logging::initLogging(this->base_path, main_log_name, thread_log_name);

	// More JSON parsing
	this->report_filename = root["report_filename"].asString();

	// Set tracer parameters -> Probably will have to use a config file. Same json one or another one ? Ask Daniele. For now hardcode.
	this->max_args_unk = 4;
	this->output_file_name = "";
	this->drltrace_config_file = "drltrace_win.config";
	this->empty_img_instr = false;
	this->empty_rtn_instr = false;
	this->main_image = true;
	this->no_args = true;
	this->pdb = true;
	//Set tracer dir
	this->trace_dir = this->base_path + "\\TRACER";
	OS_MkDir(this->trace_dir.c_str(), 777);

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

		rename(this->working_dir.c_str(),not_working_tag.c_str());
		this->working_dir = not_working_tag;
}