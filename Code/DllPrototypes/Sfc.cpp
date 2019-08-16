#include "../Pyrebox_libcalls.h"

libcall_info_t Sfc_info[] = {
	{ "SfpVerifyFile",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pszFileName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "pszError", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "dwErrSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SfcIsFileProtected",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "RpcHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "ProtFileName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
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
	{ "SfcGetNextProtectedFile",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "RpcHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "ProtFileData", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_PROTECTED_FILE_DATA", 4192, INOUT },
	}
	},
	{ "SfcIsKeyProtected",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "KeyHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "SubKeyName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "KeySam", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
};

int SfcarraySize = (sizeof(Sfc_info) / sizeof(Sfc_info[0]));