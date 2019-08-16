#include "../Pyrebox_libcalls.h"

libcall_info_t dpx_info[] = {
	{ "DpxFreeMemory",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "Allocation", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "DpxNewJob",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "TargetPath", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "ppJob", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IDpxJob", 32, IN },
	}
	},
	{ "DpxRestoreJob",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "TargetPath", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "ppJob", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IDpxJob", 32, IN },
	}
	},
};

int dpxarraySize = (sizeof(dpx_info) / sizeof(dpx_info[0]));