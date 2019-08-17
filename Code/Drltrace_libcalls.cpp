#include "Drltrace_libcalls.h"
#include "Config.h"

//Hashmap of function names to vector arguments
static std::hash_map<string, std::vector<drsys_arg_t *>> mapOfArgs;

//Deallocate structs in map of args
void Drltrace_libcalls::clearMapOfArgs() {

	//Iterate over map pairs
	for (std::hash_map<string, std::vector<drsys_arg_t *>>::iterator iter = mapOfArgs.begin(); iter != mapOfArgs.end(); ++iter)
	{

		//Iterate over vector, freeing entries
		for (std::vector<drsys_arg_t *>::iterator iter_v = (iter->second).begin(); iter_v != (iter->second).end(); ++iter_v)
		{
			free(*(iter_v));
		}
		vector<drsys_arg_t *>().swap(iter->second); //Force memory deallocation

	}
	mapOfArgs.clear();

}

//Find Routine in map of args
bool Drltrace_libcalls::findRtn(const char* rtn_name, hash_map<string, std::vector<drsys_arg_t *>>::iterator &it) {

	it = mapOfArgs.find(string(rtn_name));
	if (it != mapOfArgs.end()) {
		return true;
	}
	else return false;
	
}

//----------PARSE CONFIG FILE FUNCTIONS----------------//

static std::string
erase_token(std::string src_string, std::string pattern)
{
	std::string::size_type i = src_string.find(pattern);
	while (i != std::string::npos) {
		src_string.erase(i, pattern.length());
		i = src_string.find(pattern, i);
	}
	return src_string;
}

/*
*The function returns a new drsys_arg_t object allocated on the global heap
* that the caller should free.
*/
static drsys_arg_t *
config_parse_type(std::string type_name, int index)
{

	ASSERT(!type_name.empty(), "an empty type name was provided");

	//drsys_arg_t *arg = (drsys_arg_t *)global_alloc(sizeof(drsys_arg_t), HEAPSTAT_MISC);
	drsys_arg_t *arg = (drsys_arg_t *)malloc(sizeof(drsys_arg_t));

	/* init arg */
	arg->type = DRSYS_TYPE_UNKNOWN;
	arg->ordinal = index;
	arg->size = 0;
	arg->arg_name = NULL;
	arg->type_name = NULL;
	arg->pre = true;

	if (type_name.find("__inout") != std::string::npos)
		arg->flags = (drsys_param_mode_t)(DRSYS_PARAM_IN | DRSYS_PARAM_OUT);
	else if (type_name.find("__out") != std::string::npos)
		arg->flags = DRSYS_PARAM_OUT;
	else if (type_name.find("*") != std::string::npos)
		arg->flags = DRSYS_PARAM_IN;
	else
		arg->flags = DRSYS_PARAM_INLINED;

	/* we don't need special symbols __inout, __out or * further */
	type_name = erase_token(type_name, "*");
	type_name = erase_token(type_name, "__inout");
	type_name = erase_token(type_name, "__out");

	/* sanitize input type, we assume ASCII chars here */
	std::transform(type_name.begin(), type_name.end(), type_name.begin(), ::toupper);
	type_name.erase(std::remove(type_name.begin(), type_name.end(), ' '),
		type_name.end());
	type_name.erase(std::remove(type_name.begin(), type_name.end(), '\r'),
		type_name.end());
	type_name.erase(std::remove(type_name.begin(), type_name.end(), '\n'),
		type_name.end());

	/* FIXME i#1948: Currently, we have only few cross-platform libcalls in the config
	* file which is possible to use both for Windows and Linux. However, we
	* need to separate them into two configs and fix CMAKE accordingly.
	* Moreover, we have to provide two different interfaces for type parsing
	* in Windows and Linux.
	*/

	/* XXX i#1948: We have to extend a list of supported types here. */
	if (type_name.compare("VOID") == 0) {
		arg->type_name = "void";
		arg->type = DRSYS_TYPE_VOID;
	}
	else if (type_name.compare("INT") == 0) {
		arg->type_name = "int";
		arg->size = sizeof(int);
		arg->type = DRSYS_TYPE_SIGNED_INT;
	}
	else if (type_name.compare("LONG") == 0) {
		arg->type_name = "long";
		arg->size = sizeof(long);
		arg->type = DRSYS_TYPE_SIGNED_INT;
	}
	else if (type_name.compare("SIZE_T") == 0) {
		arg->type_name = "size_t";
		arg->size = sizeof(size_t);
		arg->type = DRSYS_TYPE_SIZE_T;
	}
	else if (type_name.compare("HANDLE") == 0) {
		arg->type_name = "HANDLE";
		arg->size = sizeof(W::HANDLE);
		arg->type = DRSYS_TYPE_HANDLE;
	}
	else if (type_name.compare("HFILE") == 0) {
		arg->type_name = "HFILE";
		arg->size = sizeof(W::HFILE);
		arg->type = DRSYS_TYPE_HFILE;
	}
	else if (type_name.compare("HMODULE") == 0) {
		arg->type_name = "HMODULE";
		arg->size = sizeof(W::HFILE);
		arg->type = DRSYS_TYPE_HMODULE;
	}
	else if (type_name.compare("UINT") == 0) {
		arg->type_name = "uint";
		arg->size = sizeof(UINT);
		arg->type = DRSYS_TYPE_UNSIGNED_INT;
	}
	else if (type_name.compare("DWORD") == 0) {
		arg->type_name = "DWORD";
		arg->size = sizeof(W::DWORD);
		arg->type = DRSYS_TYPE_UNSIGNED_INT;
	}
	else if (type_name.compare("WORD") == 0) {
		arg->type_name = "WORD";
		arg->size = sizeof(W::WORD);
		arg->type = DRSYS_TYPE_UNSIGNED_INT;
	}
	else if (type_name.compare("BYTE") == 0) {
		arg->type_name = "BYTE";
		arg->size = sizeof(W::BYTE);
		arg->type = DRSYS_TYPE_UNSIGNED_INT;
	}
	else if (type_name.compare("BOOL") == 0) {
		arg->type_name = "BOOL";
		arg->size = sizeof(BOOL);
		arg->type = DRSYS_TYPE_BOOL;
	}
	else if (type_name.compare("LCID") == 0) {
		arg->type_name = "LCID";
		arg->size = sizeof(W::LCID);
		arg->type = DRSYS_TYPE_LCID;
	}
	else if (type_name.compare("LPARAM") == 0) {
		arg->type_name = "LPARAM";
		arg->size = sizeof(W::LPARAM);
		arg->type = DRSYS_TYPE_LPARAM;
	}
	else if (type_name.compare("CHAR") == 0) {
		arg->type_name = "char";
		arg->type = DRSYS_TYPE_CSTRING;
	}
	else if (type_name.compare("WCHAR") == 0) {
		arg->type_name = "wchar_t";
		arg->type = DRSYS_TYPE_CWSTRING;
	}
	else {
		arg->type_name = "<unknown>";
		LOG("Found unknown type in configuration file\n");
	}

	return arg;
}

