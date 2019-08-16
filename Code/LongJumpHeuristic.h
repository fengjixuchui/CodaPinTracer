#pragma once
#include "Heuristics.h"
#include "Report.h"
#include "ReportLongJump.h"


class LongJumpHeuristic
{
public:
	int run(INS ins, ADDRINT prev_ip);
};
