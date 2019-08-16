#include "../Pyrebox_libcalls.h"

libcall_info_t MSImg32_info[] = {
	{ "GradientFill",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pVertex", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_TRIVERTEX", 128, IN },
		{2, "nVertex", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pMesh", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{4, "nMesh", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "ulMode", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "AlphaBlend",11,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdcDest", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "xoriginDest", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "yoriginDest", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "wDest", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "hDest", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{5, "hdcSrc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "xoriginSrc", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{7, "yoriginSrc", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{8, "wSrc", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{9, "hSrc", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{10, "ftn", NKT_DBOBJCLASS_Struct, "_BLENDFUNCTION", 32, IN },
	}
	},
	{ "TransparentBlt",11,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hdcDest", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "xoriginDest", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "yoriginDest", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "wDest", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "hDest", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{5, "hdcSrc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "xoriginSrc", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{7, "yoriginSrc", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{8, "wSrc", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{9, "hSrc", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{10, "crTransparent", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
};

int MSImg32arraySize = (sizeof(MSImg32_info) / sizeof(MSImg32_info[0]));