#include "../Pyrebox_libcalls.h"

libcall_info_t DSProp_info[] = {
	{ "ADsPropSetHwnd",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hNotifyObj", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hPage", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DllRegisterServer",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "ADsPropSendErrorMessage",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hNotifyObj", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pError", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ADSPROPERROR", 192, INOUT },
	}
	},
	{ "ADsPropCheckIfWritable",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pwzAttr", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "pWritableAttrs", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ads_attr_info", 160, IN },
	}
	},
	{ "ADsPropCreateNotifyObj",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pAppThdDataObj", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IDataObject", 32, IN },
		{1, "pwzADsObjName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "phNotifyObj", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "ADsPropShowErrorDialog",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hNotifyObj", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hPage", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ADsPropGetInitInfo",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hNotifyObj", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pInitParams", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ADSPROPINITPARAMS", 192, INOUT },
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
	{ "ADsPropSetHwndWithTitle",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hNotifyObj", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hPage", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "ptzTitle", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
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

int DSProparraySize = (sizeof(DSProp_info) / sizeof(DSProp_info[0]));