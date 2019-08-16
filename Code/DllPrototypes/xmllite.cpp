#include "../Pyrebox_libcalls.h"

libcall_info_t xmllite_info[] = {
	{ "CreateXmlWriterOutputWithEncodingName",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pOutputStream", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 32, IN },
		{1, "pMalloc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IMalloc", 32, IN },
		{2, "pwszEncodingName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "ppOutput", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IUnknown", 32, IN },
	}
	},
	{ "CreateXmlReader",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{1, "ppvObject", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
		{2, "pMalloc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IMalloc", 32, IN },
	}
	},
	{ "CreateXmlReaderInputWithEncodingCodePage",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pInputStream", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 32, IN },
		{1, "pMalloc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IMalloc", 32, IN },
		{2, "nEncodingCodePage", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "fEncodingHint", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "pwszBaseUri", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{5, "ppInput", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IUnknown", 32, IN },
	}
	},
	{ "CreateXmlWriterOutputWithEncodingCodePage",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pOutputStream", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 32, IN },
		{1, "pMalloc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IMalloc", 32, IN },
		{2, "nEncodingCodePage", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "ppOutput", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IUnknown", 32, IN },
	}
	},
	{ "CreateXmlReaderInputWithEncodingName",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pInputStream", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 32, IN },
		{1, "pMalloc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IMalloc", 32, IN },
		{2, "pwszEncodingName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "fEncodingHint", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "pwszBaseUri", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{5, "ppInput", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IUnknown", 32, IN },
	}
	},
	{ "CreateXmlWriter",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{1, "ppvObject", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
		{2, "pMalloc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IMalloc", 32, IN },
	}
	},
};

int xmllitearraySize = (sizeof(xmllite_info) / sizeof(xmllite_info[0]));