#include "../Pyrebox_libcalls.h"

libcall_info_t ComDlg32_info[] = {
	{ "GetFileTitleA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedWord, 0, 2, INOUT },
		{0, 0, NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "Buf", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "cchSize", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
	}
	},
	{ "GetFileTitleW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedWord, 0, 2, INOUT },
		{0, 0, NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "Buf", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "cchSize", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
	}
	},
	{ "GetOpenFileNameW",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, 0, NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagOFNW", 704, IN },
	}
	},
	{ "ChooseFontA",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, 0, NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagCHOOSEFONTA", 480, IN },
	}
	},
	{ "ChooseFontW",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, 0, NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagCHOOSEFONTW", 480, IN },
	}
	},
	{ "CommDlgExtendedError",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "PrintDlgA",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pPD", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPDA", 528, IN },
	}
	},
	{ "PrintDlgW",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pPD", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPDW", 528, IN },
	}
	},
	{ "ReplaceTextW",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, 0, NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagFINDREPLACEW", 320, IN },
	}
	},
	{ "ReplaceTextA",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, 0, NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagFINDREPLACEA", 320, IN },
	}
	},
	{ "PageSetupDlgA",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, 0, NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPSDA", 672, IN },
	}
	},
	{ "PageSetupDlgW",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, 0, NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPSDW", 672, IN },
	}
	},
	{ "PrintDlgExA",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pPD", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPDEXA", 672, IN },
	}
	},
	{ "PrintDlgExW",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pPD", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPDEXW", 672, IN },
	}
	},
	{ "ChooseColorA",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, 0, NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagCHOOSECOLORA", 288, IN },
	}
	},
	{ "ChooseColorW",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, 0, NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagCHOOSECOLORW", 288, IN },
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
	{ "GetOpenFileNameA",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, 0, NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagOFNA", 704, IN },
	}
	},
	{ "GetSaveFileNameA",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, 0, NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagOFNA", 704, IN },
	}
	},
	{ "GetSaveFileNameW",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, 0, NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagOFNW", 704, IN },
	}
	},
	{ "DllCanUnloadNow",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "FindTextA",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, 0, NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagFINDREPLACEA", 320, IN },
	}
	},
	{ "FindTextW",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, 0, NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagFINDREPLACEW", 320, IN },
	}
	},
};

int ComDlg32arraySize = (sizeof(ComDlg32_info) / sizeof(ComDlg32_info[0]));