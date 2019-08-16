#pragma once
#include <map>
#include <iostream>
#include "pin.H"
#include "ExceptionHandler.h"
#include "ProcInfo.h"


class GuardPageHandler {

public:
	static GuardPageHandler *getInstance();
	static void GuardPageHandler::guardPageCheck(CONTEXT *ctx, THREADID tid, ADDRINT reg);
	void addGuardPage(ADDRINT start, ADDRINT end);
	void removeGuardPage(ADDRINT start);
	bool isPagePresent(ADDRINT start);

	std::map<ADDRINT, ADDRINT> guardMemory;

private:
	static GuardPageHandler *instance;

};