//Populates list of args in line based on token and returns count
static int
split(const char *buf, const char delim, std::vector<std::string> *tokens_list)
{
	int count = 0;
	std::stringstream ss;
	std::string item;

	ss.str(buf);
	while (std::getline(ss, item, delim)) {
		tokens_list->push_back(item);
		count++;
	}
	return count;
}

//Parses each line singularly
static bool
parse_line(const char *line, int line_num)
{
	std::vector<std::string> tokens;
	drsys_arg_t *tmp_arg;
	const char *func_name = NULL;
	int elem_index = 0, tokens_count = 0;

	if (line == NULL)
		return false;

	if (line[0] == '#') /* just a comment */
		return true;

	if (strlen(line) <= 0 || line[0] == '\n' || line[0] == '\r')
		return true; /* just an empty line */

	tokens_count = split(line, '|', &tokens);

	if (tokens_count <= 0) {
		//LOG(0, "unable to parse config file at line %d: %s" NL, line_num, line);
		LOG("Unable to parse config line\n");
		return false;
	}

	std::vector<drsys_arg_t *> *args_vector = new std::vector<drsys_arg_t *>();
	std::vector<std::string>::iterator it;
	for (it = tokens.begin(); it != tokens.end(); ++it) {

		//Return value
		if (elem_index == 0) {
			tmp_arg = config_parse_type(*it, -1);
			args_vector->push_back(tmp_arg);
		}
		else if (elem_index >= 2) {
			tmp_arg = config_parse_type(*it, elem_index - 2);
			args_vector->push_back(tmp_arg);
		}
		else if (elem_index == 1)
			func_name = it->c_str();

		elem_index++;
	}

	if (func_name == NULL || args_vector->size() <= 0) {
		//LOG(0, "unable to parse config file at line %d: %s" NL, line_num, line);
		LOG("Unable to parse config line\n");
		return false;
	}


	//libcalls_hashtable_insert(strdup(func_name), args_vector);
	mapOfArgs.insert(std::make_pair(strdup(func_name), *args_vector));

	return true;
}


