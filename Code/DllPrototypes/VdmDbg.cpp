#include "../Pyrebox_libcalls.h"

libcall_info_t VdmDbg_info[] = {
	{ "VDMGetDbgFlags",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "VDMKillWOW",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "VDMTerminateTaskWOW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "dwProcessId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "htask", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
	}
	},
	{ "VDMGetContext",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hThread", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lpVDMContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CONTEXT", 5728, IN },
	}
	},
	{ "VDMDetectWOW",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "VDMEnumTaskWOWEx",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "dwProcessId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "fp", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{2, "lparam", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "VDMStartTaskInWOW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "dwProcessId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpCommandLine", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "wShow", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
	}
	},
	{ "VDMSetContext",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hThread", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lpVDMContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CONTEXT", 5728, IN },
	}
	},
	{ "VDMGetPointer",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hThread", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "wSelector", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{3, "dwOffset", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "fProtMode", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "VDMGlobalNext",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hThread", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lpGlobalEntry", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GLOBALENTRY", 352, IN },
		{3, "wFlags", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{4, "lpEventProc", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{5, "lpData", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "VDMGetAddrExpression",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "szModule", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "szSymbol", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "Selector", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "Offset", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{4, "Type", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "VDMGetSegmentInfo",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Selector", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{1, "Offset", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "bProtectMode", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "pSegInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_VDM_SEGINFO", 2208, IN },
	}
	},
	{ "VDMModuleFirst",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hThread", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lpModuleEntry", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "MODULEENTRY", 2240, IN },
		{3, "lpEventProc", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{4, "lpData", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "VDMEnumTaskWOW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "dwProcessId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "fp", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{2, "lparam", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "VDMGetThreadSelectorEntry",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hThread", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "wSelector", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{3, "lpSelectorEntry", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_LDT_ENTRY", 64, IN },
	}
	},
	{ "VDMBreakThread",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hThread", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "VDMGlobalFirst",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hThread", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lpGlobalEntry", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "GLOBALENTRY", 352, IN },
		{3, "wFlags", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{4, "lpEventProc", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{5, "lpData", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "VDMGetSymbol",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "szModule", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "SegNumber", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{2, "Offset", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "bProtectMode", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "bNextSymbol", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{5, "szSymbolName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{6, "pDisplacement", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "VDMGetModuleSelector",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hThread", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "wSegmentNumber", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "lpModuleName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{4, "lpSelector", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "VDMGetSelectorModule",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hThread", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "wSelector", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{3, "lpSegmentNumber", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{4, "lpModuleName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{5, "nNameSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "lpModulePath", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{7, "nPathSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "VDMModuleNext",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hThread", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lpModuleEntry", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "MODULEENTRY", 2240, IN },
		{3, "lpEventProc", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{4, "lpData", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "VDMIsModuleLoaded",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "szPath", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "VDMProcessException",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lpDebugEvent", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DEBUG_EVENT", 768, IN },
	}
	},
	{ "VDMSetDbgFlags",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hProcess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "VDMEnumProcessWOW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "fp", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{1, "lparam", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
};

int VdmDbgarraySize = (sizeof(VdmDbg_info) / sizeof(VdmDbg_info[0]));