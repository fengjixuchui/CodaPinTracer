#include "../Pyrebox_libcalls.h"

libcall_info_t SrClient_info[] = {
	{ "SRRemoveRestorePoint",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "dwRPNum", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SRSetRestorePointA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pRestorePtSpec", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RESTOREPTINFOA", 640, IN },
		{1, "pSMgrStatus", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SMGRSTATUS", 96, INOUT },
	}
	},
	{ "SRSetRestorePointW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pRestorePtSpec", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RESTOREPTINFOW", 4224, IN },
		{1, "pSMgrStatus", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SMGRSTATUS", 96, INOUT },
	}
	},
	{ "SRSetRestorePointInternal",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pRestorePtSpec", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RESTOREPTINFOW", 4224, IN },
		{1, "pSMgrStatus", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SMGRSTATUS", 96, IN },
		{2, "fForceSurrogate", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
};

int SrClientarraySize = (sizeof(SrClient_info) / sizeof(SrClient_info[0]));