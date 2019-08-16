#include "SpecialHooks.h"
#include "Logging.h"
#include "Config.h"
#include "TaintAnalysis.h"
#include "Helper.h"

bool SpecialHooks::activeFunctionHooks[MAX_HOOK_FUNCTIONS_INDEX];

static std::map<string, int> myFunctionMap;

void SpecialHooks::initHooks() {
	myFunctionMap.insert(std::pair<string, int>("RtlCompareUnicodeString", RTLSTR_INDEX));
	myFunctionMap.insert(std::pair<string, int>("RtlEqualUnicodeString", RTLSTR_INDEX));

	myFunctionMap.insert(std::pair<string, int>("wcsstr", WCSSTR_INDEX));
	myFunctionMap.insert(std::pair<string, int>("wcscmp", WCSCMP_INDEX));
	myFunctionMap.insert(std::pair<string, int>("wcsncmp", WCSCMP_INDEX));
	myFunctionMap.insert(std::pair<string, int>("_wcsnicmp", WCSCMP_INDEX));

	myFunctionMap.insert(std::pair<string, int>("strstr", STRSTR_INDEX));
	myFunctionMap.insert(std::pair<string, int>("strcmp", STRCMP_INDEX));
	myFunctionMap.insert(std::pair<string, int>("_strcmpi", STRCMP_INDEX));

	myFunctionMap.insert(std::pair<string, int>("CompareString", CMPSTR_INDEX));
	myFunctionMap.insert(std::pair<string, int>("CompareStringA", CMPSTR_INDEX));
	myFunctionMap.insert(std::pair<string, int>("CompareStringW", CMPSTR_INDEX));
	myFunctionMap.insert(std::pair<string, int>("CompareStringEx", CMPSTR_INDEX));
	myFunctionMap.insert(std::pair<string, int>("CompareStringExA", CMPSTR_INDEX));
	myFunctionMap.insert(std::pair<string, int>("CompareStringExW", CMPSTR_INDEX));
}

void SpecialHooks::setFunctionHooks(IMG img) {
	for (std::map<string, int>::iterator it = myFunctionMap.begin(), end = myFunctionMap.end(); it != end; ++it) {
		const char * func_name = it->first.c_str();
		RTN rtn = RTN_FindByName(img, func_name); // get pointer to the function

		if (rtn != RTN_Invalid()) {
			int index = it->second;
			ADDRINT va_address = RTN_Address(rtn);
			RTN_Open(rtn);

			switch (index) {
			case(CMPSTR_INDEX):
				RTN_InsertCall(rtn, IPOINT_BEFORE, (AFUNPTR)printPairLPCSTRPtr,
						IARG_UINT32, index,
						IARG_FUNCARG_ENTRYPOINT_REFERENCE, 2,
						IARG_FUNCARG_ENTRYPOINT_REFERENCE, 4,
						IARG_END);
				break;
			case(RTLSTR_INDEX):
				RTN_InsertCall(rtn, IPOINT_BEFORE, (AFUNPTR)printPairPCUNICODE_STRINGPtr,
						IARG_UINT32, index,
						IARG_FUNCARG_ENTRYPOINT_REFERENCE, 0,
						IARG_FUNCARG_ENTRYPOINT_REFERENCE, 1,
						IARG_END);
				break;
			case(WCSSTR_INDEX):
			case(WCSCMP_INDEX):
				RTN_InsertCall(rtn, IPOINT_BEFORE, (AFUNPTR)printPairWCharPtrPtr,
						IARG_UINT32, index,
						IARG_FUNCARG_ENTRYPOINT_REFERENCE, 0,
						IARG_FUNCARG_ENTRYPOINT_REFERENCE, 1,
						IARG_END);
				break;
			case(STRSTR_INDEX):
			case(STRCMP_INDEX):
				RTN_InsertCall(rtn, IPOINT_BEFORE, (AFUNPTR)printPairCharPtrPtr,
						IARG_UINT32, index,
						IARG_FUNCARG_ENTRYPOINT_REFERENCE, 0,
						IARG_FUNCARG_ENTRYPOINT_REFERENCE, 1, IARG_END);
				break;
			}

			RTN_Close(rtn);
		}
	}

}

void SpecialHooks::enableCustomFunctionHook(int customHookID) {
	activeFunctionHooks[customHookID] = true;
}

void SpecialHooks::disableCustomFunctionHook(int customHookID) {
	activeFunctionHooks[customHookID] = false;
}

