#include "../Pyrebox_libcalls.h"

libcall_info_t mfplay_info[] = {
	{ "DllRegisterServer",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "MFPCreateMediaPlayer",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pwszURL", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "fStartPlayback", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "creationOptions", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pCallback", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IMFPMediaPlayerCallback", 32, IN },
		{4, "hWnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "ppMediaPlayer", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IMFPMediaPlayer", 32, INOUT },
	}
	},
	{ "DllGetClassObject",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "rclsid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{1, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{2, "ppv", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
	}
	},
	{ "DllCanUnloadNow",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "DllUnregisterServer",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
	}
	},
};

int mfplayarraySize = (sizeof(mfplay_info) / sizeof(mfplay_info[0]));