void
Drltrace_libcalls::parse_config()
{
	//Get configuration file from Config
	const char* confFile = Config::getInstance()->getDrltraceConfigFile();

	std::ifstream ConfigFile;
	int lines_count = 0, line_num = 1;
	std::vector<std::string> lines_list;

	//Open configuration file
	ConfigFile.open(confFile, std::ifstream::in);
	if (ConfigFile.fail()) {
		LOG("Error in opening configuration file\n");
		return;
	}

	//Place line by line in vector of strings until EOF
	std::string line;
	while (std::getline(ConfigFile, line))
	{
		lines_list.push_back(line);
	}

	//Close configuration file
	ConfigFile.close();

	lines_count = lines_list.size();
	if (lines_count <= 0) {
		LOG("An empty configuration file was specified\n");
		return;
	}


	std::vector<std::string>::iterator it;
	for (it = lines_list.begin(); it != lines_list.end(); it++) {
	

		if (!parse_line(it->c_str(), line_num)) {

			LOG("Incorrect line format in configuration file\n");

			Drltrace_libcalls::clearMapOfArgs();

			break;
		}
		line_num++;
	}
}

//---------ARGUMENTS PRINTING-------------//

//Check if pointer can be read without access violation
//https://stackoverflow.com/questions/496034/most-efficient-replacement-for-isbadreadptr
static bool IsBadReadPtr(void* p)
{
	W::MEMORY_BASIC_INFORMATION mbi = { 0 };
	if (W::VirtualQuery(p, &mbi, sizeof(mbi)))
	{
		W::DWORD mask = (PAGE_READONLY | PAGE_READWRITE | PAGE_WRITECOPY | PAGE_EXECUTE_READ | PAGE_EXECUTE_READWRITE | PAGE_EXECUTE_WRITECOPY);
		bool b = !(mbi.Protect & mask);
		// check the page is not a guard page
		if (mbi.Protect & (PAGE_GUARD | PAGE_NOACCESS)) b = true;

		return b;
	}
	return true;
}

//Print String
//-> Crap printed because some functions MAY not use a null terminated string (e.g. MultibyteToWideChar)
//-> Would need to check other args to determined whether string is null terminated or not
static void
print_string(void *pointer_str, bool is_wide, bluepill_tls* tdata)
{

	//Init variables for bad memory check
	ADDRINT deref = 0;
	int charSize = 0;
	if (is_wide) {
		charSize = sizeof(wchar_t);
	}
	else charSize = sizeof(char);

	if (pointer_str == NULL)
		(tdata->file_write)(tdata->threadid, tdata->buffer, tdata->OutFile, "<null>");
	else {
		if (IsBadReadPtr(pointer_str) || (PIN_SafeCopy(&deref, pointer_str, charSize) < charSize)) {
			(tdata->file_write)(tdata->threadid, tdata->buffer, tdata->OutFile, "<invalid memory>");
		}
		else (tdata->file_write)(tdata->threadid, tdata->buffer, tdata->OutFile, is_wide ? "%ls" : "%s", pointer_str);
	}
}



//Print values of simple types
static void print_simple_value(drsys_arg_t* curr_arg, bool leading_zeroes, bluepill_tls* tdata)
{

	ADDRINT truncValue = curr_arg->value;
	//OutFile << "arg " << arg_info.param << " : " << arg_value << endl;

	//If pointer is true we have a pointer, otherwise SYSARG_INLINED, i.e. a non memory argument, the entire value is in memory slot
	bool pointer = !TEST(DRSYS_PARAM_INLINED, curr_arg->flags);

	if (pointer || leading_zeroes) {

		(tdata->file_write)(tdata->threadid, tdata->buffer, tdata->OutFile, PFX, truncValue);
	}
	else {

		(tdata->file_write)(tdata->threadid, tdata->buffer, tdata->OutFile, PIFX, truncValue);
	}

	//If pointer and input parameter, read value
	if (pointer && ((curr_arg->pre && TEST(DRSYS_PARAM_IN, curr_arg->flags)) || (!curr_arg->pre && TEST(DRSYS_PARAM_OUT, curr_arg->flags)))) {

		ADDRINT deref = 0;

		if (curr_arg->size > sizeof(deref)) {
			LOG("too-big simple type\n");
			return;
		}

		//PIN_SafeCopy returns number of bytes read
		//Note that if we have a pointer to void, we don't know how large the actual pointed region is
		if (PIN_SafeCopy(&deref, (void *)curr_arg->value, curr_arg->size) > 0) {
			(tdata->file_write)(tdata->threadid, tdata->buffer, tdata->OutFile, (leading_zeroes ? " => 0x%08x" : " => 0x%x"), deref);
		}

	}

}


