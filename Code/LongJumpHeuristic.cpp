#include "LongJumpHeuristic.h"
#include "porting.h"

//specify the range of the jump when it is considered a long jump or not
#define JMP_THRESHOLD	0x200

int LongJumpHeuristic::run(INS ins, ADDRINT prev_ip){
	bool result = false;
	//filter out the improper values 
	if (prev_ip > 0) {	
		// get the current IP
		ADDRINT ip = INS_Address(ins);
		
		// difference between prev_ip and current ip (the target of the jmp instruction)
		ADDRINT diff = ABS_ADDR_DIFF(prev_ip, ip);

		// compare diff against JMP_THRESHOLD
		if (diff > JMP_THRESHOLD) {
			result = true;
			LOG_WARNING("[LONG JMP DETECTED!!] FROM : %08x	TO : %08x", prev_ip, ip);
		}

		//add heuristic result to report
		LOG_INFO("Adding Long Jump Heuristic to report");
		/* TODO: as of now Pin would need an ad-hoc internal exception handler */
		//try{
		ReportDump& report_dump = Report::getInstance()->getCurrentDump();
		ReportObject* long_jmp_heur = new ReportLongJump(result,prev_ip, diff);
		report_dump.addHeuristic(long_jmp_heur);
		//}catch (const std::out_of_range&){
		//	LOG_ERROR("Problem creating ReportLongJump report");
		//}		
	}

	if (result) {
		return OepFinder::FOUND_OEP;
	} else {
		return OepFinder::HEURISTIC_FAIL;
	}

}
