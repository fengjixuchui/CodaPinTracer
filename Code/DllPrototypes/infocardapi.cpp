#include "../Pyrebox_libcalls.h"

libcall_info_t infocardapi_info[] = {
	{ "ImportInformationCard",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "fileName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "DllRegisterServer",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "ManageCardSpace",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "GetCryptoTransform",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hSymmetricCrypto", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_INFORMATIONCARD_CRYPTO_HANDLE", 192, IN },
		{1, "mode", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "padding", NKT_DBOBJCLASS_Enumeration, "_PaddingMode", 32, IN },
		{3, "feedbackSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "direction", NKT_DBOBJCLASS_Enumeration, "_Direction", 32, IN },
		{5, "cbIV", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "pIV", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{7, "pphTransform", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_INFORMATIONCARD_CRYPTO_HANDLE", 192, IN },
	}
	},
	{ "VerifyHash",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hCrypto", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_INFORMATIONCARD_CRYPTO_HANDLE", 192, IN },
		{1, "cbHash", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pHash", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "hashAlgOid", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{4, "cbSig", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "pSig", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{6, "pfVerified", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "TransformBlock",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hCrypto", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_INFORMATIONCARD_CRYPTO_HANDLE", 192, IN },
		{1, "cbInData", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pInData", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "pcbOutData", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{4, "ppOutData", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_PointerPointer, 0, 1, IN },
	}
	},
	{ "HashFinal",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hCrypto", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_INFORMATIONCARD_CRYPTO_HANDLE", 192, IN },
		{1, "cbInData", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pInData", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "pcbOutData", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{4, "ppOutData", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_PointerPointer, 0, 1, IN },
	}
	},
	{ "SignHash",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hCrypto", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_INFORMATIONCARD_CRYPTO_HANDLE", 192, IN },
		{1, "cbHash", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pHash", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "hashAlgOid", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{4, "pcbSig", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{5, "ppSig", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_PointerPointer, 0, 1, IN },
	}
	},
	{ "Decrypt",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hCrypto", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_INFORMATIONCARD_CRYPTO_HANDLE", 192, IN },
		{1, "fOAEP", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "cbInData", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pInData", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{4, "pcbOutData", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{5, "ppOutData", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_PointerPointer, 0, 1, IN },
	}
	},
	{ "CloseCryptoHandle",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hCrypto", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_INFORMATIONCARD_CRYPTO_HANDLE", 192, IN },
	}
	},
	{ "HashCore",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hCrypto", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_INFORMATIONCARD_CRYPTO_HANDLE", 192, IN },
		{1, "cbInData", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pInData", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "Encrypt",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hCrypto", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_INFORMATIONCARD_CRYPTO_HANDLE", 192, IN },
		{1, "fOAEP", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "cbInData", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pInData", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{4, "pcbOutData", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{5, "ppOutData", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_PointerPointer, 0, 1, IN },
	}
	},
	{ "FreeToken",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pAllocMemory", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GENERIC_XML_TOKEN", 224, IN },
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
	{ "TransformFinalBlock",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hCrypto", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_INFORMATIONCARD_CRYPTO_HANDLE", 192, IN },
		{1, "cbInData", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pInData", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "pcbOutData", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{4, "ppOutData", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_PointerPointer, 0, 1, IN },
	}
	},
	{ "GenerateDerivedKey",10,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hCrypto", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_INFORMATIONCARD_CRYPTO_HANDLE", 192, IN },
		{1, "cbLabel", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pLabel", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "cbNonce", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "pNonce", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{5, "derivedKeyLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "offset", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{7, "algId", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{8, "pcbKey", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{9, "ppKey", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_PointerPointer, 0, 1, IN },
	}
	},
	{ "GetToken",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "cPolicyChain", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pPolicyChain", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_POLICY_ELEMENT", 192, IN },
		{2, "securityToken", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_GENERIC_XML_TOKEN", 224, IN },
		{3, "phProofTokenCrypto", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_INFORMATIONCARD_CRYPTO_HANDLE", 192, IN },
	}
	},
	{ "GetKeyedHash",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hSymmetricCrypto", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_INFORMATIONCARD_CRYPTO_HANDLE", 192, IN },
		{1, "pphHash", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_INFORMATIONCARD_CRYPTO_HANDLE", 192, IN },
	}
	},
	{ "DllCanUnloadNow",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "DllUnregisterServer",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "GetBrowserToken",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "dwParamType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pParam", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "pcbToken", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{3, "ppToken", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_PointerPointer, 0, 1, IN },
	}
	},
};

int infocardapiarraySize = (sizeof(infocardapi_info) / sizeof(infocardapi_info[0]));