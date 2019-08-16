#include "ScyllaWrapperInterface.h"
#include "Logging.h"

//singleton
ScyllaWrapperInterface* ScyllaWrapperInterface::instance = 0;

ScyllaWrapperInterface* ScyllaWrapperInterface::getInstance()
{
	if (instance == 0)
		instance = new ScyllaWrapperInterface();
	return instance;
}

ScyllaWrapperInterface::ScyllaWrapperInterface(void)
{
	config = Config::getInstance();
}

/**Lauch external tool ScyllaDumper to dump the process with PID pid 
 scylla : string containing the path to the scyllaDumper executable
 pid : pid of the process to dump (Current PID if you want to use the Pin Instrumented Binary)
 curEip : current eip of the program
 outputFile : the name of the dump we want to create
 tmpDump : name of the temp file
 call_plugin_falg : specify if a plugin has to be called if the iat-fix fails
 plugin_full_path : full path to the dll containing the plugin
**/
UINT32 ScyllaWrapperInterface::launchScyllaDumpAndFix(W::DWORD pid, ADDRINT curEip, std::string outputFile, std::string tmpDump,  bool call_plugin_flag, std::string plugin_full_path, std::string reconstructed_imports_file){
	std::string scylla = config->getScyllaDumperPath();
	W::DWORD exitCode;
	//Creating the string containing the arguments to pass to the ScyllaTest.exe
	std::stringstream scyllaArgsStream;
	scyllaArgsStream << scylla << " ";
	scyllaArgsStream <<  pid << " ";
	scyllaArgsStream << std::hex  << curEip << " ";
	scyllaArgsStream << outputFile << " ";
	scyllaArgsStream << tmpDump << " ";
	scyllaArgsStream << reconstructed_imports_file << " ";
	scyllaArgsStream << call_plugin_flag << " ";
	scyllaArgsStream << plugin_full_path << " ";
	std::string scyllaArgs = scyllaArgsStream.str();	
	LOG_INFO("[Scylla] cmd %s %s",scylla.c_str(),scyllaArgs.c_str());
	//Running external Scyllatest.exe executable
	W::STARTUPINFO si ={0};
	W::PROCESS_INFORMATION pi ={0};
	si.cb=sizeof(si);

	if(!W::CreateProcess(scylla.c_str(),(char *)scyllaArgs.c_str(),NULL,NULL,FALSE,0,NULL,NULL,&si,&pi)){
		LOG_ERROR("(INITFUNCTIONCALL) Can't launch Scylla");
		return ScyllaWrapperInterface::ERROR_LAUNCH;
	}
	W::GetExitCodeProcess(pi.hProcess, &exitCode);
	W::WaitForSingleObject(pi.hProcess,INFINITE);
	W::CloseHandle(pi.hProcess);
	W::CloseHandle(pi.hThread);

	if(!Helper::existFile(outputFile)){
		LOG_ERROR("[Scylla] Can't dump the process");
		return exitCode;
	}

	// check for file containing imported functions 
	if (Helper::existFile(reconstructed_imports_file)) {
		addImportFunctionToDumpReport(reconstructed_imports_file);
	}

	LOG_INFO("[Scylla] Finished");
	return ScyllaWrapperInterface::SUCCESS_FIX;
}

void ScyllaWrapperInterface::addImportFunctionToDumpReport(string reconstructed_imports_file){
	string line;
	std::ifstream myfile(reconstructed_imports_file.c_str());
	vector<string> imports;
	vector<ReportObject *> imports_report;
	int imports_number=0;
	//parsing the file to extract modules and functions names and populate json objects
	while (getline(myfile, line)){
		/* TODO: as of now Pin would need an ad-hoc internal exception handler */
        //try{
		imports = Helper::split(line,' ');  //the format of the file is "module_name function_name"
		ReportObject *current_import = new ReportImportedFunction(imports.at(0), imports.at(1));
		imports_number++;
		imports_report.push_back(current_import);
		//}catch (const std::out_of_range& ){ //handle possible missing information inside the file
		//	LOG_ERROR("Problem adding function to the imported function report line: %s",line.c_str());
		//}	
	}
	
	//Saving the information to the report
	/* TODO: as of now Pin would need an ad-hoc internal exception handler */
	//try{
	ReportDump& report_dump = Report::getInstance()->getCurrentDump();
	report_dump.setImportedFunctions(imports_report);
	report_dump.setNumberOfImports(imports_number);
	//}
	//catch (const std::out_of_range& ){
	//	LOG_ERROR("Problem creating ReportImportedFunction report");
	//}

}

//load scylla dll and expose some of its functions as public attribute of the class
//we have to use loadLibrary and GetProcAddress because PIN doesn't support external libraries
// TODO DCD: should work with Pin 3.5, we can leave it like this?
void ScyllaWrapperInterface::loadScyllaLibary(){
	//init
	this->hScyllaWrapper = 0;
	//load library
	this->hScyllaWrapper = W::LoadLibraryEx((W::LPCSTR)config->getScyllaWrapperPath().c_str(), NULL, NULL);
	W::HANDLE scyh = W::GetModuleHandle((W::LPCSTR)config->getScyllaWrapperPath().c_str());
	//LOG_INFO("Address in which scylla is mapped: %08x\n" , scyh);
	//get proc address
	if (this->hScyllaWrapper)
	{
		this->ScyllaDumpAndFix = (def_ScyllaDumpAndFix)W::GetProcAddress((W::HMODULE)this->hScyllaWrapper, "ScyllaDumpAndFix");
		this->ScyllaWrapAddSection = (def_ScyllaWrapAddSection)W::GetProcAddress((W::HMODULE)this->hScyllaWrapper, "ScyllaWrapAddSection");
	}
}

void ScyllaWrapperInterface::unloadScyllaLibrary(){
	W::FreeLibrary((W::HINSTANCE)this->hScyllaWrapper);
}