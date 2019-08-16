#include "ReportYaraRules.h"
#include <iterator>


ReportYaraRules::ReportYaraRules(void)
{
}

ReportYaraRules::ReportYaraRules(bool result, vector<string> matched_rules){
	this->name = "YaraRulesHeuristic";
	this->result = result;
	this->matched_rules = matched_rules;
}

Json::Value ReportYaraRules::toJson(){
	root["name"] = name;
	root["result"] = result;
	root["matched_rules"] = Json::Value(Json::arrayValue);
	for(auto rule = matched_rules.begin(); rule != matched_rules.end(); ++rule){
		root["matched_rules"].append(*rule);
	}
	
	return root;
}
