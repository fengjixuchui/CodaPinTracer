#pragma once
#include "pin.H"
#include "ReportDump.h"
#include "json.h"

class Report
{
private:
	Report(void);
	static Report *instance;
	bool initialized;				// keep track if the report has already been initialized
	std::string report_path;		// path of the report file
	ReportObject *info;				// Object containing general info abount the current analysed executable 
	std::vector<ReportDump> dumps;
	Json::Value report;				// json object representing current report
	void writeJsonToReport(Json::Value report);	


public:
	static  Report* getInstance();
	void initializeReport(std::string process_name, ADDRINT startAddr, ADDRINT endAddr, float initial_entropy);
	void createReportDump(ADDRINT eip,ADDRINT start_addr, ADDRINT end_addr, int dump_number, bool intra_writeset, int pid);
	ReportDump& getCurrentDump();
	void closeReportDump();
	void closeReport();
};

