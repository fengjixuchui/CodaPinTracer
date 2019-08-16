#include "../Pyrebox_libcalls.h"

libcall_info_t OpenGL32_info[] = {
	{ "wglGetCurrentContext",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "wglMakeCurrent",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "wglDeleteContext",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "wglUseFontBitmapsW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "wglGetLayerPaletteEntries",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, 0, NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, 0, NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, 0, NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "wglSwapLayerBuffers",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "wglSetLayerPaletteEntries",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, 0, NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, 0, NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, 0, NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "wglUseFontOutlinesA",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, 0, NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{5, 0, NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{6, 0, NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{7, 0, NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GLYPHMETRICSFLOAT", 192, IN },
	}
	},
	{ "wglUseFontOutlinesW",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, 0, NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{5, 0, NKT_DBFUNDTYPE_Float, 0, 4, IN },
		{6, 0, NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{7, 0, NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GLYPHMETRICSFLOAT", 192, IN },
	}
	},
	{ "wglUseFontBitmapsA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "wglGetProcAddress",1,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Typedef, 0, 0, INOUT },
		{0, 0, NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "wglCreateContext",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "wglCreateLayerContext",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, 0, NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "wglRealizeLayerPalette",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, 0, NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, 0, NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "wglGetCurrentDC",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "wglDescribeLayerPlane",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, 0, NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, 0, NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, 0, NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagLAYERPLANEDESCRIPTOR", 256, IN },
	}
	},
	{ "wglCopyContext",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "wglShareLists",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "wglSwapMultipleBuffers",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, 0, NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, 0, NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WGLSWAP", 64, IN },
	}
	},
};

int OpenGL32arraySize = (sizeof(OpenGL32_info) / sizeof(OpenGL32_info[0]));