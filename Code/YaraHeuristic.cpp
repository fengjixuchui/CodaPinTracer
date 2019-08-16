#include "YaraHeuristic.h"

// Get the size of the file passed as fp - DCD unused
/* UINT32 YaraHeuristic::getFileSize(FILE * fp){
	fseek(fp, 0L, SEEK_END);
	int size = ftell(fp);
	fseek(fp, 0, SEEK_SET);
	return size;
}*/

// returns a string containing all the data that could be read from the pipe 
std::string YaraHeuristic::ReadFromPipe(W::PROCESS_INFORMATION piProcInfo) {
	W::DWORD dwRead; 
    CHAR chBuf[PIPE_BUFSIZE];
    W::BOOL bSuccess;
    std::string out = "";
    do { 
		bSuccess = W::ReadFile(g_hChildStd_OUT_Rd,
							   chBuf,
							   PIPE_BUFSIZE,
							   &dwRead,
							   NULL);
        if ( !bSuccess || dwRead == 0 ) break; 
		out.append(chBuf, dwRead);
	} while (bSuccess);

	if (!bSuccess) {
		LOG_ERROR("Error reading from Yara pipe");
	}

	return out ;
}


/*
Parse yara output and return a vector containing the matched rules as string
*/
std::vector<std::string> YaraHeuristic::parseYaraOutput(std::string output) {
	std::vector<std::string> matched_rules;
	std::istringstream output_stream(output); 
	for (std::string line; std::getline(output_stream, line); ){ // iterate through lines
		/* TODO: as of now Pin would need an ad-hoc internal exception handler */
		//try{
		std::string matched_string = Helper::split(line,' ').at(0);
		LOG_INFO("Adding matched Yara rule %s", matched_string.c_str());
		matched_rules.push_back(matched_string); 
		//}
		//catch (const std::out_of_range&){
		//}	
	}
	return matched_rules;
}

std::vector<std::string> YaraHeuristic::analyseYara(std::string dump_to_analyse){
	std::string yara_rules_path = Config::getInstance()->getYaraRulesPath();
	std::string yara_exe_path = Config::getInstance()->getYaraExePath();
	std::string yara_res_file = Config::getInstance()->getYaraResultPath();
	
	std::vector<std::string> matched_rules;
	
	W::SECURITY_ATTRIBUTES sa; 
    sa.nLength = sizeof(W::SECURITY_ATTRIBUTES); 
    sa.bInheritHandle = TRUE; // pipe handles are inherited
    sa.lpSecurityDescriptor = NULL; 

    // Create a pipe for the child process's STDOUT. 
    if ( ! W::CreatePipe(&g_hChildStd_OUT_Rd, &g_hChildStd_OUT_Wr, &sa, 0) ) {
		LOG_ERROR("Error creating Pipe for Yara");
        return matched_rules; // empty
    }

    // Ensure the read handle to the pipe for STDOUT is not inherited
    if ( ! W::SetHandleInformation(g_hChildStd_OUT_Rd, HANDLE_FLAG_INHERIT, 0) ){
		LOG_ERROR("Error creating Pipe for Yara");
        return matched_rules; // empty 
    }

	W::PROCESS_INFORMATION piResults = { 0 };
	bool yaraSuccess = launchYara(yara_exe_path,
								  yara_rules_path,
								  dump_to_analyse,
								  yara_res_file,
								  &piResults);
	if (yaraSuccess) {
		matched_rules = parseYaraOutput(ReadFromPipe(piResults));
		//LOG_INFO("Yara raw output result %s",raw_output.c_str()); // was: raw_output=ReadFromPipe(piResults);
	} else{
		LOG_ERROR("error launching Yara");
	}
	return matched_rules;
}


int YaraHeuristic::run(std::vector<std::string> paths_to_analyse){
	std::vector<std::string> global_matched_rules;

	for (std::vector<std::string>::iterator dump_to_analyse = paths_to_analyse.begin(); dump_to_analyse != paths_to_analyse.end(); ++dump_to_analyse){
		std::vector<std::string> cur_matched_rules = analyseYara(*dump_to_analyse);
		global_matched_rules.insert(global_matched_rules.end(), cur_matched_rules.begin(), cur_matched_rules.end());
	}
	
	bool result = !global_matched_rules.empty();

	//Saving the information to the report
	/* TODO: as of now Pin would need an ad-hoc internal exception handler */
	//try{
	ReportDump& report_dump = Report::getInstance()->getCurrentDump();
	ReportObject* yara_heur = new ReportYaraRules(result, global_matched_rules);
	report_dump.addHeuristic(yara_heur);
	//}
	//catch (const std::out_of_range& ){
	//	LOG_ERROR("Problem creating ReportYaraRules report");
	//}

	// DCD replaced return 0
	if (result) {
		return OepFinder::FOUND_OEP;
	}
	else {
		return OepFinder::HEURISTIC_FAIL;
	}
}


BOOL YaraHeuristic::launchYara(std::string yara_path, std::string yara_rules_path,
							   std::string yara_input_path, std::string yara_output,
							   W::PROCESS_INFORMATION *piResults){
	//string YaraLauncherBat = Config::getInstance()->getBasePath() + YARA_LAUNCHER;

	//Running external idaPython script // TODO ????
	
	W::STARTUPINFO si = { 0 };
	si.hStdOutput = g_hChildStd_OUT_Wr;
    si.dwFlags |= STARTF_USESTDHANDLES;
	si.cb=sizeof(si);
	
	//NB Avoid spaces inside the path or it will break!
	std::string yara_arguments = yara_path  + " " +         // path to yara executable
								 yara_rules_path + " " +	// path to yara rules
								 yara_input_path;			// path to yara input file

	// Create a file batch which run the IdaPython script and execute it
	/*FILE *YaraLauncherFile = fopen(YaraLauncherBat.c_str(),"w");
	fwrite(YaraLauncher.c_str(),strlen(YaraLauncher.c_str()),1,YaraLauncherFile);
	fclose(YaraLauncherFile);*/

	LOG_INFO("Launching Yara executable %s command line %s ",yara_path.c_str(),yara_arguments.c_str());

	W::BOOL result = W::CreateProcess(yara_path.c_str(),
									  (char *)yara_arguments.c_str(), // TODO
									  NULL, NULL, // no lpProcessAttributes, lpThreadAttributes
									  TRUE, // bInheritHandles
									  CREATE_NEW_CONSOLE,
									  NULL, NULL, // no lpEnvironment, lpCurrentDirectory
									  &si, piResults);

	if (!result) {
		LOG_ERROR("Can't launch Yara Error %d",W::GetLastError());
		return false;
	}

	//Timeout 30 sec for the YARA processing
	W::WaitForSingleObject(piResults->hProcess,30000);
	W::CloseHandle(piResults->hProcess);
	W::CloseHandle(piResults->hThread);
    W::CloseHandle(g_hChildStd_OUT_Wr);

	LOG_INFO("Yara Finished");
	return true;
}

