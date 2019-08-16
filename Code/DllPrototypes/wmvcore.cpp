#include "../Pyrebox_libcalls.h"

libcall_info_t wmvcore_info[] = {
	{ "DllRegisterServer",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "WMCreateBackupRestorer",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pCallback", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 32, IN },
		{1, "ppBackup", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IWMLicenseBackup", 32, IN },
	}
	},
	{ "WMCreateReader",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pUnkCert", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 32, IN },
		{1, "dwRights", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "ppReader", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IWMReader", 32, IN },
	}
	},
	{ "WMCreateWriterPushSink",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ppSink", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IWMWriterPushSink", 32, IN },
	}
	},
	{ "WMIsContentProtected",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pwszFileName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "pfIsProtected", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "WMCreateWriter",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pUnkCert", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 32, IN },
		{1, "ppWriter", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IWMWriter", 32, IN },
	}
	},
	{ "WMCreateEditor",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ppEditor", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IWMMetadataEditor", 32, IN },
	}
	},
	{ "WMCreateIndexer",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ppIndexer", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IWMIndexer", 32, IN },
	}
	},
	{ "WMCreateWriterFileSink",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ppSink", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IWMWriterFileSink", 32, IN },
	}
	},
	{ "WMCreateProfileManager",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ppProfileManager", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IWMProfileManager", 32, IN },
	}
	},
	{ "WMCreateWriterNetworkSink",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ppSink", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IWMWriterNetworkSink", 32, IN },
	}
	},
	{ "WMCreateSyncReader",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pUnkCert", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IUnknown", 32, IN },
		{1, "dwRights", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "ppSyncReader", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IWMSyncReader", 32, IN },
	}
	},
};

int wmvcorearraySize = (sizeof(wmvcore_info) / sizeof(wmvcore_info[0]));