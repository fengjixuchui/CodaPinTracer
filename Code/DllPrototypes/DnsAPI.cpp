#include "../Pyrebox_libcalls.h"

libcall_info_t DnsAPI_info[] = {
	{ "DnsFreeProxyName",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "proxyName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "DnsModifyRecordsInSet_A",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pAddRecords", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DnsRecordW", 512, IN },
		{1, "pDeleteRecords", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DnsRecordW", 512, IN },
		{2, "Options", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "hCredentials", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "pExtraList", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
		{5, "pReserved", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
	}
	},
	{ "DnsModifyRecordsInSet_W",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pAddRecords", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DnsRecordW", 512, IN },
		{1, "pDeleteRecords", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DnsRecordW", 512, IN },
		{2, "Options", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "hCredentials", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "pExtraList", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
		{5, "pReserved", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
	}
	},
	{ "DnsExtractRecordsFromMessage_UTF8",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pDnsBuffer", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DNS_MESSAGE_BUFFER", 104, IN },
		{1, "wMessageLength", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{2, "ppRecord", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_DnsRecordW", 512, INOUT },
	}
	},
	{ "DnsWriteQuestionToBuffer_W",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pDnsBuffer", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DNS_MESSAGE_BUFFER", 104, INOUT },
		{1, "pdwBufferSize", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{2, "pszName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "wType", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{4, "Xid", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{5, "fRecursionDesired", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DnsRecordCopyEx",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DnsRecordW", 512, INOUT },
		{0, "pRecord", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DnsRecordW", 512, IN },
		{1, "CharSetIn", NKT_DBOBJCLASS_Enumeration, "_DNS_CHARSET", 32, IN },
		{2, "CharSetOut", NKT_DBOBJCLASS_Enumeration, "_DNS_CHARSET", 32, IN },
	}
	},
	{ "DnsQuery_A",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pszName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "wType", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{2, "Options", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pExtra", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
		{4, "ppQueryResults", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_DnsRecordW", 512, IN },
		{5, "pReserved", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, INOUT },
	}
	},
	{ "DnsQuery_W",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pszName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "wType", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{2, "Options", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pExtra", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
		{4, "ppQueryResults", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_DnsRecordW", 512, IN },
		{5, "pReserved", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, INOUT },
	}
	},
	{ "DnsQueryConfig",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Config", NKT_DBOBJCLASS_Enumeration, "DNS_CONFIG_TYPE", 32, IN },
		{1, "Flag", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pwsAdapterName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "pReserved", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{4, "pBuffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
		{5, "pBufLen", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "DnsReplaceRecordSetA",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pReplaceSet", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DnsRecordW", 512, IN },
		{1, "Options", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "hContext", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pExtraInfo", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
		{4, "pReserved", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
	}
	},
	{ "DnsReplaceRecordSetW",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pReplaceSet", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DnsRecordW", 512, IN },
		{1, "Options", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "hContext", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pExtraInfo", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
		{4, "pReserved", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
	}
	},
	{ "DnsFree",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "pData", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "FreeType", NKT_DBOBJCLASS_Enumeration, "DNS_FREE_TYPE", 32, IN },
	}
	},
	{ "DnsAcquireContextHandle_A",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "CredentialFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "Credentials", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "pContext", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "DnsModifyRecordsInSet_UTF8",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pAddRecords", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DnsRecordW", 512, IN },
		{1, "pDeleteRecords", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DnsRecordW", 512, IN },
		{2, "Options", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "hCredentials", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "pExtraList", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
		{5, "pReserved", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
	}
	},
	{ "DnsAcquireContextHandle_W",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "CredentialFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "Credentials", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "pContext", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "DnsGetProxyInformation",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "hostName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "proxyInformation", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "DNS_PROXY_INFORMATION", 96, INOUT },
		{2, "defaultProxyInformation", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "DNS_PROXY_INFORMATION", 96, INOUT },
		{3, "completionRoutine", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{4, "completionContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "DnsValidateName_A",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pszName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "Format", NKT_DBOBJCLASS_Enumeration, "_DNS_NAME_FORMAT", 32, IN },
	}
	},
	{ "DnsReleaseContextHandle",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "hContext", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DnsNameCompare_A",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pName1", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "pName2", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "DnsNameCompare_W",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pName1", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "pName2", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "DnsValidateName_W",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pszName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "Format", NKT_DBOBJCLASS_Enumeration, "_DNS_NAME_FORMAT", 32, IN },
	}
	},
	{ "DnsQuery_UTF8",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pszName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "wType", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{2, "Options", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pExtra", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
		{4, "ppQueryResults", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_DnsRecordW", 512, IN },
		{5, "pReserved", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, INOUT },
	}
	},
	{ "DnsRecordSetDetach",1,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DnsRecordW", 512, INOUT },
		{0, "pRecordList", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DnsRecordW", 512, IN },
	}
	},
	{ "DnsReplaceRecordSetUTF8",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pReplaceSet", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DnsRecordW", 512, IN },
		{1, "Options", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "hContext", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pExtraInfo", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
		{4, "pReserved", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
	}
	},
	{ "DnsRecordCompare",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pRecord1", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DnsRecordW", 512, IN },
		{1, "pRecord2", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DnsRecordW", 512, IN },
	}
	},
	{ "DnsValidateServerStatus",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "server", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "sockaddr", 128, IN },
		{1, "queryName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "serverStatus", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "DnsWriteQuestionToBuffer_UTF8",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pDnsBuffer", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DNS_MESSAGE_BUFFER", 104, INOUT },
		{1, "pdwBufferSize", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{2, "pszName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "wType", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{4, "Xid", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{5, "fRecursionDesired", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DnsRecordSetCopyEx",3,
	{ 
		{-1, "Return value", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DnsRecordW", 512, INOUT },
		{0, "pRecordSet", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DnsRecordW", 512, IN },
		{1, "CharSetIn", NKT_DBOBJCLASS_Enumeration, "_DNS_CHARSET", 32, IN },
		{2, "CharSetOut", NKT_DBOBJCLASS_Enumeration, "_DNS_CHARSET", 32, IN },
	}
	},
	{ "DnsValidateName_UTF8",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pszName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "Format", NKT_DBOBJCLASS_Enumeration, "_DNS_NAME_FORMAT", 32, IN },
	}
	},
	{ "DnsExtractRecordsFromMessage_W",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pDnsBuffer", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DNS_MESSAGE_BUFFER", 104, IN },
		{1, "wMessageLength", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
		{2, "ppRecord", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_DnsRecordW", 512, INOUT },
	}
	},
	{ "DnsRecordSetCompare",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pRR1", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DnsRecordW", 512, INOUT },
		{1, "pRR2", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DnsRecordW", 512, INOUT },
		{2, "ppDiff1", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_DnsRecordW", 512, INOUT },
		{3, "ppDiff2", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_DnsRecordW", 512, INOUT },
	}
	},
};

int DnsAPIarraySize = (sizeof(DnsAPI_info) / sizeof(DnsAPI_info[0]));