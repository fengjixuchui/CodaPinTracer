#include "PushadPopadHeuristic.h"

int PushadPopadheuristic::run(){
	//filter out the improper values 
	ProcInfo *proc_info = ProcInfo::getInstance();
	//if both the flag are valid our heuristic is valid 
	if (proc_info->getPopadFlag() && proc_info->getPushadFlag()) {
			LOG_WARNING("[PUSHAD POPAD DETECTED !!]");
			return OepFinder::FOUND_OEP;
	}
	return OepFinder::HEURISTIC_FAIL;
}
