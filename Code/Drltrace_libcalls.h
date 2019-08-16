#pragma once
#include <iostream>
#include <hash_map>
#include "tls.h"

class Drltrace_libcalls {

public:
	static void parse_config();
	static bool findRtn(const char* rtn_name, hash_map<string, std::vector<drsys_arg_t *>>::iterator &it);

	static void print_arg_drltrace(drsys_arg_t *arg, bluepill_tls* tdata, uint api_count);
	static void print_args_known_drltrace(bluepill_tls* tdata, ADDRINT* args, apicall_t *exeApi, std::vector<drsys_arg_t *> args_info);

	static void clearMapOfArgs();

};