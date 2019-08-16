#include "../Pyrebox_libcalls.h"

libcall_info_t slwga_info[] = {
	{ "SLIsGenuineLocal",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pAppId", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{1, "pGenuineState", NKT_DBOBJCLASS_Enumeration | NKT_DBOBJCLASS_Pointer, "_SL_GENUINE_STATE", 32, INOUT },
		{2, "pUIOptions", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_tagSL_NONGENUINE_UI_OPTIONS", 96, INOUT },
	}
	},
};

int slwgaarraySize = (sizeof(slwga_info) / sizeof(slwga_info[0]));