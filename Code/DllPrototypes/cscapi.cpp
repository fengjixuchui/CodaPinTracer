#include "../Pyrebox_libcalls.h"

libcall_info_t cscapi_info[] = {
	{ "OfflineFilesQueryStatus",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "pbActive", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{1, "pbEnabled", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "OfflineFilesEnable",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "bEnable", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{1, "pbRebootRequired", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
};

int cscapiarraySize = (sizeof(cscapi_info) / sizeof(cscapi_info[0]));