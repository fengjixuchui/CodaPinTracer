#include "../Pyrebox_libcalls.h"

libcall_info_t esent_info[] = {
	{ "JetGetAttachInfoInstanceA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "instance", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "szzDatabases", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "cbMax", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pcbActual", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "JetGetAttachInfoInstanceW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "instance", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "szzDatabases", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "cbMax", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pcbActual", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "JetSetDatabaseSizeW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sesid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "szDatabaseName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "cpg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pcpgReal", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "JetDetachDatabase2A",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sesid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "szFilename", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "grbit", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "JetDetachDatabase2W",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sesid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "szFilename", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "grbit", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "JetGetTableIndexInfoA",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sesid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "tableid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "szIndexName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "pvResult", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{4, "cbResult", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "InfoLevel", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "JetGetTableIndexInfoW",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sesid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "tableid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "szIndexName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "pvResult", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{4, "cbResult", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "InfoLevel", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "JetOSSnapshotAbort",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "snapId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "grbit", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "JetReadFile",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hfFile", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pv", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "cb", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pcbActual", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "JetCreateInstance2A",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pinstance", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{1, "szInstanceName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "szDisplayName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "grbit", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "JetGetColumnInfoA",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sesid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dbid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "szTableName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "pColumnNameOrId", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{4, "pvResult", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{5, "cbMax", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "InfoLevel", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "JetDefragmentA",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sesid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dbid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "szTableName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "pcPasses", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{4, "pcSeconds", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{5, "grbit", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "JetSetCurrentIndex2W",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sesid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "tableid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "szIndexName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "grbit", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "JetSetCurrentIndex4A",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sesid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "tableid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "szIndexName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "pindexid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagJET_INDEXID", 128, IN },
		{4, "grbit", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "itagSequence", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "JetIndexRecordCount",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sesid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "tableid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pcrec", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{3, "crecMax", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "JetGetRecordSize",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sesid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "tableid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "precsize", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "JET_RECSIZE", 512, IN },
		{3, "grbit", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "JetCreateIndex2W",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sesid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "tableid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pindexcreate", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagJET_INDEXCREATE_W", 384, IN },
		{3, "cIndexCreate", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "JetEndExternalBackup",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "JetCreateTableColumnIndexA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sesid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dbid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "ptablecreate", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagJET_TABLECREATE_A", 384, IN },
	}
	},
	{ "JetCreateTableColumnIndexW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sesid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dbid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "ptablecreate", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagJET_TABLECREATE_W", 384, IN },
	}
	},
	{ "JetEndExternalBackupInstance2",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "instance", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "grbit", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "JetRetrieveColumn",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sesid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "tableid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "columnid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pvData", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{4, "cbData", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "pcbActual", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{6, "grbit", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{7, "pretinfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "JET_RETINFO", 128, IN },
	}
	},
	{ "JetGetDatabaseInfoA",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sesid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dbid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pvResult", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "cbMax", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "InfoLevel", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "JetGetDatabaseInfoW",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sesid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dbid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pvResult", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "cbMax", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "InfoLevel", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "JetGetObjectInfoW",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sesid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dbid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "objtyp", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "szContainerName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{4, "szObjectName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{5, "pvResult", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{6, "cbMax", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{7, "InfoLevel", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "JetTerm2",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "instance", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "grbit", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "JetIdle",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sesid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "grbit", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "JetOSSnapshotFreezeA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "snapId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pcInstanceInfo", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{2, "paInstanceInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_JET_INSTANCE_INFO_A", 192, IN },
		{3, "grbit", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "JetOSSnapshotFreezeW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "snapId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pcInstanceInfo", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{2, "paInstanceInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_JET_INSTANCE_INFO_W", 192, IN },
		{3, "grbit", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "JetGetLock",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sesid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "tableid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "grbit", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "JetEnableMultiInstanceA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "psetsysparam", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "JET_SETSYSPARAM_A", 128, IN },
		{1, "csetsysparam", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pcsetsucceed", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "JetGetAttachInfoA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "szzDatabases", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "cbMax", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pcbActual", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "JetGetAttachInfoW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "wzzDatabases", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "cbMax", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pcbActual", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "JetCreateDatabase2A",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sesid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "szFilename", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "cpgDatabaseSizeMax", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pdbid", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{4, "grbit", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "JetCloseFileInstance",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "instance", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hfFile", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "JetEndSession",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sesid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "grbit", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "JetGetRecordSize2",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sesid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "tableid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "precsize", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "JET_RECSIZE2", 704, IN },
		{3, "grbit", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "JetCreateTableColumnIndex2A",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sesid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dbid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "ptablecreate", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagJET_TABLECREATE2_A", 448, IN },
	}
	},
	{ "JetCreateTableColumnIndex2W",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sesid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dbid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "ptablecreate", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagJET_TABLECREATE2_W", 448, IN },
	}
	},
	{ "JetCreateTableColumnIndex3A",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sesid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dbid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "ptablecreate", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagJET_TABLECREATE3_A", 544, IN },
	}
	},
	{ "JetCreateTableColumnIndex3W",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sesid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dbid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "ptablecreate", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagJET_TABLECREATE3_W", 544, IN },
	}
	},
	{ "JetUpdate2",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sesid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "tableid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pvBookmark", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "cbBookmark", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "pcbActual", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{5, "grbit", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "JetBeginExternalBackup",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "grbit", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "JetReadFileInstance",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "instance", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hfFile", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pv", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "cb", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "pcbActual", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "JetInit",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pinstance", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "JetAttachDatabaseA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sesid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "szFilename", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "grbit", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "JetAttachDatabaseW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sesid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "szFilename", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "grbit", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "JetEscrowUpdate",9,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sesid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "tableid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "columnid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pv", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{4, "cbMax", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "pvOld", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{6, "cbOldMax", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{7, "pcbOldActual", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{8, "grbit", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "JetRetrieveKey",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sesid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "tableid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pvKey", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "cbMax", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "pcbActual", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{5, "grbit", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "JetTruncateLog",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "JetGetLogInfoW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "szzLogs", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "cbMax", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pcbActual", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "JetCommitTransaction",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sesid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "grbit", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "JetOSSnapshotEnd",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "snapId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "grbit", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "JetOpenFileW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "szFileName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "phfFile", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{2, "pulFileSizeLow", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{3, "pulFileSizeHigh", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "JetPrereadKeys",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sesid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "tableid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "rgpvKeys", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
		{3, "rgcbKeys", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{4, "ckeys", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{5, "pckeysPreread", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{6, "grbit", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "JetGotoPosition",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sesid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "tableid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "precpos", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "JET_RECPOS", 128, IN },
	}
	},
	{ "JetGetInstanceInfoA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pcInstanceInfo", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{1, "paInstanceInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_JET_INSTANCE_INFO_A", 192, IN },
	}
	},
	{ "JetBeginSessionA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "instance", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "psesid", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{2, "szUserName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "szPassword", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "JetBeginSessionW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "instance", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "psesid", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{2, "szUserName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "szPassword", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "JetSetColumns",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sesid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "tableid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "psetcolumn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "JET_SETCOLUMN", 224, IN },
		{3, "csetcolumn", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "JetGetDatabaseFileInfoA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "szDatabaseName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "pvResult", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "cbMax", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "InfoLevel", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "JetGetDatabaseFileInfoW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "szDatabaseName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "pvResult", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "cbMax", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "InfoLevel", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "JetEnumerateColumns",10,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sesid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "tableid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "cEnumColumnId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "rgEnumColumnId", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "JET_ENUMCOLUMNID", 96, IN },
		{4, "pcEnumColumn", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{5, "prgEnumColumn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "JET_ENUMCOLUMN", 128, IN },
		{6, "pfnRealloc", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{7, "pvReallocContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{8, "cbDataMost", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{9, "grbit", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "JetResetSessionContext",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sesid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "JetCloseFile",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hfFile", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "JetDeleteIndexA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sesid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "tableid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "szIndexName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "JetDeleteIndexW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sesid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "tableid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "szIndexName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "JetOpenTempTable2",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sesid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "prgcolumndef", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "JET_COLUMNDEF", 224, IN },
		{2, "ccolumn", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "lcid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "grbit", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "ptableid", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{6, "prgcolumnid", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "JetOpenTempTable3",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sesid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "prgcolumndef", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "JET_COLUMNDEF", 224, IN },
		{2, "ccolumn", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pidxunicode", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagJET_UNICODEINDEX", 64, IN },
		{4, "grbit", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "ptableid", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{6, "prgcolumnid", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "JetDeleteTableA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sesid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dbid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "szTableName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "JetDeleteTableW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sesid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dbid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "szTableName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "JetGetSystemParameterA",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "instance", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "sesid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "paramid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "plParam", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{4, "szParam", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{5, "cbMax", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "JetGetSystemParameterW",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "instance", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "sesid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "paramid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "plParam", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{4, "szParam", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{5, "cbMax", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "JetGetCursorInfo",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sesid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "tableid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pvResult", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "cbMax", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "InfoLevel", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "JetCompactA",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sesid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "szDatabaseSrc", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "szDatabaseDest", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "pfnStatus", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{4, "pconvert", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagCONVERT_A", 64, IN },
		{5, "grbit", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "JetCompactW",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sesid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "szDatabaseSrc", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "szDatabaseDest", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "pfnStatus", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{4, "pconvert", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagCONVERT_W", 64, IN },
		{5, "grbit", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "JetBeginExternalBackupInstance",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "instance", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "grbit", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "JetOpenDatabaseA",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sesid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "szFilename", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "szConnect", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "pdbid", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{4, "grbit", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "JetRestore2A",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sz", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "szDest", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "pfn", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
	}
	},
	{ "JetSetCurrentIndexA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sesid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "tableid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "szIndexName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "JetSetCurrentIndexW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sesid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "tableid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "szIndexName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "JetInit2",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pinstance", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{1, "grbit", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "JetDetachDatabaseA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sesid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "szFilename", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "JetDetachDatabaseW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sesid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "szFilename", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "JetResetTableSequential",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sesid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "tableid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "grbit", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "JetSetCurrentIndex2A",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sesid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "tableid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "szIndexName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "grbit", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "JetSetCurrentIndex3A",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sesid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "tableid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "szIndexName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "grbit", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "itagSequence", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "JetSetCurrentIndex3W",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sesid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "tableid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "szIndexName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "grbit", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "itagSequence", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "JetSetCurrentIndex4W",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sesid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "tableid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "szIndexName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "pindexid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagJET_INDEXID", 128, IN },
		{4, "grbit", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "itagSequence", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "JetStopServiceInstance",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "instance", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "JetGetCurrentIndexA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sesid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "tableid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "szIndexName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "cbIndexName", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "JetGetCurrentIndexW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sesid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "tableid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "szIndexName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "cbIndexName", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "JetGetTruncateLogInfoInstanceW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "instance", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "szzLogs", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "cbMax", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pcbActual", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "JetGetRecordPosition",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sesid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "tableid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "precpos", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "JET_RECPOS", 128, IN },
		{3, "cbRecpos", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "JetTerm",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "instance", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "JetGetLogInfoA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "szzLogs", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "cbMax", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pcbActual", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "JetRegisterCallback",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sesid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "tableid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "cbtyp", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pCallback", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{4, "pvContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{5, "phCallbackId", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "JetRestoreA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sz", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "pfn", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
	}
	},
	{ "JetRestoreW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sz", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "pfn", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
	}
	},
	{ "JetDefragment2A",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sesid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dbid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "szTableName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "pcPasses", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{4, "pcSeconds", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{5, "callback", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{6, "grbit", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "JetDefragment2W",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sesid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dbid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "szTableName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "pcPasses", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{4, "pcSeconds", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{5, "callback", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{6, "grbit", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "JetDefragment3A",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sesid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "szDatabaseName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "szTableName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "pcPasses", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{4, "pcSeconds", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{5, "callback", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{6, "pvContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{7, "grbit", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "JetDefragment3W",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sesid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "szDatabaseName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "szTableName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "pcPasses", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{4, "pcSeconds", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{5, "callback", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{6, "pvContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{7, "grbit", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "JetStopBackup",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "JetOpenDatabaseW",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sesid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "szFilename", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "szConnect", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "pdbid", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{4, "grbit", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "JetAttachDatabase2A",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sesid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "szFilename", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "cpgDatabaseSizeMax", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "grbit", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "JetAttachDatabase2W",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sesid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "szFilename", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "cpgDatabaseSizeMax", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "grbit", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "JetCreateIndexA",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sesid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "tableid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "szIndexName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "grbit", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "szKey", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{5, "cbKey", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "lDensity", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "JetCreateIndexW",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sesid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "tableid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "szIndexName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "grbit", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "szKey", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{5, "cbKey", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "lDensity", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "JetRestore2W",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sz", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "szDest", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "pfn", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
	}
	},
	{ "JetCreateTableA",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sesid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dbid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "szTableName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "lPages", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "lDensity", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "ptableid", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "JetCreateTableW",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sesid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dbid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "szTableName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "lPages", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "lDensity", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "ptableid", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "JetStopService",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "JetGetLS",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sesid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "tableid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pls", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{3, "grbit", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "JetBeginTransaction2",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sesid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "grbit", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "JetRestoreInstanceA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "instance", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "sz", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "szDest", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "pfn", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
	}
	},
	{ "JetRestoreInstanceW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "instance", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "sz", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "szDest", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "pfn", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
	}
	},
	{ "JetUpdate",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sesid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "tableid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pvBookmark", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "cbBookmark", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "pcbActual", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "JetOSSnapshotTruncateLogInstance",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "snapId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "instance", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "grbit", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "JetGotoBookmark",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sesid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "tableid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pvBookmark", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "cbBookmark", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "JetMove",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sesid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "tableid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "cRow", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "grbit", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "JetGetIndexInfoW",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sesid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dbid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "szTableName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "szIndexName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{4, "pvResult", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{5, "cbResult", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "InfoLevel", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "JetGetInstanceInfoW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pcInstanceInfo", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{1, "paInstanceInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_JET_INSTANCE_INFO_W", 192, IN },
	}
	},
	{ "JetGetColumnInfoW",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sesid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dbid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "szTableName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "pwColumnNameOrId", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{4, "pvResult", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{5, "cbMax", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "InfoLevel", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "JetDefragmentW",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sesid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dbid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "szTableName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "pcPasses", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{4, "pcSeconds", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{5, "grbit", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "JetOSSnapshotPrepareInstance",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "snapId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "instance", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "grbit", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "JetDupSession",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sesid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "psesid", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "JetConfigureProcessForCrashDump",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "grbit", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "JetBeginTransaction",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sesid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "JetUnregisterCallback",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sesid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "tableid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "cbtyp", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "hCallbackId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "JetCreateInstance2W",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pinstance", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{1, "szInstanceName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "szDisplayName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "grbit", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "JetOSSnapshotGetFreezeInfoA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "snapId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pcInstanceInfo", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{2, "paInstanceInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_JET_INSTANCE_INFO_A", 192, IN },
		{3, "grbit", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "JetAddColumnA",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sesid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "tableid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "szColumnName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "pcolumndef", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "JET_COLUMNDEF", 224, IN },
		{4, "pvDefault", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{5, "cbDefault", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "pcolumnid", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "JetAddColumnW",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sesid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "tableid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "szColumnName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "pcolumndef", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "JET_COLUMNDEF", 224, IN },
		{4, "pvDefault", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{5, "cbDefault", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "pcolumnid", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "JetGetIndexInfoA",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sesid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dbid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "szTableName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "szIndexName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{4, "pvResult", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{5, "cbResult", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "InfoLevel", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "JetPrepareUpdate",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sesid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "tableid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "prep", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "JetDelete",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sesid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "tableid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "JetOpenTableW",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sesid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dbid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "szTableName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "pvParameters", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{4, "cbParameters", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "grbit", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "ptableid", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "JetOpenFileInstanceA",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "instance", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "szFileName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "phfFile", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{3, "pulFileSizeLow", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{4, "pulFileSizeHigh", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "JetOpenFileInstanceW",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "instance", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "szFileName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "phfFile", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{3, "pulFileSizeLow", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{4, "pulFileSizeHigh", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "JetCreateIndex2A",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sesid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "tableid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pindexcreate", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagJET_INDEXCREATE_A", 384, IN },
		{3, "cIndexCreate", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "JetCreateIndex3A",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sesid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "tableid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pindexcreate", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagJET_INDEXCREATE2_A", 416, IN },
		{3, "cIndexCreate", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "JetCreateIndex3W",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sesid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "tableid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pindexcreate", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagJET_INDEXCREATE2_W", 416, IN },
		{3, "cIndexCreate", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "JetGetInstanceMiscInfo",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "instance", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pvResult", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "cbMax", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "InfoLevel", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "JetEnableMultiInstanceW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "psetsysparam", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "JET_SETSYSPARAM_W", 128, IN },
		{1, "csetsysparam", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pcsetsucceed", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "JetSetColumn",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sesid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "tableid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "columnid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pvData", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{4, "cbData", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "grbit", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "psetinfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "JET_SETINFO", 96, IN },
	}
	},
	{ "JetDupCursor",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sesid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "tableid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "ptableid", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{3, "grbit", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "JetGetThreadStats",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pvResult", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "cbMax", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "JetExternalRestoreA",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "szCheckpointFilePath", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "szLogPath", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "rgrstmap", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "JET_RSTMAP_A", 64, IN },
		{3, "crstfilemap", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "szBackupLogPath", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{5, "genLow", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{6, "genHigh", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{7, "pfn", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
	}
	},
	{ "JetCreateDatabaseA",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sesid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "szFilename", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "szConnect", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "pdbid", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{4, "grbit", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "JetGetTruncateLogInfoInstanceA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "instance", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "szzLogs", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "cbMax", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pcbActual", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "JetExternalRestore2A",10,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "szCheckpointFilePath", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "szLogPath", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "rgrstmap", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "JET_RSTMAP_A", 64, IN },
		{3, "crstfilemap", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "szBackupLogPath", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{5, "pLogInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "JET_LOGINFO_A", 128, IN },
		{6, "szTargetInstanceName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{7, "szTargetInstanceLogPath", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{8, "szTargetInstanceCheckpointPath", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{9, "pfn", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
	}
	},
	{ "JetExternalRestore2W",10,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "szCheckpointFilePath", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "szLogPath", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "rgrstmap", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "JET_RSTMAP_W", 64, IN },
		{3, "crstfilemap", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "szBackupLogPath", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{5, "pLogInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "JET_LOGINFO_W", 160, IN },
		{6, "szTargetInstanceName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{7, "szTargetInstanceLogPath", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{8, "szTargetInstanceCheckpointPath", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{9, "pfn", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
	}
	},
	{ "JetGrowDatabase",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sesid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dbid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "cpg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pcpgReal", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "JetDeleteColumn2A",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sesid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "tableid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "szColumnName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "grbit", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "JetDeleteColumn2W",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sesid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "tableid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "szColumnName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "grbit", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "JetSetLS",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sesid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "tableid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "ls", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "grbit", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "JetBackupW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "szBackupPath", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "grbit", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pfnStatus", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
	}
	},
	{ "JetGetLogInfoInstance2A",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "instance", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "szzLogs", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "cbMax", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pcbActual", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{4, "pLogInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "JET_LOGINFO_A", 128, IN },
	}
	},
	{ "JetGetLogInfoInstance2W",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "instance", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "szzLogs", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "cbMax", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pcbActual", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{4, "pLogInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "JET_LOGINFO_W", 160, IN },
	}
	},
	{ "JetGetTableColumnInfoW",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sesid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "tableid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "szColumnName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "pvResult", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{4, "cbMax", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "InfoLevel", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "JetIntersectIndexes",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sesid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "rgindexrange", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "JET_INDEXRANGE", 96, IN },
		{2, "cindexrange", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "precordlist", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "JET_RECORDLIST", 128, IN },
		{4, "grbit", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "JetRenameColumnA",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sesid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "tableid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "szName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "szNameNew", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{4, "grbit", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "JetRenameColumnW",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sesid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "tableid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "szName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "szNameNew", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{4, "grbit", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "JetInit3A",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pinstance", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{1, "prstInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "JET_RSTINFO_A", 256, IN },
		{2, "grbit", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "JetInit3W",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pinstance", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{1, "prstInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "JET_RSTINFO_W", 256, IN },
		{2, "grbit", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "JetSetDatabaseSizeA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sesid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "szDatabaseName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "cpg", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pcpgReal", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "JetBackupInstanceA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "instance", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "szBackupPath", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "grbit", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pfnStatus", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
	}
	},
	{ "JetBackupInstanceW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "instance", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "szBackupPath", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "grbit", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pfnStatus", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
	}
	},
	{ "JetComputeStats",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sesid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "tableid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "JetGetVersion",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sesid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pwVersion", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "JetFreeBuffer",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pbBuf", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "JetSetColumnDefaultValueA",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sesid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dbid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "szTableName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "szColumnName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{4, "pvData", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{5, "cbData", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "grbit", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "JetSetColumnDefaultValueW",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sesid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dbid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "szTableName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "szColumnName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{4, "pvData", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{5, "cbData", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "grbit", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "JetCreateDatabase2W",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sesid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "szFilename", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "cpgDatabaseSizeMax", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pdbid", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{4, "grbit", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "JetCloseTable",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sesid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "tableid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "JetGetLogInfoInstanceA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "instance", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "szzLogs", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "cbMax", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pcbActual", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "JetGetLogInfoInstanceW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "instance", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "szzLogs", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "cbMax", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pcbActual", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "JetMakeKey",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sesid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "tableid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pvData", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "cbData", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "grbit", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "JetGetTableInfoA",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sesid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "tableid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pvResult", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "cbMax", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "InfoLevel", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "JetSetIndexRange",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sesid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "tableidSrc", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "grbit", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "JetOpenTempTable",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sesid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "prgcolumndef", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "JET_COLUMNDEF", 224, IN },
		{2, "ccolumn", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "grbit", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "ptableid", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{5, "prgcolumnid", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "JetExternalRestoreW",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "szCheckpointFilePath", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "szLogPath", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "rgrstmap", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "JET_RSTMAP_W", 64, IN },
		{3, "crstfilemap", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{4, "szBackupLogPath", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{5, "genLow", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{6, "genHigh", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{7, "pfn", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
	}
	},
	{ "JetGotoSecondaryIndexBookmark",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sesid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "tableid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pvSecondaryKey", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "cbSecondaryKey", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "pvPrimaryBookmark", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{5, "cbPrimaryBookmark", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "grbit", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "JetSetTableSequential",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sesid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "tableid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "grbit", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "JetEndExternalBackupInstance",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "instance", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "JetSeek",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sesid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "tableid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "grbit", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "JetGetObjectInfoA",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sesid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dbid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "objtyp", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "szContainerName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{4, "szObjectName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{5, "pvResult", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{6, "cbMax", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{7, "InfoLevel", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "JetBackupA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "szBackupPath", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "grbit", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pfnStatus", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
	}
	},
	{ "JetOSSnapshotThaw",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "snapId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "grbit", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "JetOpenTableA",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sesid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dbid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "szTableName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "pvParameters", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{4, "cbParameters", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "grbit", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "ptableid", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "JetDeleteColumnA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sesid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "tableid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "szColumnName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "JetDeleteColumnW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sesid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "tableid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "szColumnName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "JetGetSecondaryIndexBookmark",9,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sesid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "tableid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pvSecondaryKey", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "cbSecondaryKeyMax", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "pcbSecondaryKeyActual", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{5, "pvPrimaryBookmark", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{6, "cbPrimaryBookmarkMax", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{7, "pcbPrimaryBookmarkActual", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{8, "grbit", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "JetGetTableColumnInfoA",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sesid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "tableid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "szColumnName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "pvResult", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{4, "cbMax", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "InfoLevel", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "JetGetTableInfoW",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sesid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "tableid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pvResult", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "cbMax", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "InfoLevel", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "JetCreateInstanceA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pinstance", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{1, "szInstanceName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "JetCreateInstanceW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pinstance", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{1, "szInstanceName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "JetCreateDatabaseW",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sesid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "szFilename", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "szConnect", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "pdbid", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{4, "grbit", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "JetOpenTemporaryTable",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sesid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "popentemporarytable", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "tagJET_OPENTEMPORARYTABLE", 288, IN },
	}
	},
	{ "JetStopBackupInstance",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "instance", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "JetOSSnapshotTruncateLog",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "snapId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "grbit", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "JetRenameTableA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sesid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dbid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "szName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "szNameNew", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "JetRenameTableW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sesid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dbid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "szName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "szNameNew", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "JetOSSnapshotPrepare",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "psnapId", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{1, "grbit", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "JetSetSystemParameterA",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pinstance", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{1, "sesid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "paramid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "lParam", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "szParam", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "JetSetSystemParameterW",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pinstance", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{1, "sesid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "paramid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "lParam", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "szParam", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "JetOSSnapshotGetFreezeInfoW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "snapId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pcInstanceInfo", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{2, "paInstanceInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_JET_INSTANCE_INFO_W", 192, IN },
		{3, "grbit", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "JetTruncateLogInstance",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "instance", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "JetSetSessionContext",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sesid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "ulContext", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "JetRetrieveColumns",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sesid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "tableid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pretrievecolumn", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "JET_RETRIEVECOLUMN", 288, IN },
		{3, "cretrievecolumn", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "JetGetBookmark",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sesid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "tableid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pvBookmark", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "cbMax", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "pcbActual", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "JetRollback",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sesid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "grbit", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "JetCloseDatabase",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "sesid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dbid", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "grbit", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "JetOpenFileA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "szFileName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "phfFile", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{2, "pulFileSizeLow", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{3, "pulFileSizeHigh", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
};

int esentarraySize = (sizeof(esent_info) / sizeof(esent_info[0]));