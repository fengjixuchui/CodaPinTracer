#include "../Pyrebox_libcalls.h"

libcall_info_t SensAPI_info[] = {
	{ "IsDestinationReachableW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lpszDestination", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "lpQOCInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagQOCINFO", 128, IN },
	}
	},
	{ "IsDestinationReachableA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lpszDestination", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "lpQOCInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagQOCINFO", 128, IN },
	}
	},
	{ "IsNetworkAlive",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lpdwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
};

int SensAPIarraySize = (sizeof(SensAPI_info) / sizeof(SensAPI_info[0]));