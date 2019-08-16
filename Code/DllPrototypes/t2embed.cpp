#include "../Pyrebox_libcalls.h"

libcall_info_t t2embed_info[] = {
	{ "TTDeleteEmbeddedFont",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hFontReference", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "ulFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pulStatus", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "TTLoadEmbeddedFont",10,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "phFontReference", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{1, "ulFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pulPrivStatus", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{3, "ulPrivs", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "pulStatus", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{5, "lpfnReadFromStream", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{6, "lpvReadStream", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{7, "szWinFamilyName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{8, "szMacFamilyName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{9, "pTTLoadInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "TTLOADINFO", 64, IN },
	}
	},
	{ "TTCharToUnicode",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hDC", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pucCharCodes", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "ulCharCodeSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pusShortCodes", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
		{4, "ulShortCodeSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "ulFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "TTRunValidationTestsEx",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hDC", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pTestParam", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "TTVALIDATIONTESTSPARAMSEX", 192, IN },
	}
	},
	{ "TTRunValidationTests",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hDC", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pTestParam", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "TTVALIDATIONTESTSPARAMS", 192, IN },
	}
	},
	{ "TTEmbedFontEx",11,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hDC", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "ulFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "ulCharSet", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pulPrivStatus", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{4, "pulStatus", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{5, "lpfnWriteToStream", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{6, "lpvWriteStream", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
		{7, "pulCharCodeSet", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{8, "usCharCodeCount", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{9, "usLanguage", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{10, "pTTEmbedInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "TTEMBEDINFO", 64, IN },
	}
	},
	{ "TTEmbedFont",11,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hDC", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "ulFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "ulCharSet", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pulPrivStatus", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{4, "pulStatus", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{5, "lpfnWriteToStream", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{6, "lpvWriteStream", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
		{7, "pusCharCodeSet", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{8, "usCharCodeCount", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{9, "usLanguage", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{10, "pTTEmbedInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "TTEMBEDINFO", 64, IN },
	}
	},
	{ "TTEmbedFontFromFileA",13,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hDC", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "szFontFileName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "usTTCIndex", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{3, "ulFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "ulCharSet", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "pulPrivStatus", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{6, "pulStatus", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{7, "lpfnWriteToStream", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{8, "lpvWriteStream", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
		{9, "pusCharCodeSet", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{10, "usCharCodeCount", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{11, "usLanguage", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{12, "pTTEmbedInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "TTEMBEDINFO", 64, IN },
	}
	},
	{ "TTGetEmbeddedFontInfo",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ulFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pulPrivStatus", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{2, "ulPrivs", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pulStatus", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{4, "lpfnReadFromStream", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{5, "lpvReadStream", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{6, "pTTLoadInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "TTLOADINFO", 64, IN },
	}
	},
	{ "TTIsEmbeddingEnabledForFacename",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lpszFacename", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "pbEnabled", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "TTEnableEmbeddingForFacename",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lpszFacename", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "bEnable", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "TTGetEmbeddingType",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hDC", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pulEmbedType", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "TTIsEmbeddingEnabled",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hDC", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pbEnabled", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "TTGetNewFontName",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "phFontReference", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{1, "wzWinFamilyName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "cchMaxWinName", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "szMacFamilyName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{4, "cchMaxMacName", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
};

int t2embedarraySize = (sizeof(t2embed_info) / sizeof(t2embed_info[0]));