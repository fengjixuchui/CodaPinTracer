#include "../Pyrebox_libcalls.h"

libcall_info_t msdelta_info[] = {
	{ "GetDeltaSignatureA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "FileTypeSet", NKT_DBFUNDTYPE_SignedQuadWord, 0, 8, IN },
		{1, "HashAlgId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lpSourceName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "lpHash", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DELTA_HASH", 288, IN },
	}
	},
	{ "GetDeltaSignatureW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "FileTypeSet", NKT_DBFUNDTYPE_SignedQuadWord, 0, 8, IN },
		{1, "HashAlgId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lpSourceName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "lpHash", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DELTA_HASH", 288, IN },
	}
	},
	{ "GetDeltaSignatureB",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "FileTypeSet", NKT_DBFUNDTYPE_SignedQuadWord, 0, 8, IN },
		{1, "HashAlgId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "Source", NKT_DBOBJCLASS_Struct, "_DELTA_INPUT", 96, IN },
		{3, "lpHash", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DELTA_HASH", 288, IN },
	}
	},
	{ "DeltaNormalizeProvidedB",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "FileTypeSet", NKT_DBFUNDTYPE_SignedQuadWord, 0, 8, IN },
		{1, "NormalizeFlags", NKT_DBFUNDTYPE_SignedQuadWord, 0, 8, IN },
		{2, "NormalizeOptions", NKT_DBOBJCLASS_Struct, "_DELTA_INPUT", 96, IN },
		{3, "lpSource", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{4, "uSourceSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ApplyDeltaW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ApplyFlags", NKT_DBFUNDTYPE_SignedQuadWord, 0, 8, IN },
		{1, "lpSourceName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "lpDeltaName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "lpTargetName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "ApplyDeltaProvidedB",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ApplyFlags", NKT_DBFUNDTYPE_SignedQuadWord, 0, 8, IN },
		{1, "Source", NKT_DBOBJCLASS_Struct, "_DELTA_INPUT", 96, IN },
		{2, "Delta", NKT_DBOBJCLASS_Struct, "_DELTA_INPUT", 96, IN },
		{3, "lpTarget", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{4, "uTargetSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetDeltaInfoA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lpDeltaName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "lpHeaderInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DELTA_HEADER_INFO", 640, IN },
	}
	},
	{ "GetDeltaInfoB",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Delta", NKT_DBOBJCLASS_Struct, "_DELTA_INPUT", 96, IN },
		{1, "lpHeaderInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DELTA_HEADER_INFO", 640, IN },
	}
	},
	{ "GetDeltaInfoW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lpDeltaName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "lpHeaderInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DELTA_HEADER_INFO", 640, IN },
	}
	},
	{ "DeltaFree",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lpMemory", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "CreateDeltaA",11,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "FileTypeSet", NKT_DBFUNDTYPE_SignedQuadWord, 0, 8, IN },
		{1, "SetFlags", NKT_DBFUNDTYPE_SignedQuadWord, 0, 8, IN },
		{2, "ResetFlags", NKT_DBFUNDTYPE_SignedQuadWord, 0, 8, IN },
		{3, "lpSourceName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{4, "lpTargetName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{5, "lpSourceOptionsName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{6, "lpTargetOptionsName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{7, "GlobalOptions", NKT_DBOBJCLASS_Struct, "_DELTA_INPUT", 96, IN },
		{8, "lpTargetFileTime", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_FILETIME", 64, IN },
		{9, "HashAlgId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{10, "lpDeltaName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "CreateDeltaB",11,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "FileTypeSet", NKT_DBFUNDTYPE_SignedQuadWord, 0, 8, IN },
		{1, "SetFlags", NKT_DBFUNDTYPE_SignedQuadWord, 0, 8, IN },
		{2, "ResetFlags", NKT_DBFUNDTYPE_SignedQuadWord, 0, 8, IN },
		{3, "Source", NKT_DBOBJCLASS_Struct, "_DELTA_INPUT", 96, IN },
		{4, "Target", NKT_DBOBJCLASS_Struct, "_DELTA_INPUT", 96, IN },
		{5, "SourceOptions", NKT_DBOBJCLASS_Struct, "_DELTA_INPUT", 96, IN },
		{6, "TargetOptions", NKT_DBOBJCLASS_Struct, "_DELTA_INPUT", 96, IN },
		{7, "GlobalOptions", NKT_DBOBJCLASS_Struct, "_DELTA_INPUT", 96, IN },
		{8, "lpTargetFileTime", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_FILETIME", 64, IN },
		{9, "HashAlgId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{10, "lpDelta", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DELTA_OUTPUT", 64, IN },
	}
	},
	{ "CreateDeltaW",11,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "FileTypeSet", NKT_DBFUNDTYPE_SignedQuadWord, 0, 8, IN },
		{1, "SetFlags", NKT_DBFUNDTYPE_SignedQuadWord, 0, 8, IN },
		{2, "ResetFlags", NKT_DBFUNDTYPE_SignedQuadWord, 0, 8, IN },
		{3, "lpSourceName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{4, "lpTargetName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{5, "lpSourceOptionsName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{6, "lpTargetOptionsName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{7, "GlobalOptions", NKT_DBOBJCLASS_Struct, "_DELTA_INPUT", 96, IN },
		{8, "lpTargetFileTime", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_FILETIME", 64, IN },
		{9, "HashAlgId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{10, "lpDeltaName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "ApplyDeltaA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ApplyFlags", NKT_DBFUNDTYPE_SignedQuadWord, 0, 8, IN },
		{1, "lpSourceName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "lpDeltaName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "lpTargetName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "ApplyDeltaB",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ApplyFlags", NKT_DBFUNDTYPE_SignedQuadWord, 0, 8, IN },
		{1, "Source", NKT_DBOBJCLASS_Struct, "_DELTA_INPUT", 96, IN },
		{2, "Delta", NKT_DBOBJCLASS_Struct, "_DELTA_INPUT", 96, IN },
		{3, "lpTarget", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DELTA_OUTPUT", 64, IN },
	}
	},
};

int msdeltaarraySize = (sizeof(msdelta_info) / sizeof(msdelta_info[0]));