//Generic print args function similar to the one in drsyscall
void
Drltrace_libcalls::print_arg_drltrace(drsys_arg_t *arg, bluepill_tls* tdata, uint api_count)
{
	if (arg->pre && (TEST(DRSYS_PARAM_OUT, arg->flags) && !TEST(DRSYS_PARAM_IN, arg->flags)))
		return;

	//Differentiate return value here
	if (arg->ordinal == -1)
		(tdata->file_write)(tdata->threadid, tdata->buffer, tdata->OutFile, "%u \tretval: ", api_count);
	else
		(tdata->file_write)(tdata->threadid, tdata->buffer, tdata->OutFile, "%u \targ %d: ", api_count, arg->ordinal);

	switch (arg->type) {
	case DRSYS_TYPE_VOID:         print_simple_value(arg, true, tdata); break;
	case DRSYS_TYPE_POINTER:      print_simple_value(arg, true, tdata); break;
	case DRSYS_TYPE_BOOL:         print_simple_value(arg, false, tdata); break;
	case DRSYS_TYPE_INT:          print_simple_value(arg, false, tdata); break;
	case DRSYS_TYPE_SIGNED_INT:   print_simple_value(arg, false, tdata); break;
	case DRSYS_TYPE_UNSIGNED_INT: print_simple_value(arg, false, tdata); break;
	case DRSYS_TYPE_HANDLE:       print_simple_value(arg, false, tdata); break;
	case DRSYS_TYPE_NTSTATUS:     print_simple_value(arg, false, tdata); break;
	case DRSYS_TYPE_ATOM:         print_simple_value(arg, false, tdata); break;
	case DRSYS_TYPE_LCID:         print_simple_value(arg, false, tdata); break;
	case DRSYS_TYPE_LPARAM:       print_simple_value(arg, false, tdata); break;
	case DRSYS_TYPE_SIZE_T:       print_simple_value(arg, false, tdata); break;
	case DRSYS_TYPE_HMODULE:      print_simple_value(arg, false, tdata); break;
	case DRSYS_TYPE_CSTRING:	  print_string((void *)arg->value, false, tdata); break;
	case DRSYS_TYPE_CWSTRING:	  print_string((void *)arg->value, true, tdata); break;
	default: {
		if (arg->value == 0)
			(tdata->file_write)(tdata->threadid, tdata->buffer, tdata->OutFile, "<null>");
		else
			(tdata->file_write)(tdata->threadid, tdata->buffer, tdata->OutFile, PFX, arg->value);
	}
	}


	(tdata->file_write)(tdata->threadid, tdata->buffer, tdata->OutFile, " (%s%s%stype=%s%s, size=" PIFX ")\n",
		(arg->arg_name == NULL) ? "" : "name=",
		(arg->arg_name == NULL) ? "" : arg->arg_name,
		(arg->arg_name == NULL) ? "" : ", ",
		(arg->type_name == NULL) ? "\"\"" : arg->type_name,
		(arg->type_name == NULL ||
			TEST(DRSYS_PARAM_INLINED, arg->flags)) ? "" : "*",
		arg->size);
}


//Fills exeApi with args info and prints them
void Drltrace_libcalls::print_args_known_drltrace(bluepill_tls* tdata, ADDRINT* args, apicall_t *exeApi, std::vector<drsys_arg_t *> args_info) {

	//i=1 because at 0 we have ret value
	for (int i = 1; i < args_info.size(); i++) {

		//Check if max args limit is not surpassed
		if (i == MAX_ARGS_CONFIG) break;

		//Info set when parsing config file
		(exeApi->arguments[i - 1]).type = args_info[i]->type;
		(exeApi->arguments[i - 1]).type_name = args_info[i]->type_name;
		(exeApi->arguments[i - 1]).ordinal = args_info[i]->ordinal;
		(exeApi->arguments[i - 1]).size = args_info[i]->size;
		(exeApi->arguments[i - 1]).arg_name = args_info[i]->arg_name;
		(exeApi->arguments[i - 1]).pre = args_info[i]->pre;
		(exeApi->arguments[i - 1]).flags = args_info[i]->flags;

		//Set value
		(exeApi->arguments[i - 1]).value = args[i - 1];

	}
	exeApi->count = args_info.size() - 1; //Subtraction because of return value

										  //Fill retval info without value obviously
	(exeApi->retval).type = args_info[0]->type;
	(exeApi->retval).type_name = args_info[0]->type_name;
	(exeApi->retval).ordinal = args_info[0]->ordinal;		//-1
	(exeApi->retval).size = args_info[0]->size;
	(exeApi->retval).arg_name = args_info[0]->arg_name;
	(exeApi->retval).pre = args_info[0]->pre;
	(exeApi->retval).flags = args_info[0]->flags;

	//--Print args using prototype--
	for (int i = 0; i < exeApi->count; i++) {

		drsys_arg_t curr_arg = (exeApi->arguments)[i];
		Drltrace_libcalls::print_arg_drltrace(&curr_arg, tdata, tdata->call_number);

	}


}