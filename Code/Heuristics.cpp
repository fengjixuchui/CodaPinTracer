#include "Heuristics.h"

int Heuristics::longJmpHeuristic(INS ins, ADDRINT prev_ip){
	LongJumpHeuristic heu = LongJumpHeuristic();
	return heu.run(ins, prev_ip);
}

int Heuristics::entropyHeuristic(){
	EntropyHeuristic heu = EntropyHeuristic();
	return heu.run();
}

int Heuristics::jmpOuterSectionHeuristic(INS ins, ADDRINT prev_ip){
	JumpOuterSection heu = JumpOuterSection();
	return heu.run(ins, prev_ip);
}

int Heuristics::pushadPopadHeuristic(){
	PushadPopadheuristic heu = PushadPopadheuristic();
	return heu.run();
}

int Heuristics::yaraHeuristic(vector<string> dumps_to_analyse){
 	YaraHeuristic heu = YaraHeuristic();
 	return heu.run(dumps_to_analyse);
 
} 