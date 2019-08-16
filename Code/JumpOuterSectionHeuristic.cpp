#include "JumpOuterSectionHeuristic.h"
#include "ReportJumpOuterSection.h"

int JumpOuterSection::run(INS ins, ADDRINT prev_ip){
	bool result= false;
	if (prev_ip > 0) {
		ProcInfo *proc_info = ProcInfo::getInstance();
		//get the current IP
		ADDRINT ip = INS_Address(ins);
		//get the name of the current section and teh previos section
		string sec_current = proc_info->getSectionNameByIp(ip);
		string sec_prev = proc_info->getSectionNameByIp(prev_ip);
		//if they are different then i have detected a jmp outer section
		if (sec_current.compare(sec_prev) && !sec_current.empty() && !sec_prev.empty()){
			result = true;
			LOG_WARNING("[JMP OUTER SECTION DETECTED!!] FROM : %s	TO : %s", sec_current.c_str(), sec_prev.c_str());
		}
		/* TODO: as of now Pin would need an ad-hoc internal exception handler */
		//try{
		ReportDump& report_dump = Report::getInstance()->getCurrentDump();
		ReportObject* long_jmp_heur = new ReportJumpOuterSection(result, sec_prev,sec_current);
		report_dump.addHeuristic(long_jmp_heur);
		//}
		//catch (const std::out_of_range& ){
		//	LOG_ERROR("Problem creating ReportJumpOuterSection report");
		//}	
	}
	if(result == true){
		return OepFinder::FOUND_OEP;
	}else{
		return OepFinder::HEURISTIC_FAIL;
	}
	
	
}