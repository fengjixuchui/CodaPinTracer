#include "../Pyrebox_libcalls.h"

libcall_info_t WinBio_info[] = {
	{ "WinBioEnumServiceProviders",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Factor", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "BspSchemaArray", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_WINBIO_BSP_SCHEMA", 8416, INOUT },
		{2, "BspCount", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "WinBioEnrollBegin",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "SessionHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "SubFactor", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, IN },
		{2, "UnitId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "WinBioControlUnit",10,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "SessionHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "UnitId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "Component", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "ControlCode", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "SendBuffer", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{5, "SendBufferSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "ReceiveBuffer", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{7, "ReceiveBufferSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{8, "ReceiveDataSize", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{9, "OperationStatus", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "WinBioGetLogonSetting",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "Value", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "Source", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "WinBioCloseSession",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "SessionHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "WinBioDeleteTemplate",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "SessionHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "UnitId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "Identity", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WINBIO_IDENTITY", 608, IN },
		{3, "SubFactor", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, IN },
	}
	},
	{ "WinBioUnregisterEventMonitor",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "SessionHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "WinBioRemoveAllDomainCredentials",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "WinBioIdentifyWithCallback",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "SessionHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "IdentifyCallback", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{2, "IdentifyCallbackContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WinBioRemoveAllCredentials",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "WinBioCancel",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "SessionHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "WinBioCaptureSample",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "SessionHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "Purpose", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, IN },
		{2, "Flags", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, IN },
		{3, "UnitId", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{4, "Sample", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_WINBIO_BIR", 256, INOUT },
		{5, "SampleSize", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{6, "RejectDetail", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "WinBioEnumDatabases",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Factor", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "StorageSchemaArray", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_WINBIO_STORAGE_SCHEMA", 8512, INOUT },
		{2, "StorageCount", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "WinBioVerify",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "SessionHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "Identity", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WINBIO_IDENTITY", 608, IN },
		{2, "SubFactor", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, IN },
		{3, "UnitId", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{4, "Match", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{5, "RejectDetail", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "WinBioLocateSensor",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "SessionHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "UnitId", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "WinBioUnlockUnit",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "SessionHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "UnitId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "WinBioGetDomainLogonSetting",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "Value", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{1, "Source", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "WinBioWait",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "SessionHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "WinBioEnrollCapture",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "SessionHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "RejectDetail", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "WinBioGetProperty",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "SessionHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "PropertyType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "PropertyId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "UnitId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "Identity", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WINBIO_IDENTITY", 608, IN },
		{5, "SubFactor", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, IN },
		{6, "PropertyBuffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
		{7, "PropertyBufferSize", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "WinBioGetEnabledSetting",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "Value", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "Source", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "WinBioCaptureSampleWithCallback",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "SessionHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "Purpose", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, IN },
		{2, "Flags", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, IN },
		{3, "CaptureCallback", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{4, "CaptureCallbackContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WinBioOpenSession",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Factor", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "PoolType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "UnitArray", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{4, "UnitCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "DatabaseId", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{6, "SessionHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "WinBioRemoveCredential",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Identity", NKT_DBOBJCLASS_Struct, "_WINBIO_IDENTITY", 608, IN },
		{1, "Type", NKT_DBOBJCLASS_Enumeration, "_WINBIO_CREDENTIAL_TYPE", 32, IN },
	}
	},
	{ "WinBioEnrollCommit",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "SessionHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "Identity", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WINBIO_IDENTITY", 608, INOUT },
		{2, "IsNewTemplate", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
	}
	},
	{ "WinBioGetCredentialState",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Identity", NKT_DBOBJCLASS_Struct, "_WINBIO_IDENTITY", 608, IN },
		{1, "Type", NKT_DBOBJCLASS_Enumeration, "_WINBIO_CREDENTIAL_TYPE", 32, IN },
		{2, "CredentialState", NKT_DBOBJCLASS_Enumeration | NKT_DBOBJCLASS_Pointer, "_WINBIO_CREDENTIAL_STATE", 32, INOUT },
	}
	},
	{ "WinBioSetCredential",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Type", NKT_DBOBJCLASS_Enumeration, "_WINBIO_CREDENTIAL_TYPE", 32, IN },
		{1, "Credential", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "CredentialSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "Format", NKT_DBOBJCLASS_Enumeration, "_WINBIO_CREDENTIAL_FORMAT", 32, IN },
	}
	},
	{ "WinBioLogonIdentifiedUser",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "SessionHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "WinBioReleaseFocus",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "WinBioEnrollDiscard",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "SessionHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "WinBioEnumBiometricUnits",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Factor", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "UnitSchemaArray", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_WINBIO_UNIT_SCHEMA", 20704, INOUT },
		{2, "UnitCount", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "WinBioControlUnitPrivileged",10,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "SessionHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "UnitId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "Component", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "ControlCode", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "SendBuffer", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{5, "SendBufferSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "ReceiveBuffer", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{7, "ReceiveBufferSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{8, "ReceiveDataSize", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{9, "OperationStatus", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "WinBioRegisterEventMonitor",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "SessionHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "EventMask", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "EventCallback", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{3, "EventCallbackContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WinBioLocateSensorWithCallback",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "SessionHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "LocateCallback", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{2, "LocateCallbackContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WinBioVerifyWithCallback",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "SessionHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "Identity", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WINBIO_IDENTITY", 608, IN },
		{2, "SubFactor", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, IN },
		{3, "VerifyCallback", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{4, "VerifyCallbackContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WinBioFree",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Address", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WinBioEnrollCaptureWithCallback",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "SessionHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "EnrollCallback", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{2, "EnrollCallbackContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "WinBioAcquireFocus",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "WinBioEnumEnrollments",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "SessionHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "UnitId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "Identity", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WINBIO_IDENTITY", 608, IN },
		{3, "SubFactorArray", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_PointerPointer, 0, 1, INOUT },
		{4, "SubFactorCount", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "WinBioIdentify",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "SessionHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "UnitId", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{2, "Identity", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_WINBIO_IDENTITY", 608, INOUT },
		{3, "SubFactor", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{4, "RejectDetail", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "WinBioLockUnit",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "SessionHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "UnitId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
};

int WinBioarraySize = (sizeof(WinBio_info) / sizeof(WinBio_info[0]));