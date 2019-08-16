#include "../Pyrebox_libcalls.h"

libcall_info_t OleAut32_info[] = {
	{ "SafeArrayDestroyDescriptor",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "psa", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSAFEARRAY", 192, IN },
	}
	},
	{ "VarMod",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pvarLeft", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 128, IN },
		{1, "pvarRight", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 128, IN },
		{2, "pvarResult", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 128, IN },
	}
	},
	{ "VarMul",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pvarLeft", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 128, IN },
		{1, "pvarRight", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 128, IN },
		{2, "pvarResult", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 128, IN },
	}
	},
	{ "VarI8FromUI1",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "bIn", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, IN },
		{1, "pi64Out", NKT_DBFUNDTYPE_SignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, IN },
	}
	},
	{ "VarI8FromUI2",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "uiIn", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{1, "pi64Out", NKT_DBFUNDTYPE_SignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, IN },
	}
	},
	{ "VarI8FromUI4",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ulIn", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pi64Out", NKT_DBFUNDTYPE_SignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, IN },
	}
	},
	{ "VarI8FromUI8",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ui64In", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "pi64Out", NKT_DBFUNDTYPE_SignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, IN },
	}
	},
	{ "SysReAllocString",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pbstr", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, IN },
		{1, "psz", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "VarNeg",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pvarIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 128, IN },
		{1, "pvarResult", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 128, IN },
	}
	},
	{ "VarNot",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pvarIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 128, IN },
		{1, "pvarResult", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 128, IN },
	}
	},
	{ "SafeArrayDestroy",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "psa", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSAFEARRAY", 192, IN },
	}
	},
	{ "VarCyCmpR8",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "cyLeft", NKT_DBOBJCLASS_Union, "tagCY", 64, IN },
		{1, "dblRight", NKT_DBFUNDTYPE_Double, 0, 8, IN },
	}
	},
	{ "VarI4FromStr",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "strIn", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "lcid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "plOut", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "VarDecFromR8",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "dblIn", NKT_DBFUNDTYPE_Double, 0, 8, IN },
		{1, "pdecOut", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagDEC", 128, IN },
	}
	},
	{ "VarPow",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pvarLeft", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 128, IN },
		{1, "pvarRight", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 128, IN },
		{2, "pvarResult", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 128, IN },
	}
	},
	{ "VarI2FromStr",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "strIn", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "lcid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "psOut", NKT_DBFUNDTYPE_SignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "VarI4FromUI1",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "bIn", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, IN },
		{1, "plOut", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "VarI4FromUI2",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "uiIn", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{1, "plOut", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "VarI4FromUI4",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ulIn", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "plOut", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "VarI4FromUI8",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ui64In", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "plOut", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "GetRecordInfoFromTypeInfo",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pTypeInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ITypeInfo", 32, IN },
		{1, "ppRecInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IRecordInfo", 32, IN },
	}
	},
	{ "OleTranslateColor",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "clr", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hpal", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lpcolorref", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "VarI1FromStr",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "strIn", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "lcid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pcOut", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "VarI2FromUI1",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "bIn", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, IN },
		{1, "psOut", NKT_DBFUNDTYPE_SignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "VarI2FromUI2",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "uiIn", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{1, "psOut", NKT_DBFUNDTYPE_SignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "VarI2FromUI4",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ulIn", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "psOut", NKT_DBFUNDTYPE_SignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "VarI2FromBool",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "boolIn", NKT_DBFUNDTYPE_SignedWord, 0, 2, IN },
		{1, "psOut", NKT_DBFUNDTYPE_SignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "GetAltMonthNames",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lcid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "prgp", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer | NKT_DBOBJCLASS_Pointer | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "VarI1FromUI1",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "bIn", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, IN },
		{1, "pcOut", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "VarI1FromUI2",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "uiIn", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{1, "pcOut", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "VarI1FromUI8",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "i64In", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "pcOut", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "VarBstrFromI8",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "i64In", NKT_DBFUNDTYPE_SignedQuadWord, 0, 8, IN },
		{1, "lcid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pbstrOut", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, IN },
	}
	},
	{ "VarUI1FromBool",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "boolIn", NKT_DBFUNDTYPE_SignedWord, 0, 2, IN },
		{1, "pbOut", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "VarSub",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pvarLeft", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 128, IN },
		{1, "pvarRight", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 128, IN },
		{2, "pvarResult", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 128, IN },
	}
	},
	{ "DispCallFunc",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pvInstance", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "oVft", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "cc", NKT_DBOBJCLASS_Enumeration, "tagCALLCONV", 32, IN },
		{3, "vtReturn", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{4, "cActuals", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "prgvt", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{6, "prgpvarg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "tagVARIANT", 128, IN },
		{7, "pvargResult", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 128, IN },
	}
	},
	{ "VarUI8FromStr",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "strIn", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "lcid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pi64Out", NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, IN },
	}
	},
	{ "VarCyAdd",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "cyLeft", NKT_DBOBJCLASS_Union, "tagCY", 64, IN },
		{1, "cyRight", NKT_DBOBJCLASS_Union, "tagCY", 64, IN },
		{2, "pcyResult", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "tagCY", 64, IN },
	}
	},
	{ "UnRegisterTypeLibForUser",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "libID", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{1, "wMajorVerNum", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{2, "wMinorVerNum", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{3, "lcid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "syskind", NKT_DBOBJCLASS_Enumeration, "tagSYSKIND", 32, IN },
	}
	},
	{ "VarCyNeg",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "cyIn", NKT_DBOBJCLASS_Union, "tagCY", 64, IN },
		{1, "pcyResult", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "tagCY", 64, IN },
	}
	},
	{ "VarBstrFromR8",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "dblIn", NKT_DBFUNDTYPE_Double, 0, 8, IN },
		{1, "lcid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pbstrOut", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, IN },
	}
	},
	{ "VarUI1FromI4",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lIn", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{1, "pbOut", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "VarI2FromDate",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "dateIn", NKT_DBFUNDTYPE_Double, 0, 8, IN },
		{1, "psOut", NKT_DBFUNDTYPE_SignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "VarOr",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pvarLeft", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 128, IN },
		{1, "pvarRight", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 128, IN },
		{2, "pvarResult", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 128, IN },
	}
	},
	{ "SafeArrayCreateEx",4,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSAFEARRAY", 192, INOUT },
		{0, "vt", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{1, "cDims", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "rgsabound", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSAFEARRAYBOUND", 64, IN },
		{3, "pvExtra", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "VarUI1FromDate",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "dateIn", NKT_DBFUNDTYPE_Double, 0, 8, IN },
		{1, "pbOut", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "VarXor",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pvarLeft", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 128, IN },
		{1, "pvarRight", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 128, IN },
		{2, "pvarResult", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 128, IN },
	}
	},
	{ "VarR8Pow",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "dblLeft", NKT_DBFUNDTYPE_Double, 0, 8, IN },
		{1, "dblRight", NKT_DBFUNDTYPE_Double, 0, 8, IN },
		{2, "pdblResult", NKT_DBFUNDTYPE_Double | NKT_DBOBJCLASS_Pointer, 0, 8, IN },
	}
	},
	{ "VarR4CmpR8",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "fltLeft", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{1, "dblRight", NKT_DBFUNDTYPE_Double, 0, 8, IN },
	}
	},
	{ "SafeArrayCreateVectorEx",4,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSAFEARRAY", 192, INOUT },
		{0, "vt", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{1, "lLbound", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "cElements", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pvExtra", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "LoadTypeLibEx",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "szFile", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "regkind", NKT_DBOBJCLASS_Enumeration, "tagREGKIND", 32, IN },
		{2, "pptlib", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ITypeLib", 32, IN },
	}
	},
	{ "DispGetIDsOfNames",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ptinfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ITypeInfo", 32, IN },
		{1, "rgszNames", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, IN },
		{2, "cNames", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "rgdispid", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "VARIANT_UserFree",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{1, 0, NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 128, IN },
	}
	},
	{ "VariantClear",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pvarg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 128, IN },
	}
	},
	{ "CreateDispTypeInfo",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pidata", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagINTERFACEDATA", 64, IN },
		{1, "lcid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pptinfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ITypeInfo", 32, IN },
	}
	},
	{ "VarFormatPercent",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pvarIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 128, IN },
		{1, "iNumDig", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "iIncLead", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "iUseParens", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "iGroup", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{5, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "pbstrOut", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, IN },
	}
	},
	{ "VarBoolFromStr",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "strIn", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "lcid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pboolOut", NKT_DBFUNDTYPE_SignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "VarI2FromDisp",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pdispIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IDispatch", 32, IN },
		{1, "lcid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "psOut", NKT_DBFUNDTYPE_SignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "VarFormatCurrency",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pvarIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 128, IN },
		{1, "iNumDig", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "iIncLead", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "iUseParens", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "iGroup", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{5, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "pbstrOut", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, IN },
	}
	},
	{ "VarBoolFromUI1",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "bIn", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, IN },
		{1, "pboolOut", NKT_DBFUNDTYPE_SignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "VarBoolFromUI2",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "uiIn", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{1, "pboolOut", NKT_DBFUNDTYPE_SignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "VarBoolFromUI8",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "i64In", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "pboolOut", NKT_DBFUNDTYPE_SignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "VarFormatNumber",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pvarIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 128, IN },
		{1, "iNumDig", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "iIncLead", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "iUseParens", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "iGroup", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{5, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "pbstrOut", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, IN },
	}
	},
	{ "VarUI1FromDisp",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pdispIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IDispatch", 32, IN },
		{1, "lcid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pbOut", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "SafeArraySetRecordInfo",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "psa", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSAFEARRAY", 192, IN },
		{1, "prinfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IRecordInfo", 32, IN },
	}
	},
	{ "VariantChangeType",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pvargDest", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 128, IN },
		{1, "pvarSrc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 128, IN },
		{2, "wFlags", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{3, "vt", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
	}
	},
	{ "SafeArrayGetElemsize",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "psa", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSAFEARRAY", 192, IN },
	}
	},
	{ "BSTR_UserMarshal",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{1, 0, NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, 0, NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, IN },
	}
	},
	{ "VarDecFromCy",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "cyIn", NKT_DBOBJCLASS_Union, "tagCY", 64, IN },
		{1, "pdecOut", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagDEC", 128, IN },
	}
	},
	{ "SafeArrayAllocData",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "psa", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSAFEARRAY", 192, IN },
	}
	},
	{ "VarDecFromI2",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "uiIn", NKT_DBFUNDTYPE_SignedWord, 0, 2, IN },
		{1, "pdecOut", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagDEC", 128, IN },
	}
	},
	{ "DllRegisterServer",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "VarBstrCat",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "bstrLeft", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "bstrRight", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "pbstrResult", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, IN },
	}
	},
	{ "VarBstrCmp",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "bstrLeft", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "bstrRight", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "lcid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "VarR8Round",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "dblIn", NKT_DBFUNDTYPE_Double, 0, 8, IN },
		{1, "cDecimals", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "pdblResult", NKT_DBFUNDTYPE_Double | NKT_DBOBJCLASS_Pointer, 0, 8, IN },
	}
	},
	{ "RegisterTypeLibForUser",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ptlib", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ITypeLib", 32, IN },
		{1, "szFullPath", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "szHelpDir", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "OaEnablePerUserTLibRegistration",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
	}
	},
	{ "VarCyFromI1",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "cIn", NKT_DBFUNDTYPE_AnsiChar, 0, 1, IN },
		{1, "pcyOut", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "tagCY", 64, IN },
	}
	},
	{ "VarCyFromI4",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lIn", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{1, "pcyOut", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "tagCY", 64, IN },
	}
	},
	{ "VarCyFromI8",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "i64In", NKT_DBFUNDTYPE_SignedQuadWord, 0, 8, IN },
		{1, "pcyOut", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "tagCY", 64, IN },
	}
	},
	{ "VarCyFromR8",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "dblIn", NKT_DBFUNDTYPE_Double, 0, 8, IN },
		{1, "pcyOut", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "tagCY", 64, IN },
	}
	},
	{ "VarDateFromBool",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "boolIn", NKT_DBFUNDTYPE_SignedWord, 0, 2, IN },
		{1, "pdateOut", NKT_DBFUNDTYPE_Double | NKT_DBOBJCLASS_Pointer, 0, 8, IN },
	}
	},
	{ "VarUI4FromBool",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "boolIn", NKT_DBFUNDTYPE_SignedWord, 0, 2, IN },
		{1, "pulOut", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "VarCyFromI2",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sIn", NKT_DBFUNDTYPE_SignedWord, 0, 2, IN },
		{1, "pcyOut", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "tagCY", 64, IN },
	}
	},
	{ "RegisterTypeLib",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ptlib", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ITypeLib", 32, IN },
		{1, "szFullPath", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "szHelpDir", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "BSTR_UserSize",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{1, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, 0, NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, IN },
	}
	},
	{ "VarDateFromR8",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "dblIn", NKT_DBFUNDTYPE_Double, 0, 8, IN },
		{1, "pdateOut", NKT_DBFUNDTYPE_Double | NKT_DBOBJCLASS_Pointer, 0, 8, IN },
	}
	},
	{ "VarBstrFromBool",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "boolIn", NKT_DBFUNDTYPE_SignedWord, 0, 2, IN },
		{1, "lcid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pbstrOut", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, IN },
	}
	},
	{ "VarI2FromR4",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "fltIn", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{1, "psOut", NKT_DBFUNDTYPE_SignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "VarI1FromDec",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pdecIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagDEC", 128, IN },
		{1, "pcOut", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "LoadTypeLib",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "szFile", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "pptlib", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ITypeLib", 32, IN },
	}
	},
	{ "BstrFromVector",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "psa", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSAFEARRAY", 192, IN },
		{1, "pbstr", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, IN },
	}
	},
	{ "VarWeekdayName",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "iWeekday", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{1, "fAbbrev", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "iFirstDay", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "pbstrOut", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, IN },
	}
	},
	{ "VarUI8FromUI2",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "uiIn", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{1, "pi64Out", NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, IN },
	}
	},
	{ "VarBstrFromDate",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "dateIn", NKT_DBFUNDTYPE_Double, 0, 8, IN },
		{1, "lcid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pbstrOut", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, IN },
	}
	},
	{ "VarDecAbs",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pdecIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagDEC", 128, IN },
		{1, "pdecResult", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagDEC", 128, IN },
	}
	},
	{ "VarDecAdd",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pdecLeft", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagDEC", 128, IN },
		{1, "pdecRight", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagDEC", 128, IN },
		{2, "pdecResult", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagDEC", 128, IN },
	}
	},
	{ "DispGetParam",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pdispparams", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagDISPPARAMS", 128, IN },
		{1, "position", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "vtTarg", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{3, "pvarResult", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 128, IN },
		{4, "puArgErr", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "VarI4FromBool",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "boolIn", NKT_DBFUNDTYPE_SignedWord, 0, 2, IN },
		{1, "plOut", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "SafeArrayCopy",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "psa", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSAFEARRAY", 192, IN },
		{1, "ppsaOut", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "tagSAFEARRAY", 192, IN },
	}
	},
	{ "DispInvoke",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "_this", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "ptinfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ITypeInfo", 32, IN },
		{2, "dispidMember", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "wFlags", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{4, "pparams", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagDISPPARAMS", 128, IN },
		{5, "pvarResult", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 128, IN },
		{6, "pexcepinfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagEXCEPINFO", 256, IN },
		{7, "puArgErr", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "SafeArrayGetLBound",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "psa", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSAFEARRAY", 192, IN },
		{1, "nDim", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "plLbound", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "VarDecCmp",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pdecLeft", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagDEC", 128, IN },
		{1, "pdecRight", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagDEC", 128, IN },
	}
	},
	{ "OleIconToCursor",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hinstExe", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hIcon", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "VarDateFromDisp",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pdispIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IDispatch", 32, IN },
		{1, "lcid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pdateOut", NKT_DBFUNDTYPE_Double | NKT_DBOBJCLASS_Pointer, 0, 8, IN },
	}
	},
	{ "VarCyInt",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "cyIn", NKT_DBOBJCLASS_Union, "tagCY", 64, IN },
		{1, "pcyResult", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "tagCY", 64, IN },
	}
	},
	{ "SafeArrayPtrOfIndex",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "psa", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSAFEARRAY", 192, IN },
		{1, "rgIndices", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{2, "ppvData", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
	}
	},
	{ "OleLoadPictureEx",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lpstream", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IStream", 32, IN },
		{1, "lSize", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "fRunmode", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{4, "xSizeDesired", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "ySizeDesired", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{7, "lplpvObj", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, INOUT },
	}
	},
	{ "VarUI2FromDec",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pdecIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagDEC", 128, IN },
		{1, "puiOut", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "VarR4FromBool",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "boolIn", NKT_DBFUNDTYPE_SignedWord, 0, 2, IN },
		{1, "pfltOut", NKT_DBFUNDTYPE_Float | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "VarDecDiv",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pdecLeft", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagDEC", 128, IN },
		{1, "pdecRight", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagDEC", 128, IN },
		{2, "pdecResult", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagDEC", 128, IN },
	}
	},
	{ "SafeArrayCreate",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSAFEARRAY", 192, INOUT },
		{0, "vt", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{1, "cDims", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "rgsabound", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSAFEARRAYBOUND", 64, IN },
	}
	},
	{ "VarBstrFromDisp",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pdispIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IDispatch", 32, IN },
		{1, "lcid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pbstrOut", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, IN },
	}
	},
	{ "VarDecInt",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pdecIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagDEC", 128, IN },
		{1, "pdecResult", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagDEC", 128, IN },
	}
	},
	{ "VarR8FromDisp",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pdispIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IDispatch", 32, IN },
		{1, "lcid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pdblOut", NKT_DBFUNDTYPE_Double | NKT_DBOBJCLASS_Pointer, 0, 8, IN },
	}
	},
	{ "OleLoadPicture",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lpstream", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IStream", 32, IN },
		{1, "lSize", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "fRunmode", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{4, "lplpvObj", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, INOUT },
	}
	},
	{ "VarR4FromDate",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "dateIn", NKT_DBFUNDTYPE_Double, 0, 8, IN },
		{1, "pfltOut", NKT_DBFUNDTYPE_Float | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "VarI2FromUI8",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ui64In", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "psOut", NKT_DBFUNDTYPE_SignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "SafeArrayAllocDescriptorEx",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "vt", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{1, "cDims", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "ppsaOut", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "tagSAFEARRAY", 192, IN },
	}
	},
	{ "VariantCopyInd",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pvarDest", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 128, IN },
		{1, "pvargSrc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 128, IN },
	}
	},
	{ "VarUI8FromBool",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "boolIn", NKT_DBFUNDTYPE_SignedWord, 0, 2, IN },
		{1, "pi64Out", NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, IN },
	}
	},
	{ "VarCyFromDisp",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pdispIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IDispatch", 32, IN },
		{1, "lcid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pcyOut", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "tagCY", 64, IN },
	}
	},
	{ "VarI4FromDisp",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pdispIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IDispatch", 32, IN },
		{1, "lcid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "plOut", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "VarDecMul",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pdecLeft", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagDEC", 128, IN },
		{1, "pdecRight", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagDEC", 128, IN },
		{2, "pdecResult", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagDEC", 128, IN },
	}
	},
	{ "SafeArrayGetVartype",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "psa", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSAFEARRAY", 192, IN },
		{1, "pvt", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "VarDecNeg",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pdecIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagDEC", 128, IN },
		{1, "pdecResult", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagDEC", 128, IN },
	}
	},
	{ "CreateTypeLib2",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "syskind", NKT_DBOBJCLASS_Enumeration, "tagSYSKIND", 32, IN },
		{1, "szFile", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "ppctlib", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ICreateTypeLib2", 32, IN },
	}
	},
	{ "VarDateFromDec",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pdecIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagDEC", 128, IN },
		{1, "pdateOut", NKT_DBFUNDTYPE_Double | NKT_DBOBJCLASS_Pointer, 0, 8, IN },
	}
	},
	{ "SafeArrayGetRecordInfo",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "psa", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSAFEARRAY", 192, IN },
		{1, "prinfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IRecordInfo", 32, IN },
	}
	},
	{ "VarR4FromCy",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "cyIn", NKT_DBOBJCLASS_Union, "tagCY", 64, IN },
		{1, "pfltOut", NKT_DBFUNDTYPE_Float | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "VarI8FromBool",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "boolIn", NKT_DBFUNDTYPE_SignedWord, 0, 2, IN },
		{1, "pi64Out", NKT_DBFUNDTYPE_SignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, IN },
	}
	},
	{ "VarUI8FromDate",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "dateIn", NKT_DBFUNDTYPE_Double, 0, 8, IN },
		{1, "pi64Out", NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, IN },
	}
	},
	{ "OaBuildVersion",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "VarBstrFromDec",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pdecIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagDEC", 128, IN },
		{1, "lcid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pbstrOut", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, IN },
	}
	},
	{ "VarCyFromUI2",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "uiIn", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{1, "pcyOut", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "tagCY", 64, IN },
	}
	},
	{ "VarR8FromDec",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pdecIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagDEC", 128, IN },
		{1, "pdblOut", NKT_DBFUNDTYPE_Double | NKT_DBOBJCLASS_Pointer, 0, 8, IN },
	}
	},
	{ "SysStringByteLen",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "bstr", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "VarI1FromBool",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "boolIn", NKT_DBFUNDTYPE_SignedWord, 0, 2, IN },
		{1, "pcOut", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "SafeArrayRedim",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "psa", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSAFEARRAY", 192, IN },
		{1, "psaboundNew", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSAFEARRAYBOUND", 64, IN },
	}
	},
	{ "LHashValOfNameSys",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "syskind", NKT_DBOBJCLASS_Enumeration, "tagSYSKIND", 32, IN },
		{1, "lcid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "szName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "OleCreatePictureIndirect",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lpPictDesc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPICTDESC", 160, IN },
		{1, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{2, "fOwn", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "lplpvObj", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, INOUT },
	}
	},
	{ "VarR4FromDec",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pdecIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagDEC", 128, IN },
		{1, "pfltOut", NKT_DBFUNDTYPE_Float | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "SafeArrayLock",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "psa", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSAFEARRAY", 192, IN },
	}
	},
	{ "VariantInit",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "pvarg", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 128, IN },
	}
	},
	{ "VarCat",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pvarLeft", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 128, IN },
		{1, "pvarRight", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 128, IN },
		{2, "pvarResult", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 128, IN },
	}
	},
	{ "VarR8FromI1",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "cIn", NKT_DBFUNDTYPE_AnsiChar, 0, 1, IN },
		{1, "pdblOut", NKT_DBFUNDTYPE_Double | NKT_DBOBJCLASS_Pointer, 0, 8, IN },
	}
	},
	{ "VarUI1FromCy",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "cyIn", NKT_DBOBJCLASS_Union, "tagCY", 64, IN },
		{1, "pbOut", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "VarI1FromDate",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "dateIn", NKT_DBFUNDTYPE_Double, 0, 8, IN },
		{1, "pcOut", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "SysStringLen",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "pbstr", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "VarUI8FromDisp",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pdispIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IDispatch", 32, IN },
		{1, "lcid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pi64Out", NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, IN },
	}
	},
	{ "VarR8FromCy",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "cyIn", NKT_DBOBJCLASS_Union, "tagCY", 64, IN },
		{1, "pdblOut", NKT_DBFUNDTYPE_Double | NKT_DBOBJCLASS_Pointer, 0, 8, IN },
	}
	},
	{ "SysFreeString",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "bstrString", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "VarR8FromI2",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sIn", NKT_DBFUNDTYPE_SignedWord, 0, 2, IN },
		{1, "pdblOut", NKT_DBFUNDTYPE_Double | NKT_DBOBJCLASS_Pointer, 0, 8, IN },
	}
	},
	{ "VarR8FromI4",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lIn", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{1, "pdblOut", NKT_DBFUNDTYPE_Double | NKT_DBOBJCLASS_Pointer, 0, 8, IN },
	}
	},
	{ "VarR8FromI8",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "i64In", NKT_DBFUNDTYPE_SignedQuadWord, 0, 8, IN },
		{1, "pdblOut", NKT_DBFUNDTYPE_Double | NKT_DBOBJCLASS_Pointer, 0, 8, IN },
	}
	},
	{ "CreateStdDispatch",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "punkOuter", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 32, IN },
		{1, "pvThis", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "ptinfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ITypeInfo", 32, IN },
		{3, "ppunkStdDisp", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IUnknown", 32, IN },
	}
	},
	{ "QueryPathOfRegTypeLib",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "guid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{1, "wMaj", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{2, "wMin", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{3, "lcid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "lpbstrPathName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, IN },
	}
	},
	{ "VarR8FromR4",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "fltIn", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{1, "pdblOut", NKT_DBFUNDTYPE_Double | NKT_DBOBJCLASS_Pointer, 0, 8, IN },
	}
	},
	{ "VarI4FromDate",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "dateIn", NKT_DBFUNDTYPE_Double, 0, 8, IN },
		{1, "plOut", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "VarBoolFromCy",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "cyIn", NKT_DBOBJCLASS_Union, "tagCY", 64, IN },
		{1, "pboolOut", NKT_DBFUNDTYPE_SignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "VarBoolFromI1",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "cIn", NKT_DBFUNDTYPE_AnsiChar, 0, 1, IN },
		{1, "pboolOut", NKT_DBFUNDTYPE_SignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "VarBoolFromI2",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sIn", NKT_DBFUNDTYPE_SignedWord, 0, 2, IN },
		{1, "pboolOut", NKT_DBFUNDTYPE_SignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "VarBoolFromI8",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "i64In", NKT_DBFUNDTYPE_SignedQuadWord, 0, 8, IN },
		{1, "pboolOut", NKT_DBFUNDTYPE_SignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "VarBoolFromR4",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "fltIn", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{1, "pboolOut", NKT_DBFUNDTYPE_SignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "VarBoolFromR8",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "dblIn", NKT_DBFUNDTYPE_Double, 0, 8, IN },
		{1, "pboolOut", NKT_DBFUNDTYPE_SignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "VarUI8FromDec",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pdecIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagDEC", 128, IN },
		{1, "pi64Out", NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, IN },
	}
	},
	{ "VarI2FromCy",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "cyIn", NKT_DBOBJCLASS_Union, "tagCY", 64, IN },
		{1, "psOut", NKT_DBFUNDTYPE_SignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "VarI2FromI1",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "cIn", NKT_DBFUNDTYPE_AnsiChar, 0, 1, IN },
		{1, "psOut", NKT_DBFUNDTYPE_SignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "VarI2FromI4",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lIn", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{1, "psOut", NKT_DBFUNDTYPE_SignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "VarI2FromI8",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "i64In", NKT_DBFUNDTYPE_SignedQuadWord, 0, 8, IN },
		{1, "psOut", NKT_DBFUNDTYPE_SignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "VarI2FromR8",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "dblIn", NKT_DBFUNDTYPE_Double, 0, 8, IN },
		{1, "psOut", NKT_DBFUNDTYPE_SignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "VARIANT_UserSize",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{1, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, 0, NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 128, IN },
	}
	},
	{ "VarUI4FromDec",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pdecIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagDEC", 128, IN },
		{1, "pulOut", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "SysAllocStringLen",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
		{0, "strIn", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "ui", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "VarI8FromCy",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "cyIn", NKT_DBOBJCLASS_Union, "tagCY", 64, IN },
		{1, "pi64Out", NKT_DBFUNDTYPE_SignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, IN },
	}
	},
	{ "VarI8FromI1",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "cIn", NKT_DBFUNDTYPE_AnsiChar, 0, 1, IN },
		{1, "pi64Out", NKT_DBFUNDTYPE_SignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, IN },
	}
	},
	{ "VarI8FromI2",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sIn", NKT_DBFUNDTYPE_SignedWord, 0, 2, IN },
		{1, "pi64Out", NKT_DBFUNDTYPE_SignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, IN },
	}
	},
	{ "GetRecordInfoFromGuids",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "rGuidTypeLib", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{1, "uVerMajor", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "uVerMinor", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "lcid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "rGuidTypeInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{5, "ppRecInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IRecordInfo", 32, IN },
	}
	},
	{ "VarI1FromDisp",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pdispIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IDispatch", 32, IN },
		{1, "lcid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pcOut", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "VarI8FromR4",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "fltIn", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{1, "pi64Out", NKT_DBFUNDTYPE_SignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, IN },
	}
	},
	{ "VarI8FromR8",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "dblIn", NKT_DBFUNDTYPE_Double, 0, 8, IN },
		{1, "pi64Out", NKT_DBFUNDTYPE_SignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, IN },
	}
	},
	{ "LPSAFEARRAY_UserMarshal",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{1, 0, NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, 0, NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "tagSAFEARRAY", 192, IN },
	}
	},
	{ "VarUI1FromDec",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pdecIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagDEC", 128, IN },
		{1, "pbOut", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "SafeArrayCopyData",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "psaSource", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSAFEARRAY", 192, IN },
		{1, "psaTarget", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSAFEARRAY", 192, IN },
	}
	},
	{ "VarUI2FromCy",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "cyIn", NKT_DBOBJCLASS_Union, "tagCY", 64, IN },
		{1, "puiOut", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "VarUI2FromI1",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "cIn", NKT_DBFUNDTYPE_AnsiChar, 0, 1, IN },
		{1, "puiOut", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "VarUI2FromI2",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "uiIn", NKT_DBFUNDTYPE_SignedWord, 0, 2, IN },
		{1, "puiOut", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "VarUI2FromI4",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lIn", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{1, "puiOut", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "VarUI2FromI8",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "i64In", NKT_DBFUNDTYPE_SignedQuadWord, 0, 8, IN },
		{1, "puiOut", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "OleCreatePropertyFrame",11,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hwndOwner", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "x", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "y", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "lpszCaption", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{4, "cObjects", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "ppUnk", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IUnknown", 32, IN },
		{6, "cPages", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{7, "pPageClsID", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{8, "lcid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{9, "dwReserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{10, "pvReserved", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "VarUI2FromR4",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "fltIn", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{1, "puiOut", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "VarUI2FromR8",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "dblIn", NKT_DBFUNDTYPE_Double, 0, 8, IN },
		{1, "puiOut", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "VarDecRound",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pdecIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagDEC", 128, IN },
		{1, "cDecimals", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "pdecResult", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagDEC", 128, IN },
	}
	},
	{ "VarBoolFromUI4",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ulIn", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pboolOut", NKT_DBFUNDTYPE_SignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "LHashValOfNameSysA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "syskind", NKT_DBOBJCLASS_Enumeration, "tagSYSKIND", 32, IN },
		{1, "lcid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "szName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "DosDateTimeToVariantTime",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "wDosDate", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{1, "wDosTime", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{2, "pvtime", NKT_DBFUNDTYPE_Double | NKT_DBOBJCLASS_Pointer, 0, 8, IN },
	}
	},
	{ "VarBstrFromUI1",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "bVal", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, IN },
		{1, "lcid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pbstrOut", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, IN },
	}
	},
	{ "VarBstrFromUI2",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "uiIn", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{1, "lcid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pbstrOut", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, IN },
	}
	},
	{ "VarBstrFromUI4",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ulIn", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lcid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pbstrOut", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, IN },
	}
	},
	{ "VarBstrFromUI8",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ui64In", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "lcid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pbstrOut", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, IN },
	}
	},
	{ "VarR8FromUI1",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "bIn", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, IN },
		{1, "pdblOut", NKT_DBFUNDTYPE_Double | NKT_DBOBJCLASS_Pointer, 0, 8, IN },
	}
	},
	{ "VarR8FromUI2",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "uiIn", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{1, "pdblOut", NKT_DBFUNDTYPE_Double | NKT_DBOBJCLASS_Pointer, 0, 8, IN },
	}
	},
	{ "VarR8FromUI4",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ulIn", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pdblOut", NKT_DBFUNDTYPE_Double | NKT_DBOBJCLASS_Pointer, 0, 8, IN },
	}
	},
	{ "VarR8FromUI8",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ui64In", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "pdblOut", NKT_DBFUNDTYPE_Double | NKT_DBOBJCLASS_Pointer, 0, 8, IN },
	}
	},
	{ "VarUI8FromCy",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "cyIn", NKT_DBOBJCLASS_Union, "tagCY", 64, IN },
		{1, "pi64Out", NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, IN },
	}
	},
	{ "VarUI8FromI1",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "cIn", NKT_DBFUNDTYPE_AnsiChar, 0, 1, IN },
		{1, "pi64Out", NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, IN },
	}
	},
	{ "VarUI8FromI2",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sIn", NKT_DBFUNDTYPE_SignedWord, 0, 2, IN },
		{1, "pi64Out", NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, IN },
	}
	},
	{ "VarUI8FromI8",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ui64In", NKT_DBFUNDTYPE_SignedQuadWord, 0, 8, IN },
		{1, "pi64Out", NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, IN },
	}
	},
	{ "RevokeActiveObject",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "dwRegister", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pvReserved", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "VarUI8FromR4",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "fltIn", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{1, "pi64Out", NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, IN },
	}
	},
	{ "VarUI8FromR8",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "dblIn", NKT_DBFUNDTYPE_Double, 0, 8, IN },
		{1, "pi64Out", NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, IN },
	}
	},
	{ "VarR4FromStr",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "strIn", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "lcid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pfltOut", NKT_DBFUNDTYPE_Float | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "VarFormatDateTime",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pvarIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 128, IN },
		{1, "iNamedFormat", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pbstrOut", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, IN },
	}
	},
	{ "VarDecFromI1",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "cIn", NKT_DBFUNDTYPE_AnsiChar, 0, 1, IN },
		{1, "pdecOut", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagDEC", 128, IN },
	}
	},
	{ "VarR4FromUI1",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "bIn", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, IN },
		{1, "pfltOut", NKT_DBFUNDTYPE_Float | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "VarR4FromUI2",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "uiIn", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{1, "pfltOut", NKT_DBFUNDTYPE_Float | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "VarR4FromUI4",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ulIn", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pfltOut", NKT_DBFUNDTYPE_Float | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "VarR4FromUI8",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ui64In", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "pfltOut", NKT_DBFUNDTYPE_Float | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "VarUI4FromI8",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "i64In", NKT_DBFUNDTYPE_SignedQuadWord, 0, 8, IN },
		{1, "plOut", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "SafeArrayUnlock",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "psa", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSAFEARRAY", 192, IN },
	}
	},
	{ "RegisterActiveObject",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "punk", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 32, IN },
		{1, "rclsid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pdwRegister", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "OleLoadPictureFileEx",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "varFileName", NKT_DBOBJCLASS_Struct, "tagVARIANT", 128, IN },
		{1, "xSizeDesired", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "ySizeDesired", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "lplpdispPicture", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IDispatch", 32, IN },
	}
	},
	{ "OleLoadPictureFile",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "varFileName", NKT_DBOBJCLASS_Struct, "tagVARIANT", 128, IN },
		{1, "lplpdispPicture", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IDispatch", 32, IN },
	}
	},
	{ "VARIANT_UserMarshal",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{1, 0, NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, 0, NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 128, IN },
	}
	},
	{ "LPSAFEARRAY_UserSize",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{1, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, 0, NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "tagSAFEARRAY", 192, IN },
	}
	},
	{ "VarMonthName",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "iMonth", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{1, "fAbbrev", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pbstrOut", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, IN },
	}
	},
	{ "SafeArraySetIID",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "psa", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSAFEARRAY", 192, IN },
		{1, "guid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
	}
	},
	{ "OleCreateFontIndirect",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lpFontDesc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagFONTDESC", 256, IN },
		{1, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{2, "lplpvObj", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, INOUT },
	}
	},
	{ "VarUI8FromUI1",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "bIn", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, IN },
		{1, "pi64Out", NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, IN },
	}
	},
	{ "VarUI8FromUI4",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ulIn", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pi64Out", NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, IN },
	}
	},
	{ "VarDateFromI4",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lIn", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{1, "pdateOut", NKT_DBFUNDTYPE_Double | NKT_DBOBJCLASS_Pointer, 0, 8, IN },
	}
	},
	{ "VarUI4FromStr",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "strIn", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "lcid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pulOut", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "VarDecFix",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pdecIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagDEC", 128, IN },
		{1, "pdecResult", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagDEC", 128, IN },
	}
	},
	{ "SysReAllocStringLen",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pbstr", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, IN },
		{1, "psz", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "len", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "VarUI2FromStr",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "strIn", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "lcid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "puiOut", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "VarUI4FromUI1",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "bIn", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, IN },
		{1, "pulOut", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "VarUI4FromUI8",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ui64In", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "plOut", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "SafeArrayUnaccessData",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "psa", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSAFEARRAY", 192, IN },
	}
	},
	{ "VarUdateFromDate",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "dateIn", NKT_DBFUNDTYPE_Double, 0, 8, IN },
		{1, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pudateOut", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "UDATE", 144, IN },
	}
	},
	{ "VarUI2FromUI1",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "bIn", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, IN },
		{1, "puiOut", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "VarUI2FromUI4",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ulIn", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "puiOut", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "VarUI2FromUI8",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "i64In", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "puiOut", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "VectorFromBstr",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "bstr", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "ppsa", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "tagSAFEARRAY", 192, IN },
	}
	},
	{ "CreateTypeLib",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "syskind", NKT_DBOBJCLASS_Enumeration, "tagSYSKIND", 32, IN },
		{1, "szFile", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "ppctlib", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ICreateTypeLib", 32, IN },
	}
	},
	{ "VarUI1FromUI2",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "uiIn", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{1, "pbOut", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "VarUI1FromUI4",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ulIn", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pbOut", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "VarUI1FromUI8",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ui64In", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "pbOut", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "VarUI2FromBool",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "boolIn", NKT_DBFUNDTYPE_SignedWord, 0, 2, IN },
		{1, "puiOut", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "CreateErrorInfo",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pperrinfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ICreateErrorInfo", 32, IN },
	}
	},
	{ "SafeArrayGetDim",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "psa", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSAFEARRAY", 192, IN },
	}
	},
	{ "VarNumFromParseNum",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pnumprs", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "NUMPARSE", 192, IN },
		{1, "rgbDig", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "dwVtBits", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pvar", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 128, IN },
	}
	},
	{ "SysAllocStringByteLen",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
		{0, "psz", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "len", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "VarDecSub",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pdecLeft", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagDEC", 128, IN },
		{1, "pdecRight", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagDEC", 128, IN },
		{2, "pdecResult", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagDEC", 128, IN },
	}
	},
	{ "VariantTimeToSystemTime",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "vtime", NKT_DBFUNDTYPE_Double, 0, 8, IN },
		{1, "lpSystemTime", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SYSTEMTIME", 128, IN },
	}
	},
	{ "VarUI4FromUI2",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "uiIn", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{1, "pulOut", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "UnRegisterTypeLib",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "libID", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{1, "wVerMajor", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{2, "wVerMinor", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{3, "lcid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "syskind", NKT_DBOBJCLASS_Enumeration, "tagSYSKIND", 32, IN },
	}
	},
	{ "VarR4FromDisp",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pdispIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IDispatch", 32, IN },
		{1, "lcid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pfltOut", NKT_DBFUNDTYPE_Float | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
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
	{ "VarUI2FromDate",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "dateIn", NKT_DBFUNDTYPE_Double, 0, 8, IN },
		{1, "puiOut", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "VarIdiv",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pvarLeft", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 128, IN },
		{1, "pvarRight", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 128, IN },
		{2, "pvarResult", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 128, IN },
	}
	},
	{ "VarDateFromUdateEx",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pudateIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "UDATE", 144, IN },
		{1, "lcid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pdateOut", NKT_DBFUNDTYPE_Double | NKT_DBOBJCLASS_Pointer, 0, 8, IN },
	}
	},
	{ "VarI1FromI2",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "uiIn", NKT_DBFUNDTYPE_SignedWord, 0, 2, IN },
		{1, "pcOut", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "VariantTimeToDosDateTime",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "vtime", NKT_DBFUNDTYPE_Double, 0, 8, IN },
		{1, "pwDosDate", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "pwDosTime", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "SafeArrayGetIID",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "psa", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSAFEARRAY", 192, IN },
		{1, "pguid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
	}
	},
	{ "SysAllocString",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
		{0, "psz", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "VarCyAbs",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "cyIn", NKT_DBOBJCLASS_Union, "tagCY", 64, IN },
		{1, "pcyResult", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "tagCY", 64, IN },
	}
	},
	{ "OleLoadPicturePath",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "szURLorPath", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "punkCaller", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 32, IN },
		{2, "dwReserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "clrReserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{5, "ppvRet", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, INOUT },
	}
	},
	{ "VarCyRound",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "cyIn", NKT_DBOBJCLASS_Union, "tagCY", 64, IN },
		{1, "cDecimals", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "pcyResult", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "tagCY", 64, IN },
	}
	},
	{ "VarCyFromR4",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "fltIn", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{1, "pcyOut", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "tagCY", 64, IN },
	}
	},
	{ "VarUI4FromDate",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "dateIn", NKT_DBFUNDTYPE_Double, 0, 8, IN },
		{1, "pulOut", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "VarBoolFromI4",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lIn", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{1, "pboolOut", NKT_DBFUNDTYPE_SignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "VarCyCmp",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "cyLeft", NKT_DBOBJCLASS_Union, "tagCY", 64, IN },
		{1, "cyRight", NKT_DBOBJCLASS_Union, "tagCY", 64, IN },
	}
	},
	{ "LPSAFEARRAY_UserFree",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{1, 0, NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "tagSAFEARRAY", 192, IN },
	}
	},
	{ "VarUI2FromDisp",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pdispIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IDispatch", 32, IN },
		{1, "lcid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "puiOut", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "VarCyFix",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "cyIn", NKT_DBOBJCLASS_Union, "tagCY", 64, IN },
		{1, "pcyResult", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "tagCY", 64, IN },
	}
	},
	{ "VarI8FromDate",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "dateIn", NKT_DBFUNDTYPE_Double, 0, 8, IN },
		{1, "pi64Out", NKT_DBFUNDTYPE_SignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, IN },
	}
	},
	{ "VarI1FromR4",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "fltIn", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{1, "pcOut", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "VarR4FromI1",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "cIn", NKT_DBFUNDTYPE_AnsiChar, 0, 1, IN },
		{1, "pfltOut", NKT_DBFUNDTYPE_Float | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "VarR4FromI2",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sIn", NKT_DBFUNDTYPE_SignedWord, 0, 2, IN },
		{1, "pfltOut", NKT_DBFUNDTYPE_Float | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "VarR4FromI4",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lIn", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{1, "pfltOut", NKT_DBFUNDTYPE_Float | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "VarR4FromI8",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "i64In", NKT_DBFUNDTYPE_SignedQuadWord, 0, 8, IN },
		{1, "pfltOut", NKT_DBFUNDTYPE_Float | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "VarR4FromR8",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "dblIn", NKT_DBFUNDTYPE_Double, 0, 8, IN },
		{1, "pfltOut", NKT_DBFUNDTYPE_Float | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "VarDecFromI4",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lIn", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{1, "pdecOut", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagDEC", 128, IN },
	}
	},
	{ "VarDateFromCy",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "cyIn", NKT_DBOBJCLASS_Union, "tagCY", 64, IN },
		{1, "pdateOut", NKT_DBFUNDTYPE_Double | NKT_DBOBJCLASS_Pointer, 0, 8, IN },
	}
	},
	{ "VarDecFromR4",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "fltIn", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{1, "pdecOut", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagDEC", 128, IN },
	}
	},
	{ "VarCyFromDec",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pdecIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagDEC", 128, IN },
		{1, "pcyOut", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "tagCY", 64, IN },
	}
	},
	{ "VarDateFromI1",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "cIn", NKT_DBFUNDTYPE_AnsiChar, 0, 1, IN },
		{1, "pdateOut", NKT_DBFUNDTYPE_Double | NKT_DBOBJCLASS_Pointer, 0, 8, IN },
	}
	},
	{ "VarDateFromI2",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sIn", NKT_DBFUNDTYPE_SignedWord, 0, 2, IN },
		{1, "pdateOut", NKT_DBFUNDTYPE_Double | NKT_DBOBJCLASS_Pointer, 0, 8, IN },
	}
	},
	{ "VarDateFromI8",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "i64In", NKT_DBFUNDTYPE_SignedQuadWord, 0, 8, IN },
		{1, "pdateOut", NKT_DBFUNDTYPE_Double | NKT_DBOBJCLASS_Pointer, 0, 8, IN },
	}
	},
	{ "VarDateFromR4",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "fltIn", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{1, "pdateOut", NKT_DBFUNDTYPE_Double | NKT_DBOBJCLASS_Pointer, 0, 8, IN },
	}
	},
	{ "SetErrorInfo",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "dwReserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "perrinfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IErrorInfo", 32, IN },
	}
	},
	{ "SafeArrayPutElement",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "psa", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSAFEARRAY", 192, IN },
		{1, "rgIndices", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{2, "pv", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "GetErrorInfo",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "dwReserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pperrinfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IErrorInfo", 32, IN },
	}
	},
	{ "VarR8FromBool",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "boolIn", NKT_DBFUNDTYPE_SignedWord, 0, 2, IN },
		{1, "pdblOut", NKT_DBFUNDTYPE_Double | NKT_DBOBJCLASS_Pointer, 0, 8, IN },
	}
	},
	{ "VarDecFromBool",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "boolIn", NKT_DBFUNDTYPE_SignedWord, 0, 2, IN },
		{1, "pdecOut", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagDEC", 128, IN },
	}
	},
	{ "VarI1FromUI4",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ulIn", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pcOut", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "VarTokenizeFormatString",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pstrFormat", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "rgbTok", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "cbTok", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "iFirstDay", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "iFirstWeek", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{5, "lcid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "pcbActual", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "VarCyFromBool",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "boolIn", NKT_DBFUNDTYPE_SignedWord, 0, 2, IN },
		{1, "pcyOut", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "tagCY", 64, IN },
	}
	},
	{ "VarDecCmpR8",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pdecLeft", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagDEC", 128, IN },
		{1, "dblRight", NKT_DBFUNDTYPE_Double, 0, 8, IN },
	}
	},
	{ "VarFormatFromTokens",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pvarIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 128, IN },
		{1, "pstrFormat", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "pbTokCur", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "pbstrOut", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, IN },
		{5, "lcid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "VarI1FromCy",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "cyIn", NKT_DBOBJCLASS_Union, "tagCY", 64, IN },
		{1, "pcOut", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "VarI1FromI4",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lIn", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{1, "pcOut", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "VarI1FromI8",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "i64In", NKT_DBFUNDTYPE_SignedQuadWord, 0, 8, IN },
		{1, "pcOut", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "VarI1FromR8",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "dblIn", NKT_DBFUNDTYPE_Double, 0, 8, IN },
		{1, "pcOut", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "ClearCustData",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "pCustData", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagCUSTDATA", 64, IN },
	}
	},
	{ "VarR8FromDate",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "dateIn", NKT_DBFUNDTYPE_Double, 0, 8, IN },
		{1, "pdblOut", NKT_DBFUNDTYPE_Double | NKT_DBOBJCLASS_Pointer, 0, 8, IN },
	}
	},
	{ "GetActiveObject",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "rclsid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{1, "pvReserved", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "ppunk", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IUnknown", 32, IN },
	}
	},
	{ "VarCyMul",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "cyLeft", NKT_DBOBJCLASS_Union, "tagCY", 64, IN },
		{1, "cyRight", NKT_DBOBJCLASS_Union, "tagCY", 64, IN },
		{2, "pcyResult", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "tagCY", 64, IN },
	}
	},
	{ "VarDecFromDate",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "dateIn", NKT_DBFUNDTYPE_Double, 0, 8, IN },
		{1, "pdecOut", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagDEC", 128, IN },
	}
	},
	{ "VarR8FromStr",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "strIn", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "lcid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pdblOut", NKT_DBFUNDTYPE_Double | NKT_DBOBJCLASS_Pointer, 0, 8, IN },
	}
	},
	{ "VarI4FromCy",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "cyIn", NKT_DBOBJCLASS_Union, "tagCY", 64, IN },
		{1, "plOut", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "VarI4FromI1",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "cIn", NKT_DBFUNDTYPE_AnsiChar, 0, 1, IN },
		{1, "plOut", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "VarI4FromI2",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sIn", NKT_DBFUNDTYPE_SignedWord, 0, 2, IN },
		{1, "plOut", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "VarI4FromI8",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "i64In", NKT_DBFUNDTYPE_SignedQuadWord, 0, 8, IN },
		{1, "plOut", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "VarI4FromR4",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "fltIn", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{1, "plOut", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "VarI4FromR8",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "dblIn", NKT_DBFUNDTYPE_Double, 0, 8, IN },
		{1, "plOut", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "SafeArrayAccessData",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "psa", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSAFEARRAY", 192, IN },
		{1, "ppvData", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
	}
	},
	{ "VarI8FromDisp",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pdispIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IDispatch", 32, IN },
		{1, "lcid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pi64Out", NKT_DBFUNDTYPE_SignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, IN },
	}
	},
	{ "VarCyFromDate",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "dateIn", NKT_DBFUNDTYPE_Double, 0, 8, IN },
		{1, "pcyOut", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "tagCY", 64, IN },
	}
	},
	{ "BSTR_UserFree",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{1, 0, NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, IN },
	}
	},
	{ "VarDateFromUdate",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pudateIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "UDATE", 144, IN },
		{1, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pdateOut", NKT_DBFUNDTYPE_Double | NKT_DBOBJCLASS_Pointer, 0, 8, IN },
	}
	},
	{ "VarUI1FromI1",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "cIn", NKT_DBFUNDTYPE_AnsiChar, 0, 1, IN },
		{1, "pbOut", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "VarUI1FromI2",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sIn", NKT_DBFUNDTYPE_SignedWord, 0, 2, IN },
		{1, "pbOut", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "VarUI1FromI8",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "i64In", NKT_DBFUNDTYPE_SignedQuadWord, 0, 8, IN },
		{1, "pbOut", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "VarUI1FromR4",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "fltIn", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{1, "pbOut", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "VarUI1FromR8",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "dblIn", NKT_DBFUNDTYPE_Double, 0, 8, IN },
		{1, "pbOut", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "VarI8FromDec",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pdecIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagDEC", 128, IN },
		{1, "pi64Out", NKT_DBFUNDTYPE_SignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, IN },
	}
	},
	{ "VarParseNumFromStr",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "strIn", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "lcid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pnumprs", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "NUMPARSE", 192, IN },
		{4, "rgbDig", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "SafeArrayGetElement",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "psa", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSAFEARRAY", 192, IN },
		{1, "rgIndices", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{2, "pv", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "SafeArrayDestroyData",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "psa", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSAFEARRAY", 192, IN },
	}
	},
	{ "VarUI4FromCy",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "cyIn", NKT_DBOBJCLASS_Union, "tagCY", 64, IN },
		{1, "pulOut", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "VarUI4FromI1",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "cIn", NKT_DBFUNDTYPE_AnsiChar, 0, 1, IN },
		{1, "pulOut", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "VarUI4FromI2",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "uiIn", NKT_DBFUNDTYPE_SignedWord, 0, 2, IN },
		{1, "pulOut", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "VarUI4FromI4",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lIn", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{1, "pulOut", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "VarDecFromStr",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "strIn", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "lcid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pdecOut", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagDEC", 128, IN },
	}
	},
	{ "VarUI4FromR4",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "fltIn", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{1, "pulOut", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "VarUI4FromR8",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "dblIn", NKT_DBFUNDTYPE_Double, 0, 8, IN },
		{1, "pulOut", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "SafeArrayCreateVector",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSAFEARRAY", 192, INOUT },
		{0, "vt", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{1, "lLbound", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "cElements", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "VarCySub",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "cyLeft", NKT_DBOBJCLASS_Union, "tagCY", 64, IN },
		{1, "cyRight", NKT_DBOBJCLASS_Union, "tagCY", 64, IN },
		{2, "pcyResult", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "tagCY", 64, IN },
	}
	},
	{ "LPSAFEARRAY_UserUnmarshal",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{1, 0, NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, 0, NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "tagSAFEARRAY", 192, IN },
	}
	},
	{ "VarI4FromDec",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pdecIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagDEC", 128, IN },
		{1, "plOut", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "VarDecFromUI1",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "bIn", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, IN },
		{1, "pdecOut", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagDEC", 128, IN },
	}
	},
	{ "VarDecFromUI2",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "uiIn", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{1, "pdecOut", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagDEC", 128, IN },
	}
	},
	{ "VariantCopy",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pvargDest", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 128, IN },
		{1, "pvargSrc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 128, IN },
	}
	},
	{ "SafeArrayGetUBound",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "psa", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSAFEARRAY", 192, IN },
		{1, "nDim", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "plUbound", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "VarAbs",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pvarIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 128, IN },
		{1, "pvarResult", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 128, IN },
	}
	},
	{ "VarI2FromDec",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pdecIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagDEC", 128, IN },
		{1, "psOut", NKT_DBFUNDTYPE_SignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "VarAdd",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pvarLeft", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 128, IN },
		{1, "pvarRight", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 128, IN },
		{2, "pvarResult", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 128, IN },
	}
	},
	{ "VarAnd",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pvarLeft", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 128, IN },
		{1, "pvarRight", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 128, IN },
		{2, "pvarResult", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 128, IN },
	}
	},
	{ "VarDecFromDisp",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pdispIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IDispatch", 32, IN },
		{1, "lcid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pdecOut", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagDEC", 128, IN },
	}
	},
	{ "VarBoolFromDate",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "dateIn", NKT_DBFUNDTYPE_Double, 0, 8, IN },
		{1, "pboolOut", NKT_DBFUNDTYPE_SignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "VarUI1FromStr",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "strIn", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "lcid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pbOut", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "VarCmp",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pvarLeft", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 128, IN },
		{1, "pvarRight", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 128, IN },
		{2, "lcid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "OleCreatePropertyFrameIndirect",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lpParams", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagOCPFIPARAMS", 352, IN },
	}
	},
	{ "DllCanUnloadNow",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "VarCyMulI4",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "cyLeft", NKT_DBOBJCLASS_Union, "tagCY", 64, IN },
		{1, "lRight", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "pcyResult", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "tagCY", 64, IN },
	}
	},
	{ "VarCyMulI8",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "cyLeft", NKT_DBOBJCLASS_Union, "tagCY", 64, IN },
		{1, "lRight", NKT_DBFUNDTYPE_SignedQuadWord, 0, 8, IN },
		{2, "pcyResult", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "tagCY", 64, IN },
	}
	},
	{ "VarCyFromStr",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "strIn", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "lcid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pcyOut", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "tagCY", 64, IN },
	}
	},
	{ "VarFormat",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pvarIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 128, IN },
		{1, "pstrFormat", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "iFirstDay", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "iFirstWeek", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "pbstrOut", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, IN },
	}
	},
	{ "VarDiv",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pvarLeft", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 128, IN },
		{1, "pvarRight", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 128, IN },
		{2, "pvarResult", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 128, IN },
	}
	},
	{ "LoadRegTypeLib",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "rguid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{1, "wVerMajor", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{2, "wVerMinor", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{3, "lcid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "pptlib", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ITypeLib", 32, IN },
	}
	},
	{ "VarFix",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pvarIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 128, IN },
		{1, "pvarResult", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 128, IN },
	}
	},
	{ "VarCyFromUI1",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "bIn", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, IN },
		{1, "pcyOut", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "tagCY", 64, IN },
	}
	},
	{ "VarCyFromUI4",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ulIn", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pcyOut", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "tagCY", 64, IN },
	}
	},
	{ "VarCyFromUI8",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ui64In", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "pcyOut", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "tagCY", 64, IN },
	}
	},
	{ "VarEqv",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pvarLeft", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 128, IN },
		{1, "pvarRight", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 128, IN },
		{2, "pvarResult", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 128, IN },
	}
	},
	{ "DllUnregisterServer",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "BSTR_UserUnmarshal",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{1, 0, NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, 0, NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, IN },
	}
	},
	{ "VariantChangeTypeEx",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pvargDest", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 128, IN },
		{1, "pvarSrc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 128, IN },
		{2, "lcid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "wFlags", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{4, "vt", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
	}
	},
	{ "SafeArrayAllocDescriptor",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "cDims", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "ppsaOut", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "tagSAFEARRAY", 192, IN },
	}
	},
	{ "VarBstrFromCy",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "cyIn", NKT_DBOBJCLASS_Union, "tagCY", 64, IN },
		{1, "lcid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pbstrOut", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, IN },
	}
	},
	{ "VarBstrFromI1",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "cIn", NKT_DBFUNDTYPE_AnsiChar, 0, 1, IN },
		{1, "lcid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pbstrOut", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, IN },
	}
	},
	{ "VarBstrFromI2",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "iVal", NKT_DBFUNDTYPE_SignedWord, 0, 2, IN },
		{1, "lcid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pbstrOut", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, IN },
	}
	},
	{ "VarBstrFromI4",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lIn", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{1, "lcid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pbstrOut", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, IN },
	}
	},
	{ "VarBstrFromR4",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "fltIn", NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{1, "lcid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pbstrOut", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, IN },
	}
	},
	{ "OleSavePictureFile",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lpdispPicture", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IDispatch", 32, IN },
		{1, "bstrFileName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "VarDecFromUI4",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ulIn", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pdecOut", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagDEC", 128, IN },
	}
	},
	{ "VarDecFromUI8",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ui64In", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "pdecOut", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagDEC", 128, IN },
	}
	},
	{ "VarRound",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pvarIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 128, IN },
		{1, "cDecimals", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "pvarResult", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 128, IN },
	}
	},
	{ "VarDecFromI8",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "i64In", NKT_DBFUNDTYPE_SignedQuadWord, 0, 8, IN },
		{1, "pdecOut", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagDEC", 128, IN },
	}
	},
	{ "VarImp",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pvarLeft", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 128, IN },
		{1, "pvarRight", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 128, IN },
		{2, "pvarResult", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 128, IN },
	}
	},
	{ "VarUI4FromDisp",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pdispIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IDispatch", 32, IN },
		{1, "lcid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pulOut", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "VarInt",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pvarIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 128, IN },
		{1, "pvarResult", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 128, IN },
	}
	},
	{ "VarBoolFromDisp",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pdispIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IDispatch", 32, IN },
		{1, "lcid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pboolOut", NKT_DBFUNDTYPE_SignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "SystemTimeToVariantTime",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lpSystemTime", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SYSTEMTIME", 128, IN },
		{1, "pvtime", NKT_DBFUNDTYPE_Double | NKT_DBOBJCLASS_Pointer, 0, 8, IN },
	}
	},
	{ "VARIANT_UserUnmarshal",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{1, 0, NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, 0, NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 128, IN },
	}
	},
	{ "VarDateFromStr",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "strIn", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "lcid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pdateOut", NKT_DBFUNDTYPE_Double | NKT_DBOBJCLASS_Pointer, 0, 8, IN },
	}
	},
	{ "VarI8FromStr",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "strIn", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "lcid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pi64Out", NKT_DBFUNDTYPE_SignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, IN },
	}
	},
	{ "VarDateFromUI1",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "bIn", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, IN },
		{1, "pdateOut", NKT_DBFUNDTYPE_Double | NKT_DBOBJCLASS_Pointer, 0, 8, IN },
	}
	},
	{ "VarDateFromUI2",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "uiIn", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{1, "pdateOut", NKT_DBFUNDTYPE_Double | NKT_DBOBJCLASS_Pointer, 0, 8, IN },
	}
	},
	{ "VarDateFromUI4",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ulIn", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pdateOut", NKT_DBFUNDTYPE_Double | NKT_DBOBJCLASS_Pointer, 0, 8, IN },
	}
	},
	{ "VarDateFromUI8",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ui64In", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
		{1, "pdateOut", NKT_DBFUNDTYPE_Double | NKT_DBOBJCLASS_Pointer, 0, 8, IN },
	}
	},
	{ "VarBoolFromDec",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pdecIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagDEC", 128, IN },
		{1, "pboolOut", NKT_DBFUNDTYPE_SignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
};

int OleAut32arraySize = (sizeof(OleAut32_info) / sizeof(OleAut32_info[0]));