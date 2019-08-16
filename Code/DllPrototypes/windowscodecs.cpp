#include "../Pyrebox_libcalls.h"

libcall_info_t windowscodecs_info[] = {
	{ "WICMapSchemaToName",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "guidMetadataFormat", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{1, "pwzSchema", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "cchName", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "wzName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{4, "pcchActual", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "WICMatchMetadataContent",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "guidContainerFormat", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{1, "pguidVendor", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{2, "pIStream", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IStream", 32, IN },
		{3, "pguidMetadataFormat", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
	}
	},
	{ "WICMapShortNameToGuid",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "wzName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "pguid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
	}
	},
	{ "WICConvertBitmapSource",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "dstFormat", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{1, "pISrc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IWICBitmapSource", 32, IN },
		{2, "ppIDst", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IWICBitmapSource", 32, IN },
	}
	},
	{ "WICMapGuidToShortName",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "guid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{1, "cchName", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "wzName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "pcchActual", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "WICGetMetadataContentSize",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "guidContainerFormat", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{1, "pIWriter", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IWICMetadataWriter", 32, IN },
		{2, "pcbSize", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "_ULARGE_INTEGER", 64, IN },
	}
	},
	{ "WICSerializeMetadataContent",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "guidContainerFormat", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{1, "pIWriter", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IWICMetadataWriter", 32, IN },
		{2, "dwPersistOptions", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pIStream", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IStream", 32, IN },
	}
	},
	{ "WICCreateBitmapFromSectionEx",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "width", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "height", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pixelFormat", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{3, "hSection", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "stride", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "offset", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "desiredAccessLevel", NKT_DBOBJCLASS_Enumeration, "WICSectionAccessLevel", 32, IN },
		{7, "ppIBitmap", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IWICBitmap", 32, IN },
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
	{ "WICCreateBitmapFromSection",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "width", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "height", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pixelFormat", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{3, "hSection", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "stride", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "offset", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "ppIBitmap", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IWICBitmap", 32, IN },
	}
	},
};

int windowscodecsarraySize = (sizeof(windowscodecs_info) / sizeof(windowscodecs_info[0]));