#include "../Pyrebox_libcalls.h"

libcall_info_t mfreadwrite_info[] = {
	{ "MFCreateSinkWriterFromMediaSink",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pMediaSink", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IMFMediaSink", 32, IN },
		{1, "pAttributes", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IMFAttributes", 32, IN },
		{2, "ppSinkWriter", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IMFSinkWriter", 32, INOUT },
	}
	},
	{ "MFCreateSourceReaderFromMediaSource",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pMediaSource", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IMFMediaSource", 32, IN },
		{1, "pAttributes", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IMFAttributes", 32, IN },
		{2, "ppSourceReader", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IMFSourceReader", 32, INOUT },
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
	{ "MFCreateSourceReaderFromByteStream",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pByteStream", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IMFByteStream", 32, IN },
		{1, "pAttributes", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IMFAttributes", 32, IN },
		{2, "ppSourceReader", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IMFSourceReader", 32, INOUT },
	}
	},
	{ "MFCreateSourceReaderFromURL",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pwszURL", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "pAttributes", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IMFAttributes", 32, IN },
		{2, "ppSourceReader", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IMFSourceReader", 32, INOUT },
	}
	},
	{ "MFCreateSinkWriterFromURL",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pwszOutputURL", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "pByteStream", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IMFByteStream", 32, IN },
		{2, "pAttributes", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IMFAttributes", 32, IN },
		{3, "ppSinkWriter", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IMFSinkWriter", 32, INOUT },
	}
	},
	{ "DllCanUnloadNow",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
	}
	},
};

int mfreadwritearraySize = (sizeof(mfreadwrite_info) / sizeof(mfreadwrite_info[0]));