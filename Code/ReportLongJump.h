#pragma once
#include "ReportObject.h"

class ReportLongJump : public ReportObject
{

private:
	string name;
	bool result;
	ADDRINT prev_ip;
	ADDRINT length;
public:
	ReportLongJump(void);
	ReportLongJump(bool res, ADDRINT prev_ip, ADDRINT len);
	Json::Value toJson();
	
};

