#include "../Pyrebox_libcalls.h"

libcall_info_t Icmui_info[] = {
	{ "SetupColorMatchingA",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pcms", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_tagCOLORMATCHSETUPA", 608, IN },
	}
	},
	{ "SetupColorMatchingW",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pcms", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_tagCOLORMATCHSETUPW", 608, IN },
	}
	},
};

int IcmuiarraySize = (sizeof(Icmui_info) / sizeof(Icmui_info[0]));