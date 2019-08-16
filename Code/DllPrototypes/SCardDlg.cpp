#include "../Pyrebox_libcalls.h"

libcall_info_t SCardDlg_info[] = {
	{ "SCardDlgExtendedError",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "SCardUIDlgSelectCardW",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, 0, NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "OPENCARDNAME_EXW", 576, IN },
	}
	},
	{ "GetOpenCardNameA",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, 0, NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "OPENCARDNAMEA", 736, IN },
	}
	},
	{ "GetOpenCardNameW",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, 0, NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "OPENCARDNAMEW", 736, IN },
	}
	},
	{ "SCardUIDlgSelectCardA",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, 0, NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "OPENCARDNAME_EXA", 576, IN },
	}
	},
};

int SCardDlgarraySize = (sizeof(SCardDlg_info) / sizeof(SCardDlg_info[0]));