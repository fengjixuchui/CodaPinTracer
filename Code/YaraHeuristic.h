#pragma once
#include "Heuristics.h"
#include "ReportYaraRules.h"
#include "Helper.h"
namespace W{
#include "windows.h"
}

//size of the buffer used for communitating with the yara process
#define PIPE_BUFSIZE 4096

class YaraHeuristic
{
public:
	int run(std::vector<std::string> paths_to_analyse);

private:
	W::HANDLE g_hChildStd_OUT_Rd;
	W::HANDLE g_hChildStd_OUT_Wr;
	std::string ReadFromPipe(W::PROCESS_INFORMATION piProcInfo);
	BOOL launchYara(std::string yara_path,
					std::string yara_rules_path,
					std::string yara_input_path,
					std::string yara_output,
					W::PROCESS_INFORMATION *piResults);
	//UINT32 getFileSize(FILE *fp);
	std::vector<std::string> parseYaraOutput(std::string output);  
	std::vector<std::string> analyseYara(std::string dump_to_analyse);

};