const char* SpecialHooks::solveCustomHookID(int customHookID) {
	switch (customHookID) {
	case CMPSTR_INDEX:
		return "CompareString";
	case RTLSTR_INDEX:
		return "RTL*UnicodeString";
	case WCSSTR_INDEX:
		return "wcsstr";
	case WCSCMP_INDEX:
		return "wccmp*";
	case STRSTR_INDEX:
		return "strstr";
	case STRCMP_INDEX:
		return "strcmp*";
	default:
		return "UNKNOWN FUNCTION";
	}
}

void SpecialHooks::printPairLPCSTRPtr(int customHookID, W::LPCTSTR *s1, W::LPCTSTR *s2) {
	if (!activeFunctionHooks[customHookID]) return;
	ASSERT(Config::getInstance()->TAINT_MODE, "Hook being set while not in taint mode");

	tag_t tag1 = 0, tag2 = 0;
	if (s1 != NULL) getMemoryTaints((ADDRINT)*s1, &tag1, 1); // TODO for now it's okay
	if (s2 != NULL) getMemoryTaints((ADDRINT)*s2, &tag2, 1);

	if (tag1 || tag2) {
		const char* funName = solveCustomHookID(customHookID);
		if (strlen(*s1) == 1 || strlen(*s2) == 1) {
			//std::cerr << "[Tainted call] " << funName << " (arguments too short)" << std::endl;
			return;
		}
		std::cerr << "[Tainted call] " << funName << std::endl;
		std::cerr << "arg1: ";
		if (s1 == NULL) std::cerr << "NULL" << std::endl;
		else std::cerr << *s1 << std::endl;
		std::cerr << "arg2: ";
		if (s2 == NULL) std::cerr << "NULL" << std::endl;
		else std::cerr << *s2 << std::endl;
	}
}

void SpecialHooks::printPairCharPtrPtr(int customHookID, char **s1, char **s2) {
	if (!activeFunctionHooks[customHookID]) return;
	ASSERT(Config::getInstance()->TAINT_MODE, "Hook being set while not in taint mode");

	tag_t tag1 = 0, tag2 = 0;
	getMemoryTaints((ADDRINT)*s1, &tag1, 1); // TODO for now it's okay
	getMemoryTaints((ADDRINT)*s2, &tag2, 1);

	if (tag1 || tag2) {
		const char* funName = solveCustomHookID(customHookID);
		std::cerr << "[Tainted call] " << funName << std::endl;
		std::cerr << "arg1: " << *s1 << std::endl;
		std::cerr << "arg2: " << *s2 << std::endl;
	}
}

void SpecialHooks::printPairWCharPtrPtr(int customHookID, wchar_t **s1, wchar_t **s2) {
	if (!activeFunctionHooks[customHookID]) return;
	ASSERT(Config::getInstance()->TAINT_MODE, "Hook being set while not in taint mode");

	tag_t tag1 = 0, tag2 = 0;
	getMemoryTaints((ADDRINT)*s1, &tag1, 1); // TODO for now it's okay
	getMemoryTaints((ADDRINT)*s2, &tag2, 1);

	if (tag1 || tag2) {
		const char* funName = solveCustomHookID(customHookID);
		char value[PATH_BUFSIZE];
		GET_TO_UPPER(*s1, value, PATH_BUFSIZE);
		std::cerr << "[Tainted call] " << funName << std::endl;
		std::cerr << "arg1: " << value << std::endl;
		memset(value, 0, sizeof(value));
		GET_TO_UPPER(*s2, value, PATH_BUFSIZE);
		std::cerr << "arg2: " << value << std::endl;
	}
}

void SpecialHooks::printPairPCUNICODE_STRINGPtr(int customHookID, W::PCUNICODE_STRING *s1, W::PCUNICODE_STRING *s2) {
	if (!activeFunctionHooks[customHookID]) return;
	ASSERT(Config::getInstance()->TAINT_MODE, "Hook being set while not in taint mode");

	tag_t tag1 = 0, tag2 = 0;
	getMemoryTaints((ADDRINT)((**s1).Buffer), &tag1, 1); // TODO for now it's okay
	getMemoryTaints((ADDRINT)((**s2).Buffer), &tag2, 1);

	if (tag1 || tag2) {
		const char* funName = solveCustomHookID(customHookID);
		char value[PATH_BUFSIZE];
		GET_TO_UPPER((**s1).Buffer, value, PATH_BUFSIZE);
		std::cerr << "[Tainted call] " << funName << std::endl;
		std::cerr << "arg1: " << value << std::endl;
		memset(value, 0, sizeof(value));
		GET_TO_UPPER((**s2).Buffer, value, PATH_BUFSIZE);
		std::cerr << "arg2: " << value << std::endl;
	}
}
