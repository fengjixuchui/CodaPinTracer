#include "../Pyrebox_libcalls.h"

libcall_info_t Iprop_info[] = {
	{ "FreePropVariantArray",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "cVariants", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "rgvars", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPROPVARIANT", 128, IN },
	}
	},
	{ "StgOpenPropStg",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pUnk", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 32, IN },
		{1, "fmtid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{2, "grfFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "dwReserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "ppPropStg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IPropertyStorage", 32, IN },
	}
	},
	{ "FmtIdToPropStgName",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pfmtid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{1, "oszName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "PropVariantClear",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pvar", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPROPVARIANT", 128, IN },
	}
	},
	{ "PropStgNameToFmtId",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "oszName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "pfmtid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
	}
	},
	{ "PropVariantCopy",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pvarDest", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPROPVARIANT", 128, IN },
		{1, "pvarSrc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPROPVARIANT", 128, IN },
	}
	},
	{ "StgCreatePropSetStg",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pStorage", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IStorage", 32, IN },
		{1, "dwReserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "ppPropSetStg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IPropertySetStorage", 32, IN },
	}
	},
	{ "StgCreatePropStg",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pUnk", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 32, IN },
		{1, "fmtid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{2, "pclsid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{3, "grfFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "dwReserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "ppPropStg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IPropertyStorage", 32, IN },
	}
	},
};

int IproparraySize = (sizeof(Iprop_info) / sizeof(Iprop_info[0]));