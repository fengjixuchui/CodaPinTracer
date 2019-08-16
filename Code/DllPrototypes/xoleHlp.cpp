#include "../Pyrebox_libcalls.h"

libcall_info_t xoleHlp_info[] = {
	{ "DtcGetTransactionManagerExA",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "i_pszHost", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "i_pszTmName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "i_riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{3, "i_grfOptions", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "i_pvConfigParams", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{5, "o_ppvObject", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
	}
	},
	{ "DtcGetTransactionManagerExW",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "i_pwszHost", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "i_pwszTmName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "i_riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{3, "i_grfOptions", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "i_pvConfigParams", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{5, "o_ppvObject", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
	}
	},
	{ "GetDtcLocaleResourceHandle",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "DtcGetTransactionManagerC",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "i_pszHost", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "i_pszTmName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "i_riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{3, "i_dwReserved1", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "i_wcbReserved2", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{5, "i_pvReserved2", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{6, "o_ppvObject", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
	}
	},
	{ "DtcGetTransactionManager",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "i_pszHost", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "i_pszTmName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "i_riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{3, "i_dwReserved1", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "i_wcbReserved2", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{5, "i_pvReserved2", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{6, "o_ppvObject", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
	}
	},
};

int xoleHlparraySize = (sizeof(xoleHlp_info) / sizeof(xoleHlp_info[0]));