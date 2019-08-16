#include "../Pyrebox_libcalls.h"

libcall_info_t fontsub_info[] = {
	{ "CreateFontPackage",17,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "puchSrcBuffer", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "ulSrcBufferSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "ppuchFontPackageBuffer", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_PointerPointer, 0, 1, IN },
		{3, "pulFontPackageBufferSize", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{4, "pulBytesWritten", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{5, "usFlag", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{6, "usTTCIndex", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{7, "usSubsetFormat", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{8, "usSubsetLanguage", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{9, "usSubsetPlatform", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{10, "usSubsetEncoding", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{11, "pusSubsetKeepList", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{12, "usSubsetListCount", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{13, "lpfnAllocate", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{14, "lpfnReAllocate", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{15, "lpfnFree", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{16, "lpvReserved", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "MergeFontPackage",12,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "puchMergeFontBuffer", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "ulMergeFontBufferSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "puchFontPackageBuffer", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "ulFontPackageBufferSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "ppuchDestBuffer", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_PointerPointer, 0, 1, INOUT },
		{5, "pulDestBufferSize", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{6, "pulBytesWritten", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{7, "usMode", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{8, "lpfnAllocate", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{9, "lpfnReAllocate", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{10, "lpfnFree", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{11, "lpvReserved", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
};

int fontsubarraySize = (sizeof(fontsub_info) / sizeof(fontsub_info[0]));