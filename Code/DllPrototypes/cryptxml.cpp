#include "../Pyrebox_libcalls.h"

libcall_info_t cryptxml_info[] = {
	{ "CryptXmlSetHMACSecret",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hSignature", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "pbSecret", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "cbSecret", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CryptXmlClose",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hCryptXml", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "CryptXmlGetStatus",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hCryptXml", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "pStatus", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CRYPT_XML_STATUS", 96, IN },
	}
	},
	{ "CryptXmlDigestReference",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hReference", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pDataProviderIn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CRYPT_XML_DATA_PROVIDER", 128, IN },
	}
	},
	{ "CryptXmlEncode",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hCryptXml", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "dwCharset", NKT_DBOBJCLASS_Enumeration, "CRYPT_XML_CHARSET", 32, IN },
		{2, "rgProperty", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CRYPT_XML_PROPERTY", 96, IN },
		{3, "cProperty", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "pvCallbackState", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
		{5, "pfnWrite", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
	}
	},
	{ "CryptXmlSign",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hSignature", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "hKey", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwKeySpec", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "dwKeyInfoSpec", NKT_DBOBJCLASS_Enumeration, "CRYPT_XML_KEYINFO_SPEC", 32, IN },
		{5, "pvKeyInfoSpec", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{6, "pSignatureMethod", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CRYPT_XML_ALGORITHM", 160, IN },
		{7, "pCanonicalization", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CRYPT_XML_ALGORITHM", 160, IN },
	}
	},
	{ "CryptXmlGetTransforms",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ppConfig", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_CRYPT_XML_TRANSFORM_CHAIN_CONFIG", 96, IN },
	}
	},
	{ "CryptXmlEnumAlgorithmInfo",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "dwGroupId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pvArg", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "pfnEnumAlgInfo", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
	}
	},
	{ "CryptXmlGetAlgorithmInfo",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pXmlAlgorithm", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CRYPT_XML_ALGORITHM", 160, IN },
		{1, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "ppAlgInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_CRYPT_XML_ALGORITHM_INFO", 320, INOUT },
	}
	},
	{ "CryptXmlCreateReference",9,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hCryptXml", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "wszId", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "wszURI", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{4, "wszType", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{5, "pDigestMethod", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CRYPT_XML_ALGORITHM", 160, IN },
		{6, "cTransform", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{7, "rgTransform", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CRYPT_XML_ALGORITHM", 160, IN },
		{8, "phReference", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, INOUT },
	}
	},
	{ "CryptXmlOpenToDecode",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pConfig", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CRYPT_XML_TRANSFORM_CHAIN_CONFIG", 96, IN },
		{1, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "rgProperty", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CRYPT_XML_PROPERTY", 96, IN },
		{3, "cProperty", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "pEncoded", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CRYPT_XML_BLOB", 96, IN },
		{5, "phCryptXml", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
	}
	},
	{ "CryptXmlOpenToEncode",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pConfig", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CRYPT_XML_TRANSFORM_CHAIN_CONFIG", 96, IN },
		{1, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "wszId", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "rgProperty", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CRYPT_XML_PROPERTY", 96, IN },
		{4, "cProperty", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "pEncoded", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CRYPT_XML_BLOB", 96, IN },
		{6, "phSignature", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
	}
	},
	{ "CryptXmlGetDocContext",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hCryptXml", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "ppStruct", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_CRYPT_XML_DOC_CTXT", 160, INOUT },
	}
	},
	{ "CryptXmlVerifySignature",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hSignature", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "hKey", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "CryptXmlImportPublicKey",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pKeyValue", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CRYPT_XML_KEY_VALUE", 480, IN },
		{2, "phKey", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, INOUT },
	}
	},
	{ "CryptXmlAddObject",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hSignatureOrObject", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "rgProperty", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CRYPT_XML_PROPERTY", 96, IN },
		{3, "cProperty", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "pEncoded", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CRYPT_XML_BLOB", 96, IN },
		{5, "ppObject", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_CRYPT_XML_OBJECT", 320, INOUT },
	}
	},
	{ "CryptXmlGetSignature",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hCryptXml", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "ppStruct", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_CRYPT_XML_SIGNATURE", 800, INOUT },
	}
	},
	{ "CryptXmlGetReference",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hCryptXml", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "ppStruct", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_CRYPT_XML_REFERENCE", 448, INOUT },
	}
	},
	{ "CryptXmlFindAlgorithmInfo",4,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CRYPT_XML_ALGORITHM_INFO", 320, INOUT },
		{0, "dwFindByType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pvFindBy", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "dwGroupId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
};

int cryptxmlarraySize = (sizeof(cryptxml_info) / sizeof(cryptxml_info[0]));