#include "../Pyrebox_libcalls.h"

libcall_info_t msvfw32_info[] = {
	{ "DrawDibStart",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "rate", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DrawDibGetBuffer",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
		{0, "hdd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpbi", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagBITMAPINFOHEADER", 320, IN },
		{2, "dwSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DrawDibSetPalette",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hpal", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ICOpen",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "fccType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "fccHandler", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "wMode", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DrawDibBegin",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dxDst", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "dyDst", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "lpbi", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagBITMAPINFOHEADER", 320, IN },
		{5, "dxSrc", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{6, "dySrc", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{7, "wFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DrawDibClose",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ICOpenFunction",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "fccType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "fccHandler", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "wMode", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "lpfnHandler", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
	}
	},
	{ "DrawDibRealize",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hdd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "fBackground", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ICSendMessage",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hic", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "msg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dw1", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "dw2", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DrawDibDraw",13,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "xDst", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "yDst", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "dxDst", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{5, "dyDst", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{6, "lpbi", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagBITMAPINFOHEADER", 320, IN },
		{7, "lpBits", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{8, "xSrc", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{9, "ySrc", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{10, "dxSrc", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{11, "dySrc", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{12, "wFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ICSeqCompressFrame",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
		{0, "pc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "COMPVARS", 512, IN },
		{1, "uiFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lpBits", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "pfKey", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{4, "plSize", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "DrawDibChangePalette",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "iStart", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "iLen", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "lppe", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPALETTEENTRY", 32, IN },
	}
	},
	{ "GetOpenFileNamePreviewA",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lpofn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagOFNA", 704, IN },
	}
	},
	{ "DrawDibTime",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpddtime", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "DRAWDIBTIME", 224, IN },
	}
	},
	{ "ICSeqCompressFrameStart",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "COMPVARS", 512, IN },
		{1, "lpbiIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagBITMAPINFO", 352, IN },
	}
	},
	{ "MCIWndRegisterClass",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "ICLocate",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "fccType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "fccHandler", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lpbiIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagBITMAPINFOHEADER", 320, IN },
		{3, "lpbiOut", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagBITMAPINFOHEADER", 320, IN },
		{4, "wFlags", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
	}
	},
	{ "GetSaveFileNamePreviewW",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lpofn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagOFNW", 704, IN },
	}
	},
	{ "ICSeqCompressFrameEnd",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "pc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "COMPVARS", 512, IN },
	}
	},
	{ "ICInfo",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "fccType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "fccHandler", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lpicinfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ICINFO", 4544, IN },
	}
	},
	{ "GetOpenFileNamePreviewW",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lpofn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagOFNW", 704, IN },
	}
	},
	{ "DrawDibOpen",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "ICImageDecompress",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hic", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "uiFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lpbiIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagBITMAPINFO", 352, IN },
		{3, "lpBits", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{4, "lpbiOut", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagBITMAPINFO", 352, IN },
	}
	},
	{ "ICCompressorChoose",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "uiFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pvIn", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "lpData", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{4, "pc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "COMPVARS", 512, IN },
		{5, "lpszTitle", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "ICGetDisplayFormat",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hic", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "lpbiIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagBITMAPINFOHEADER", 320, IN },
		{2, "lpbiOut", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagBITMAPINFOHEADER", 320, IN },
		{3, "BitDepth", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "dx", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{5, "dy", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ICCompress",13,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hic", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lpbiOutput", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagBITMAPINFOHEADER", 320, IN },
		{3, "lpData", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{4, "lpbiInput", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagBITMAPINFOHEADER", 320, IN },
		{5, "lpBits", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{6, "lpckid", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{7, "lpdwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{8, "lFrameNum", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{9, "dwFrameSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{10, "dwQuality", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{11, "lpbiPrev", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagBITMAPINFOHEADER", 320, IN },
		{12, "lpPrev", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "ICRemove",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "fccType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "fccHandler", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "wFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ICDecompress",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hic", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lpbiFormat", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagBITMAPINFOHEADER", 320, IN },
		{3, "lpData", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{4, "lpbi", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagBITMAPINFOHEADER", 320, IN },
		{5, "lpBits", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "GetSaveFileNamePreviewA",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lpofn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagOFNA", 704, IN },
	}
	},
	{ "MCIWndCreateA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hwndParent", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hInstance", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwStyle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "szFile", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "MCIWndCreateW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hwndParent", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hInstance", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwStyle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "szFile", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "ICInstall",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "fccType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "fccHandler", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lParam", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "szDesc", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{4, "wFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ICCompressorFree",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "pc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "COMPVARS", 512, IN },
	}
	},
	{ "ICDrawBegin",16,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hic", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "hpal", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "hwnd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "xDst", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{6, "yDst", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{7, "dxDst", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{8, "dyDst", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{9, "lpbi", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagBITMAPINFOHEADER", 320, IN },
		{10, "xSrc", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{11, "ySrc", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{12, "dxSrc", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{13, "dySrc", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{14, "dwRate", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{15, "dwScale", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DrawDibProfileDisplay",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "lpbi", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagBITMAPINFOHEADER", 320, IN },
	}
	},
	{ "VideoForWindowsVersion",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "ICGetInfo",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hic", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "picinfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ICINFO", 4544, IN },
		{2, "cb", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ICDraw",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hic", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lpFormat", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "lpData", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{4, "cbData", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "lTime", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DrawDibStop",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ICClose",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hic", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "ICImageCompress",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hic", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "uiFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "lpbiIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagBITMAPINFO", 352, IN },
		{3, "lpBits", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{4, "lpbiOut", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagBITMAPINFO", 352, IN },
		{5, "lQuality", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{6, "plSize", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "DrawDibEnd",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DrawDibGetPalette",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hdd", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
};

int msvfw32arraySize = (sizeof(msvfw32_info) / sizeof(msvfw32_info[0]));