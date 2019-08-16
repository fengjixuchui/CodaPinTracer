#include "../Pyrebox_libcalls.h"

libcall_info_t propsys_info[] = {
	{ "PropVariantGetInt64Elem",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "propvar", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "tagPROPVARIANT", 128, IN },
		{1, "iElem", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pnVal", NKT_DBFUNDTYPE_SignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, INOUT },
	}
	},
	{ "PSPropertyBag_WriteRECTL",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "propBag", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IPropertyBag", 32, IN },
		{1, "propName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RECTL", 128, IN },
	}
	},
	{ "PSStringFromPropertyKey",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pkey", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_tagpropertykey", 160, IN },
		{1, "psz", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
		{2, "cch", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "InitPropVariantFromInt64Vector",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "prgn", NKT_DBFUNDTYPE_SignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, IN },
		{1, "cElems", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "ppropvar", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPROPVARIANT", 128, INOUT },
	}
	},
	{ "StgDeserializePropVariant",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pprop", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagSERIALIZEDPROPERTYVALUE", 64, IN },
		{1, "cbMax", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "ppropvar", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPROPVARIANT", 128, IN },
	}
	},
	{ "PSCoerceToCanonicalValue",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "key", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_tagpropertykey", 160, IN },
		{1, "ppropvar", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPROPVARIANT", 128, INOUT },
	}
	},
	{ "PSCreateDelayedMultiplexPropertyStore",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "flags", NKT_DBOBJCLASS_Enumeration, "GETPROPERTYSTOREFLAGS", 32, IN },
		{1, "pdpsf", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IDelayedPropertyStoreFactory", 32, IN },
		{2, "rgStoreIds", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{3, "cStores", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{5, "ppv", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, INOUT },
	}
	},
	{ "VariantToInt16WithDefault",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedWord, 0, 2, INOUT },
		{0, "varIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "tagVARIANT", 128, IN },
		{1, "iDefault", NKT_DBFUNDTYPE_SignedWord, 0, 2, IN },
	}
	},
	{ "InitPropVariantFromStringAsVector",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "psz", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "ppropvar", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPROPVARIANT", 128, INOUT },
	}
	},
	{ "InitVariantFromInt32Array",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "prgn", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{1, "cElems", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pvar", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 128, INOUT },
	}
	},
	{ "PSPropertyBag_ReadRECTL",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "propBag", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IPropertyBag", 32, IN },
		{1, "propName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RECTL", 128, IN },
	}
	},
	{ "VariantToStringArray",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "var", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "tagVARIANT", 128, IN },
		{1, "prgsz", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, INOUT },
		{2, "crgsz", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pcElem", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "PropVariantToInt16",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "propvarIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "tagPROPVARIANT", 128, IN },
		{1, "piRet", NKT_DBFUNDTYPE_SignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
	}
	},
	{ "PSPropertyBag_WritePOINTL",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "propBag", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IPropertyBag", 32, IN },
		{1, "propName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_POINTL", 64, IN },
	}
	},
	{ "PSPropertyBag_WritePOINTS",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "propBag", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IPropertyBag", 32, IN },
		{1, "propName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPOINTS", 32, IN },
	}
	},
	{ "PropVariantToInt64",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "propvarIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "tagPROPVARIANT", 128, IN },
		{1, "pllRet", NKT_DBFUNDTYPE_SignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, INOUT },
	}
	},
	{ "VariantToString",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "varIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "tagVARIANT", 128, IN },
		{1, "pszBuf", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
		{2, "cchBuf", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "PropVariantToUInt64VectorAlloc",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "propvar", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "tagPROPVARIANT", 128, IN },
		{1, "pprgn", NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_PointerPointer, 0, 8, INOUT },
		{2, "pcElem", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "PropVariantToDouble",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "propvarIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "tagPROPVARIANT", 128, IN },
		{1, "pdblRet", NKT_DBFUNDTYPE_Double | NKT_DBOBJCLASS_Pointer, 0, 8, INOUT },
	}
	},
	{ "InitVariantFromGUIDAsString",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "guid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{1, "pvar", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 128, INOUT },
	}
	},
	{ "PropVariantGetElementCount",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "propvar", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "tagPROPVARIANT", 128, IN },
	}
	},
	{ "PSPropertyBag_ReadBOOL",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "propBag", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IPropertyBag", 32, IN },
		{1, "propName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "value", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "PropVariantGetDoubleElem",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "propvar", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "tagPROPVARIANT", 128, IN },
		{1, "iElem", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pnVal", NKT_DBFUNDTYPE_Double | NKT_DBOBJCLASS_Pointer, 0, 8, INOUT },
	}
	},
	{ "VariantCompare",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "var1", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "tagVARIANT", 128, IN },
		{1, "var2", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "tagVARIANT", 128, IN },
	}
	},
	{ "PSPropertyBag_ReadBSTR",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "propBag", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IPropertyBag", 32, IN },
		{1, "propName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "value", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, IN },
	}
	},
	{ "VariantGetElementCount",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "varIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "tagVARIANT", 128, IN },
	}
	},
	{ "VariantToBoolean",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "varIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "tagVARIANT", 128, IN },
		{1, "pfRet", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "PSPropertyBag_WriteUnknown",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "propBag", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IPropertyBag", 32, IN },
		{1, "propName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "punk", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 32, IN },
	}
	},
	{ "PropVariantToInt32Vector",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "propvar", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "tagPROPVARIANT", 128, IN },
		{1, "prgn", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{2, "crgn", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pcElem", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "InitVariantFromStringArray",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "prgsz", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, IN },
		{1, "cElems", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pvar", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 128, INOUT },
	}
	},
	{ "PSPropertyBag_WriteStr",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "propBag", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IPropertyBag", 32, IN },
		{1, "propName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "value", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "VariantToInt32Array",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "var", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "tagVARIANT", 128, IN },
		{1, "prgn", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{2, "crgn", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pcElem", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "PropVariantToUInt16VectorAlloc",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "propvar", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "tagPROPVARIANT", 128, IN },
		{1, "pprgn", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_PointerPointer, 0, 2, INOUT },
		{2, "pcElem", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "InitPropVariantFromUInt16Vector",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "prgn", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "cElems", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "ppropvar", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPROPVARIANT", 128, INOUT },
	}
	},
	{ "PSCreateSimplePropertyChange",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "flags", NKT_DBOBJCLASS_Enumeration, "PKA_FLAGS", 32, IN },
		{1, "key", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_tagpropertykey", 160, IN },
		{2, "propvar", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "tagPROPVARIANT", 128, IN },
		{3, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{4, "ppv", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, INOUT },
	}
	},
	{ "DllRegisterServer",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "PSUnregisterPropertySchema",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pszPath", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "InitPropVariantFromGUIDAsString",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "guid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{1, "ppropvar", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPROPVARIANT", 128, INOUT },
	}
	},
	{ "InitVariantFromResource",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hinst", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "id", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pvar", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 128, INOUT },
	}
	},
	{ "PropVariantGetUInt64Elem",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "propvar", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "tagPROPVARIANT", 128, IN },
		{1, "iElem", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pnVal", NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, INOUT },
	}
	},
	{ "PropVariantToInt64WithDefault",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedQuadWord, 0, 8, INOUT },
		{0, "propvarIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "tagPROPVARIANT", 128, IN },
		{1, "llDefault", NKT_DBFUNDTYPE_SignedQuadWord, 0, 8, IN },
	}
	},
	{ "PropVariantGetFileTimeElem",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "propvar", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "tagPROPVARIANT", 128, IN },
		{1, "iElem", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pftVal", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_FILETIME", 64, INOUT },
	}
	},
	{ "VariantToBooleanArray",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "var", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "tagVARIANT", 128, IN },
		{1, "prgf", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{2, "crgn", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pcElem", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "VariantToPropVariant",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pVar", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 128, IN },
		{1, "pPropVar", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPROPVARIANT", 128, INOUT },
	}
	},
	{ "InitVariantFromStrRet",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pstrret", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_STRRET", 2112, IN },
		{1, "pidl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ITEMIDLIST", 24, IN },
		{2, "pvar", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 128, INOUT },
	}
	},
	{ "PropVariantToUInt64Vector",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "propvar", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "tagPROPVARIANT", 128, IN },
		{1, "prgn", NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, INOUT },
		{2, "crgn", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pcElem", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "InitPropVariantFromFileTimeVector",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "prgft", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_FILETIME", 64, IN },
		{1, "cElems", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "ppropvar", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPROPVARIANT", 128, INOUT },
	}
	},
	{ "PSGetImageReferenceForValue",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "propkey", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_tagpropertykey", 160, IN },
		{1, "propvar", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "tagPROPVARIANT", 128, IN },
		{2, "ppszImageRes", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, IN },
	}
	},
	{ "VariantToGUID",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "varIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "tagVARIANT", 128, IN },
		{1, "pguid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, INOUT },
	}
	},
	{ "PSGetPropertyDescriptionByName",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pszCanonicalName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{2, "ppv", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, INOUT },
	}
	},
	{ "PropVariantToStringVector",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "propvar", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "tagPROPVARIANT", 128, IN },
		{1, "prgsz", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, INOUT },
		{2, "crgsz", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pcElem", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "PSPropertyBag_ReadDWORD",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "propBag", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IPropertyBag", 32, IN },
		{1, "propName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "value", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "PSPropertyBag_WriteSHORT",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "propBag", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IPropertyBag", 32, IN },
		{1, "propName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "value", NKT_DBFUNDTYPE_SignedWord, 0, 2, IN },
	}
	},
	{ "PropVariantGetUInt16Elem",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "propvar", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "tagPROPVARIANT", 128, IN },
		{1, "iElem", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pnVal", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
	}
	},
	{ "VariantGetInt32Elem",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "var", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "tagVARIANT", 128, IN },
		{1, "iElem", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pnVal", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "InitPropVariantFromResource",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hinst", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "id", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "ppropvar", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPROPVARIANT", 128, INOUT },
	}
	},
	{ "PropVariantToStringVectorAlloc",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "propvar", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "tagPROPVARIANT", 128, IN },
		{1, "pprgsz", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer | NKT_DBOBJCLASS_Pointer | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
		{2, "pcElem", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "VariantGetUInt64Elem",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "var", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "tagVARIANT", 128, IN },
		{1, "iElem", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pnVal", NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, INOUT },
	}
	},
	{ "PropVariantToInt16WithDefault",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedWord, 0, 2, INOUT },
		{0, "propvarIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "tagPROPVARIANT", 128, IN },
		{1, "iDefault", NKT_DBFUNDTYPE_SignedWord, 0, 2, IN },
	}
	},
	{ "PSPropertyBag_ReadSHORT",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "propBag", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IPropertyBag", 32, IN },
		{1, "propName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "value", NKT_DBFUNDTYPE_SignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "PSGetNamedPropertyFromPropertyStorage",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "psps", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "cb", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pszName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "ppropvar", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPROPVARIANT", 128, INOUT },
	}
	},
	{ "PSGetPropertyFromPropertyStorage",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "psps", NKT_DBOBJCLASS_Typedef | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "cb", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "rpkey", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_tagpropertykey", 160, IN },
		{3, "ppropvar", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPROPVARIANT", 128, INOUT },
	}
	},
	{ "PSPropertyBag_ReadPOINTL",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "propBag", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IPropertyBag", 32, IN },
		{1, "propName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_POINTL", 64, IN },
	}
	},
	{ "PSPropertyBag_ReadPOINTS",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "propBag", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IPropertyBag", 32, IN },
		{1, "propName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPOINTS", 32, IN },
	}
	},
	{ "VariantToDoubleArrayAlloc",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "var", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "tagVARIANT", 128, IN },
		{1, "pprgn", NKT_DBFUNDTYPE_Double | NKT_DBOBJCLASS_PointerPointer, 0, 8, INOUT },
		{2, "pcElem", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "PSGetPropertySystem",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{1, "ppv", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, INOUT },
	}
	},
	{ "InitPropVariantFromStringVector",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "prgsz", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, IN },
		{1, "cElems", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "ppropvar", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPROPVARIANT", 128, INOUT },
	}
	},
	{ "VariantToUInt32Array",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "var", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "tagVARIANT", 128, IN },
		{1, "prgn", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{2, "crgn", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pcElem", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "PSPropertyBag_WriteDWORD",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "propBag", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IPropertyBag", 32, IN },
		{1, "propName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "PropVariantToInt32VectorAlloc",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "propvar", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "tagPROPVARIANT", 128, IN },
		{1, "pprgn", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_PointerPointer, 0, 4, INOUT },
		{2, "pcElem", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "VariantToInt64ArrayAlloc",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "var", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "tagVARIANT", 128, IN },
		{1, "pprgn", NKT_DBFUNDTYPE_SignedQuadWord | NKT_DBOBJCLASS_PointerPointer, 0, 8, INOUT },
		{2, "pcElem", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "PSPropertyBag_ReadLONG",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "propBag", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IPropertyBag", 32, IN },
		{1, "propName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "value", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "VariantGetBooleanElem",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "var", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "tagVARIANT", 128, IN },
		{1, "iElem", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pfVal", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "PSPropertyBag_WriteStream",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "propBag", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IPropertyBag", 32, IN },
		{1, "propName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IStream", 32, IN },
	}
	},
	{ "PSPropertyBag_ReadULONGLONG",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "propBag", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IPropertyBag", 32, IN },
		{1, "propName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "value", NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, IN },
	}
	},
	{ "PSPropertyBag_Delete",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "propBag", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IPropertyBag", 32, IN },
		{1, "propName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "PSPropertyBag_WriteLONG",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "propBag", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IPropertyBag", 32, IN },
		{1, "propName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "PropVariantGetInt32Elem",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "propvar", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "tagPROPVARIANT", 128, IN },
		{1, "iElem", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pnVal", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "PropVariantToUInt16",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "propvarIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "tagPROPVARIANT", 128, IN },
		{1, "puiRet", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
	}
	},
	{ "InitVariantFromInt64Array",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "prgn", NKT_DBFUNDTYPE_SignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, IN },
		{1, "cElems", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pvar", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 128, INOUT },
	}
	},
	{ "PropVariantToUInt32WithDefault",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "propvarIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "tagPROPVARIANT", 128, IN },
		{1, "ulDefault", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "VariantGetUInt16Elem",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "var", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "tagVARIANT", 128, IN },
		{1, "iElem", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pnVal", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
	}
	},
	{ "PSPropertyKeyFromString",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pszString", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "pkey", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_tagpropertykey", 160, INOUT },
	}
	},
	{ "PropVariantToFileTime",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "propvar", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "tagPROPVARIANT", 128, IN },
		{1, "pstfOut", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "pftOut", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_FILETIME", 64, IN },
	}
	},
	{ "InitPropVariantFromInt16Vector",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "prgn", NKT_DBFUNDTYPE_SignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "cElems", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "ppropvar", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPROPVARIANT", 128, INOUT },
	}
	},
	{ "VariantToUInt64ArrayAlloc",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "var", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "tagVARIANT", 128, IN },
		{1, "pprgn", NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_PointerPointer, 0, 8, INOUT },
		{2, "pcElem", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "PSCreateMultiplexPropertyStore",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "prgpunkStores", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IUnknown", 32, IN },
		{1, "cStores", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{3, "ppv", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, INOUT },
	}
	},
	{ "PropVariantToString",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "propvar", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "tagPROPVARIANT", 128, IN },
		{1, "psz", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
		{2, "cch", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "InitVariantFromUInt32Array",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "prgn", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{1, "cElems", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pvar", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 128, INOUT },
	}
	},
	{ "VariantToDouble",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "varIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "tagVARIANT", 128, IN },
		{1, "pdblRet", NKT_DBFUNDTYPE_Double | NKT_DBOBJCLASS_Pointer, 0, 8, INOUT },
	}
	},
	{ "PropVariantToBooleanVectorAlloc",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "propvar", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "tagPROPVARIANT", 128, IN },
		{1, "pprgf", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_PointerPointer, 0, 4, INOUT },
		{2, "pcElem", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "PSGetPropertyKeyFromName",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pszName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "ppropkey", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_tagpropertykey", 160, INOUT },
	}
	},
	{ "PSGetPropertyDescriptionListFromString",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pszPropList", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{2, "ppv", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, INOUT },
	}
	},
	{ "PSCreatePropertyStoreFromPropertySetStorage",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ppss", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IPropertySetStorage", 32, IN },
		{1, "grfMode", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{3, "ppv", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
	}
	},
	{ "PropVariantToFileTimeVector",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "propvar", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "tagPROPVARIANT", 128, IN },
		{1, "prgft", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_FILETIME", 64, INOUT },
		{2, "crgft", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pcElem", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "PropVariantToInt64Vector",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "propvar", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "tagPROPVARIANT", 128, IN },
		{1, "prgn", NKT_DBFUNDTYPE_SignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, INOUT },
		{2, "crgn", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pcElem", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "VariantToUInt16",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "varIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "tagVARIANT", 128, IN },
		{1, "puiRet", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
	}
	},
	{ "VariantToUInt32",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "varIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "tagVARIANT", 128, IN },
		{1, "pulRet", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "VariantToUInt64",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "varIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "tagVARIANT", 128, IN },
		{1, "pullRet", NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, INOUT },
	}
	},
	{ "VariantToInt32",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "varIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "tagVARIANT", 128, IN },
		{1, "plRet", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "PSPropertyBag_ReadPropertyKey",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "propBag", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IPropertyBag", 32, IN },
		{1, "propName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_tagpropertykey", 160, IN },
	}
	},
	{ "PropVariantToStringAlloc",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "propvar", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "tagPROPVARIANT", 128, IN },
		{1, "ppszOut", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, INOUT },
	}
	},
	{ "InitPropVariantFromUInt32Vector",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "prgn", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{1, "cElems", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "ppropvar", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPROPVARIANT", 128, INOUT },
	}
	},
	{ "InitPropVariantFromStrRet",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pstrret", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_STRRET", 2112, INOUT },
		{1, "pidl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ITEMIDLIST", 24, IN },
		{2, "ppropvar", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPROPVARIANT", 128, INOUT },
	}
	},
	{ "VariantToInt64Array",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "var", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "tagVARIANT", 128, IN },
		{1, "prgn", NKT_DBFUNDTYPE_SignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, INOUT },
		{2, "crgn", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pcElem", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "InitVariantFromBooleanArray",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "prgf", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{1, "cElems", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pvar", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 128, INOUT },
	}
	},
	{ "VariantToUInt16WithDefault",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, INOUT },
		{0, "varIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "tagVARIANT", 128, IN },
		{1, "uiDefault", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
	}
	},
	{ "InitVariantFromFileTime",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pft", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_FILETIME", 64, IN },
		{1, "pvar", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 128, INOUT },
	}
	},
	{ "VariantToUInt32WithDefault",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "varIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "tagVARIANT", 128, IN },
		{1, "ulDefault", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "VariantToInt16ArrayAlloc",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "var", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "tagVARIANT", 128, IN },
		{1, "pprgn", NKT_DBFUNDTYPE_SignedWord | NKT_DBOBJCLASS_PointerPointer, 0, 2, INOUT },
		{2, "pcElem", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "PropVariantGetInt16Elem",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "propvar", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "tagPROPVARIANT", 128, IN },
		{1, "iElem", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pnVal", NKT_DBFUNDTYPE_SignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
	}
	},
	{ "InitPropVariantFromDoubleVector",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "prgn", NKT_DBFUNDTYPE_Double | NKT_DBOBJCLASS_Pointer, 0, 8, IN },
		{1, "cElems", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "ppropvar", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPROPVARIANT", 128, INOUT },
	}
	},
	{ "VariantToStrRet",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "varIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "tagVARIANT", 128, IN },
		{1, "pstrret", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_STRRET", 2112, INOUT },
	}
	},
	{ "PSFormatPropertyValue",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pps", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IPropertyStore", 32, IN },
		{1, "ppd", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IPropertyDescription", 32, IN },
		{2, "pdff", NKT_DBOBJCLASS_Enumeration, "PROPDESC_FORMAT_FLAGS", 32, IN },
		{3, "ppszDisplay", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, INOUT },
	}
	},
	{ "StgSerializePropVariant",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ppropvar", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPROPVARIANT", 128, IN },
		{1, "ppProp", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "tagSERIALIZEDPROPERTYVALUE", 64, IN },
		{2, "pcb", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "PSPropertyBag_ReadInt",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "propBag", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IPropertyBag", 32, IN },
		{1, "propName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "value", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "VariantToUInt16ArrayAlloc",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "var", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "tagVARIANT", 128, IN },
		{1, "pprgn", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_PointerPointer, 0, 2, INOUT },
		{2, "pcElem", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "InitVariantFromDoubleArray",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "prgn", NKT_DBFUNDTYPE_Double | NKT_DBOBJCLASS_Pointer, 0, 8, IN },
		{1, "cElems", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pvar", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 128, INOUT },
	}
	},
	{ "PSPropertyBag_WriteGUID",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "propBag", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IPropertyBag", 32, IN },
		{1, "propName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
	}
	},
	{ "PropVariantToInt32",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "propvarIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "tagPROPVARIANT", 128, IN },
		{1, "plRet", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "PropVariantToUInt32",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "propvarIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "tagPROPVARIANT", 128, IN },
		{1, "pulRet", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "PropVariantToUInt64",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "propvarIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "tagPROPVARIANT", 128, IN },
		{1, "pullRet", NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, INOUT },
	}
	},
	{ "VariantToStringAlloc",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "varIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "tagVARIANT", 128, IN },
		{1, "ppszBuf", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, INOUT },
	}
	},
	{ "InitPropVariantFromFileTime",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pftIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_FILETIME", 64, IN },
		{1, "ppropvar", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPROPVARIANT", 128, INOUT },
	}
	},
	{ "PropVariantToVariant",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pPropVar", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPROPVARIANT", 128, IN },
		{1, "pVar", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 128, INOUT },
	}
	},
	{ "PropVariantToUInt16Vector",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "propvar", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "tagPROPVARIANT", 128, IN },
		{1, "prgn", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
		{2, "crgn", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pcElem", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "PropVariantToDoubleVectorAlloc",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "propvar", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "tagPROPVARIANT", 128, IN },
		{1, "pprgn", NKT_DBFUNDTYPE_Double | NKT_DBOBJCLASS_PointerPointer, 0, 8, INOUT },
		{2, "pcElem", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "PSSetPropertyValue",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pps", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IPropertyStore", 32, IN },
		{1, "ppd", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IPropertyDescription", 32, IN },
		{2, "propvar", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "tagPROPVARIANT", 128, IN },
	}
	},
	{ "PSGetPropertyValue",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pps", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IPropertyStore", 32, IN },
		{1, "ppd", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IPropertyDescription", 32, IN },
		{2, "ppropvar", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPROPVARIANT", 128, INOUT },
	}
	},
	{ "ClearVariantArray",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "pvars", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 128, IN },
		{1, "cvars", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "PropVariantToBooleanWithDefault",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "propvarIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "tagPROPVARIANT", 128, IN },
		{1, "fDefault", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "PSPropertyBag_WritePropertyKey",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "propBag", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IPropertyBag", 32, IN },
		{1, "propName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_tagpropertykey", 160, IN },
	}
	},
	{ "PSLookupPropertyHandlerCLSID",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pszFilePath", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "pclsid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, INOUT },
	}
	},
	{ "PSPropertyBag_ReadStr",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "propBag", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IPropertyBag", 32, IN },
		{1, "propName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "value", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "characterCount", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "PropVariantToInt64VectorAlloc",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "propvar", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "tagPROPVARIANT", 128, IN },
		{1, "pprgn", NKT_DBFUNDTYPE_SignedQuadWord | NKT_DBOBJCLASS_PointerPointer, 0, 8, INOUT },
		{2, "pcElem", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "VariantGetInt64Elem",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "var", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "tagVARIANT", 128, IN },
		{1, "iElem", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pnVal", NKT_DBFUNDTYPE_SignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, INOUT },
	}
	},
	{ "PSGetNameFromPropertyKey",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "propkey", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_tagpropertykey", 160, IN },
		{1, "ppszCanonicalName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, INOUT },
	}
	},
	{ "PSPropertyBag_WriteBOOL",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "propBag", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IPropertyBag", 32, IN },
		{1, "propName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "PSPropertyBag_ReadStream",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "propBag", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IPropertyBag", 32, IN },
		{1, "propName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IStream", 32, IN },
	}
	},
	{ "PropVariantToInt32WithDefault",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "propvarIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "tagPROPVARIANT", 128, IN },
		{1, "lDefault", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "InitPropVariantFromPropVariantVectorElem",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "propvarIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "tagPROPVARIANT", 128, IN },
		{1, "iElem", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "ppropvar", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPROPVARIANT", 128, INOUT },
	}
	},
	{ "VariantToUInt16Array",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "var", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "tagVARIANT", 128, IN },
		{1, "prgn", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
		{2, "crgn", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pcElem", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "PSEnumeratePropertyDescriptions",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "filterOn", NKT_DBOBJCLASS_Enumeration, "PROPDESC_ENUMFILTER", 32, IN },
		{1, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{2, "ppv", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, INOUT },
	}
	},
	{ "PropVariantToUInt64WithDefault",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, INOUT },
		{0, "propvarIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "tagPROPVARIANT", 128, IN },
		{1, "ullDefault", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
	}
	},
	{ "PSCreatePropertyStoreFromObject",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "punk", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 32, IN },
		{1, "grfMode", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{3, "ppv", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
	}
	},
	{ "PropVariantToGUID",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "propvar", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "tagPROPVARIANT", 128, IN },
		{1, "pguid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, INOUT },
	}
	},
	{ "PSCreatePropertyChangeArray",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "rgpropkey", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_tagpropertykey", 160, IN },
		{1, "rgflags", NKT_DBOBJCLASS_Enumeration | NKT_DBOBJCLASS_Pointer, "PKA_FLAGS", 32, IN },
		{2, "rgpropvar", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPROPVARIANT", 128, IN },
		{3, "cChanges", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{5, "ppv", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, INOUT },
	}
	},
	{ "VariantToInt32WithDefault",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "varIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "tagVARIANT", 128, IN },
		{1, "lDefault", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "PSPropertyBag_WriteBSTR",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "propBag", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IPropertyBag", 32, IN },
		{1, "propName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "value", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "PSCreateAdapterFromPropertyStore",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pps", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IPropertyStore", 32, IN },
		{1, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{2, "ppv", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, INOUT },
	}
	},
	{ "InitPropVariantFromBooleanVector",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "prgf", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{1, "cElems", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "ppropvar", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPROPVARIANT", 128, INOUT },
	}
	},
	{ "PSPropertyBag_ReadStrAlloc",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "propBag", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IPropertyBag", 32, IN },
		{1, "propName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "value", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, IN },
	}
	},
	{ "VariantToUInt64Array",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "var", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "tagVARIANT", 128, IN },
		{1, "prgn", NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, INOUT },
		{2, "crgn", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pcElem", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "PropVariantToBooleanVector",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "propvar", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "tagPROPVARIANT", 128, IN },
		{1, "prgf", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{2, "crgf", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pcElem", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "InitPropVariantFromInt32Vector",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "prgn", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{1, "cElems", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "ppropvar", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPROPVARIANT", 128, INOUT },
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
	{ "VariantGetInt16Elem",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "var", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "tagVARIANT", 128, IN },
		{1, "iElem", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pnVal", NKT_DBFUNDTYPE_SignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
	}
	},
	{ "VariantToInt16Array",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "var", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "tagVARIANT", 128, IN },
		{1, "prgn", NKT_DBFUNDTYPE_SignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
		{2, "crgn", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pcElem", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "VariantToFileTime",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "varIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "tagVARIANT", 128, IN },
		{1, "stfOut", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "pftOut", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_FILETIME", 64, IN },
	}
	},
	{ "PropVariantToInt16VectorAlloc",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "propvar", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "tagPROPVARIANT", 128, IN },
		{1, "pprgn", NKT_DBFUNDTYPE_SignedWord | NKT_DBOBJCLASS_PointerPointer, 0, 2, INOUT },
		{2, "pcElem", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "InitPropVariantVectorFromPropVariant",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "propvarSingle", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "tagPROPVARIANT", 128, IN },
		{1, "ppropvarVector", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPROPVARIANT", 128, INOUT },
	}
	},
	{ "PropVariantToUInt16WithDefault",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, INOUT },
		{0, "propvarIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "tagPROPVARIANT", 128, IN },
		{1, "uiDefault", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
	}
	},
	{ "PSFormatForDisplayAlloc",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "key", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_tagpropertykey", 160, IN },
		{1, "propvar", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "tagPROPVARIANT", 128, IN },
		{2, "pdff", NKT_DBOBJCLASS_Enumeration, "PROPDESC_FORMAT_FLAGS", 32, IN },
		{3, "ppszDisplay", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, INOUT },
	}
	},
	{ "PropVariantGetStringElem",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "propvar", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "tagPROPVARIANT", 128, IN },
		{1, "iElem", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "ppszVal", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, INOUT },
	}
	},
	{ "InitVariantFromUInt64Array",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "prgn", NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, IN },
		{1, "cElems", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pvar", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 128, INOUT },
	}
	},
	{ "PSPropertyBag_WriteULONGLONG",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "propBag", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IPropertyBag", 32, IN },
		{1, "propName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "value", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
	}
	},
	{ "VariantToUInt64WithDefault",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, INOUT },
		{0, "varIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "tagVARIANT", 128, IN },
		{1, "ullDefault", NKT_DBFUNDTYPE_UnsignedQuadWord, 0, 8, IN },
	}
	},
	{ "PSPropertyBag_ReadType",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "propBag", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IPropertyBag", 32, IN },
		{1, "propName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "var", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 128, IN },
		{3, "type", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
	}
	},
	{ "PropVariantToBSTR",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "propvar", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "tagPROPVARIANT", 128, IN },
		{1, "pbstrOut", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, INOUT },
	}
	},
	{ "PropVariantToStrRet",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "propvar", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "tagPROPVARIANT", 128, IN },
		{1, "pstrret", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_STRRET", 2112, INOUT },
	}
	},
	{ "PropVariantToDoubleWithDefault",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Double, 0, 8, INOUT },
		{0, "propvarIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "tagPROPVARIANT", 128, IN },
		{1, "dblDefault", NKT_DBFUNDTYPE_Double, 0, 8, IN },
	}
	},
	{ "VariantToStringArrayAlloc",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "var", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "tagVARIANT", 128, IN },
		{1, "pprgsz", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer | NKT_DBOBJCLASS_Pointer | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
		{2, "pcElem", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "PSPropertyBag_WriteInt",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "propBag", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IPropertyBag", 32, IN },
		{1, "propName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "PropVariantToBuffer",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "propvar", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "tagPROPVARIANT", 128, IN },
		{1, "pv", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
		{2, "cb", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "VariantToDosDateTime",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "varIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "tagVARIANT", 128, IN },
		{1, "pwDate", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
		{2, "pwTime", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
	}
	},
	{ "PropVariantToUInt32VectorAlloc",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "propvar", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "tagPROPVARIANT", 128, IN },
		{1, "pprgn", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_PointerPointer, 0, 4, INOUT },
		{2, "pcElem", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "InitPropVariantFromUInt64Vector",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "prgn", NKT_DBFUNDTYPE_UnsignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, IN },
		{1, "cElems", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "ppropvar", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPROPVARIANT", 128, INOUT },
	}
	},
	{ "InitVariantFromVariantArrayElem",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "varIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "tagVARIANT", 128, IN },
		{1, "iElem", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pvar", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 128, INOUT },
	}
	},
	{ "VariantGetDoubleElem",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "var", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "tagVARIANT", 128, IN },
		{1, "iElem", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pnVal", NKT_DBFUNDTYPE_Double | NKT_DBOBJCLASS_Pointer, 0, 8, INOUT },
	}
	},
	{ "PSPropertyBag_ReadUnknown",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "propBag", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IPropertyBag", 32, IN },
		{1, "propName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{3, "ppv", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
	}
	},
	{ "VariantToBooleanWithDefault",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "varIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "tagVARIANT", 128, IN },
		{1, "fDefault", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "PropVariantToInt16Vector",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "propvar", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "tagPROPVARIANT", 128, IN },
		{1, "prgn", NKT_DBFUNDTYPE_SignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
		{2, "crgn", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pcElem", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "PropVariantChangeType",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ppropvarDest", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPROPVARIANT", 128, INOUT },
		{1, "propvarSrc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "tagPROPVARIANT", 128, IN },
		{2, "flags", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "vt", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
	}
	},
	{ "InitVariantFromFileTimeArray",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "prgft", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_FILETIME", 64, IN },
		{1, "cElems", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pvar", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 128, INOUT },
	}
	},
	{ "VariantToBooleanArrayAlloc",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "var", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "tagVARIANT", 128, IN },
		{1, "pprgf", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_PointerPointer, 0, 4, INOUT },
		{2, "pcElem", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "PropVariantCompareEx",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "propvar1", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "tagPROPVARIANT", 128, IN },
		{1, "propvar2", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "tagPROPVARIANT", 128, IN },
		{2, "unit", NKT_DBOBJCLASS_Enumeration, "PROPVAR_COMPARE_UNIT", 32, IN },
		{3, "flags", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "PSGetPropertyDescription",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "propkey", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_tagpropertykey", 160, IN },
		{1, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{2, "ppv", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, INOUT },
	}
	},
	{ "InitVariantFromInt16Array",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "prgn", NKT_DBFUNDTYPE_SignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "cElems", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pvar", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 128, INOUT },
	}
	},
	{ "PropVariantGetUInt32Elem",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "propvar", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "tagPROPVARIANT", 128, IN },
		{1, "iElem", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pnVal", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "VariantGetStringElem",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "var", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "tagVARIANT", 128, IN },
		{1, "iElem", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "ppszVal", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, INOUT },
	}
	},
	{ "VariantToInt16",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "varIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "tagVARIANT", 128, IN },
		{1, "piRet", NKT_DBFUNDTYPE_SignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
	}
	},
	{ "VariantToInt64",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "varIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "tagVARIANT", 128, IN },
		{1, "pllRet", NKT_DBFUNDTYPE_SignedQuadWord | NKT_DBOBJCLASS_Pointer, 0, 8, INOUT },
	}
	},
	{ "PropVariantToStringWithDefault",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
		{0, "propvarIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "tagPROPVARIANT", 128, IN },
		{1, "pszDefault", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "PSCreateMemoryPropertyStore",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{1, "ppv", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, INOUT },
	}
	},
	{ "PSPropertyBag_ReadGUID",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "propBag", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IPropertyBag", 32, IN },
		{1, "propName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
	}
	},
	{ "VariantToInt32ArrayAlloc",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "var", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "tagVARIANT", 128, IN },
		{1, "pprgn", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_PointerPointer, 0, 4, INOUT },
		{2, "pcElem", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "VariantToBuffer",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "varIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "tagVARIANT", 128, IN },
		{1, "pv", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
		{2, "cb", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "PropVariantToUInt32Vector",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "propvar", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "tagPROPVARIANT", 128, IN },
		{1, "prgn", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{2, "crgn", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pcElem", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "PSFormatForDisplay",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "propkey", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_tagpropertykey", 160, IN },
		{1, "propvar", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "tagPROPVARIANT", 128, IN },
		{2, "pdfFlags", NKT_DBOBJCLASS_Enumeration, "PROPDESC_FORMAT_FLAGS", 32, IN },
		{3, "pwszText", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
		{4, "cchText", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "PropVariantToFileTimeVectorAlloc",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "propvar", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "tagPROPVARIANT", 128, IN },
		{1, "pprgft", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_FILETIME", 64, INOUT },
		{2, "pcElem", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "InitVariantFromUInt16Array",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "prgn", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "cElems", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pvar", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 128, INOUT },
	}
	},
	{ "VariantToDoubleWithDefault",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Double, 0, 8, INOUT },
		{0, "varIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "tagVARIANT", 128, IN },
		{1, "dblDefault", NKT_DBFUNDTYPE_Double, 0, 8, IN },
	}
	},
	{ "VariantToUInt32ArrayAlloc",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "var", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "tagVARIANT", 128, IN },
		{1, "pprgn", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_PointerPointer, 0, 4, INOUT },
		{2, "pcElem", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "PSGetItemPropertyHandlerWithCreateObject",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "punkItem", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 32, IN },
		{1, "fReadWrite", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "punkCreateObject", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 32, IN },
		{3, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{4, "ppv", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, INOUT },
	}
	},
	{ "InitPropVariantFromBuffer",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pv", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "cb", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "ppropvar", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPROPVARIANT", 128, INOUT },
	}
	},
	{ "PropVariantToDoubleVector",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "propvar", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "tagPROPVARIANT", 128, IN },
		{1, "prgn", NKT_DBFUNDTYPE_Double | NKT_DBOBJCLASS_Pointer, 0, 8, INOUT },
		{2, "crgn", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pcElem", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "DllCanUnloadNow",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "InitVariantFromBuffer",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pv", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "cb", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pvar", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagVARIANT", 128, INOUT },
	}
	},
	{ "VariantToInt64WithDefault",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedQuadWord, 0, 8, INOUT },
		{0, "varIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "tagVARIANT", 128, IN },
		{1, "llDefault", NKT_DBFUNDTYPE_SignedQuadWord, 0, 8, IN },
	}
	},
	{ "DllUnregisterServer",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "VariantGetUInt32Elem",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "var", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "tagVARIANT", 128, IN },
		{1, "iElem", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pnVal", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "PropVariantToBoolean",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "propvarIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "tagPROPVARIANT", 128, IN },
		{1, "pfRet", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "PSRegisterPropertySchema",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pszPath", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "ClearPropVariantArray",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "rgPropVar", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPROPVARIANT", 128, IN },
		{1, "cVars", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "InitPropVariantFromCLSID",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "clsid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{1, "ppropvar", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagPROPVARIANT", 128, INOUT },
	}
	},
	{ "PropVariantGetBooleanElem",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "propvar", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "tagPROPVARIANT", 128, IN },
		{1, "iElem", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pfVal", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "VariantToStringWithDefault",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
		{0, "varIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "tagVARIANT", 128, IN },
		{1, "pszDefault", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "PSGetItemPropertyHandler",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "punkItem", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 32, IN },
		{1, "fReadWrite", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{3, "ppv", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, INOUT },
	}
	},
	{ "VariantToDoubleArray",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "var", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "tagVARIANT", 128, IN },
		{1, "prgn", NKT_DBFUNDTYPE_Double | NKT_DBOBJCLASS_Pointer, 0, 8, INOUT },
		{2, "crgn", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pcElem", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "PSRefreshPropertySchema",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
	}
	},
};

int propsysarraySize = (sizeof(propsys_info) / sizeof(propsys_info[0]));