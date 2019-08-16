#pragma once

#include <map>
#include <string>
#include "pin.H"

namespace W{
	#include "windows.h"
}

class PatternMatchModule
{
public:
	PatternMatchModule();
	bool patchDispatcher(INS ins,  ADDRINT curEip);

private:
	//std::map<string, AFUNPTR> patchesMap;
	std::map<string, int> indexMap;
	AFUNPTR curPatchPointer;
	int index;

	enum {
		INT2_INDEX,
		FSAVE_INDEX,
		RDTSC_INDEX,
		CPUID_INDEX,
		INT2D_INDEX
	} PATCH_INDEX;
};

