#pragma once
#include "pin.H"
#include "types.h"

namespace W {
	#include "windows.h"
	#include "winternl.h" // for W::PCUNICODE_STRING
}

class SpecialHooks {
public:
	static void initHooks();
	static void setSyscallHooks();
	static void setFunctionHooks(IMG img);

	static void enableCustomFunctionHook(int customHookID);
	static void disableCustomFunctionHook(int customHookID);

	static const char* solveCustomHookID(int customHookID);

private:
	static bool activeFunctionHooks[MAX_HOOK_FUNCTIONS_INDEX]; // let's do it for taint now
	static void printPairLPCSTRPtr(int customHookID, W::LPCTSTR *s1, W::LPCTSTR *s2);
	static void printPairCharPtrPtr(int customHookID, char **s1, char **s2);
	static void printPairWCharPtrPtr(int customHookID, wchar_t **s1, wchar_t **s2);
	static void printPairPCUNICODE_STRINGPtr(int customHookID, W::PCUNICODE_STRING *s1, W::PCUNICODE_STRING *s2);
		
};