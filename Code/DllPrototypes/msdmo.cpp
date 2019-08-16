#include "../Pyrebox_libcalls.h"

libcall_info_t msdmo_info[] = {
	{ "DMOGetTypes",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "clsidDMO", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{1, "ulInputTypesRequested", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pulInputTypesSupplied", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{3, "pInputTypes", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DMO_PARTIAL_MEDIATYPE", 256, IN },
		{4, "ulOutputTypesRequested", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "pulOutputTypesSupplied", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{6, "pOutputTypes", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DMO_PARTIAL_MEDIATYPE", 256, IN },
	}
	},
	{ "MoInitMediaType",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pmt", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_AMMediaType", 576, IN },
		{1, "cbFormat", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DMOUnregister",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "clsidDMO", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{1, "guidCategory", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
	}
	},
	{ "MoDeleteMediaType",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pmt", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_AMMediaType", 576, IN },
	}
	},
	{ "MoCreateMediaType",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ppmt", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_AMMediaType", 576, IN },
		{1, "cbFormat", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DMOGetName",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "clsidDMO", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{1, "szName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "MoFreeMediaType",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pmt", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_AMMediaType", 576, IN },
	}
	},
	{ "MoCopyMediaType",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pmtDest", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_AMMediaType", 576, IN },
		{1, "pmtSrc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_AMMediaType", 576, IN },
	}
	},
	{ "MoDuplicateMediaType",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ppmtDest", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_AMMediaType", 576, IN },
		{1, "pmtSrc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_AMMediaType", 576, IN },
	}
	},
	{ "DMORegister",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "szName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "clsidDMO", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{2, "guidCategory", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{3, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "cInTypes", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "pInTypes", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DMO_PARTIAL_MEDIATYPE", 256, IN },
		{6, "cOutTypes", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{7, "pOutTypes", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DMO_PARTIAL_MEDIATYPE", 256, IN },
	}
	},
	{ "DMOEnum",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "guidCategory", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{1, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "cInTypes", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pInTypes", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DMO_PARTIAL_MEDIATYPE", 256, IN },
		{4, "cOutTypes", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "pOutTypes", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DMO_PARTIAL_MEDIATYPE", 256, IN },
		{6, "ppEnum", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IEnumDMO", 32, IN },
	}
	},
};

int msdmoarraySize = (sizeof(msdmo_info) / sizeof(msdmo_info[0]));