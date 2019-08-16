#pragma once
#include "pin.H"
#include "Debug.h"
#include "Config.h"
#include "OepFinder.h"
#include "LongJumpHeuristic.h"
#include "EntropyHeuristic.h"
#include "JumpOuterSectionHeuristic.h"
#include "WxorXHandler.h"
#include "PushadPopadHeuristic.h"
#include "YaraHeuristic.h"


//static class where you have to define all the methods that o some kind of heuristic
class Heuristics
{
public:
	static int longJmpHeuristic(INS ins, ADDRINT prev_ip);
	static int entropyHeuristic();
	static int jmpOuterSectionHeuristic(INS ins, ADDRINT prev_ip);
	static int pushadPopadHeuristic();
	static int yaraHeuristic(std::vector<std::string> dumps_to_analyse);

};


