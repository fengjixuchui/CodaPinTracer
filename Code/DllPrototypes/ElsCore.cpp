#include "../Pyrebox_libcalls.h"

libcall_info_t ElsCore_info[] = {
	{ "MappingDoAction",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pBag", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MAPPING_PROPERTY_BAG", 256, INOUT },
		{1, "dwRangeIndex", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pszActionId", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "MappingGetServices",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pOptions", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MAPPING_ENUM_OPTIONS", 320, IN },
		{1, "prgServices", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_MAPPING_SERVICE_INFO", 832, INOUT },
		{2, "pdwServicesCount", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "MappingRecognizeText",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pServiceInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MAPPING_SERVICE_INFO", 832, IN },
		{1, "pszText", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "dwLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "dwIndex", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "pOptions", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MAPPING_OPTIONS", 512, IN },
		{5, "pbag", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MAPPING_PROPERTY_BAG", 256, INOUT },
	}
	},
	{ "MappingFreeServices",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pServiceInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MAPPING_SERVICE_INFO", 832, IN },
	}
	},
	{ "MappingFreePropertyBag",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pBag", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MAPPING_PROPERTY_BAG", 256, IN },
	}
	},
};

int ElsCorearraySize = (sizeof(ElsCore_info) / sizeof(ElsCore_info[0]));