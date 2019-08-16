#include "../Pyrebox_libcalls.h"

libcall_info_t AuthZ_info[] = {
	{ "AuthzEvaluateSacl",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "AuthzClientContext", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pRequest", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_AUTHZ_ACCESS_REQUEST", 160, IN },
		{2, "Sacl", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ACL", 64, IN },
		{3, "GrantedAccess", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "AccessGranted", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{5, "pbGenerateAudit", NKT_DBFUNDTYPE_SignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "AuthzAddSidsToContext",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hAuthzClientContext", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "Sids", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SID_AND_ATTRIBUTES", 64, IN },
		{2, "SidCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "RestrictedSids", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SID_AND_ATTRIBUTES", 64, IN },
		{4, "RestrictedSidCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "phNewAuthzClientContext", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "AuthzEnumerateSecurityEventSources",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "Buffer", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_AUTHZ_SOURCE_SCHEMA_REGISTRATION", 320, INOUT },
		{2, "pdwCount", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{3, "pdwLength", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "AuthzRegisterSecurityEventSource",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "szEventSourceName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "phEventProvider", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "AuthzGetInformationFromContext",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hAuthzClientContext", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "InfoClass", NKT_DBOBJCLASS_Enumeration, "_AUTHZ_CONTEXT_INFORMATION_CLASS", 32, IN },
		{2, "BufferSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pSizeRequired", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{4, "Buffer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, INOUT },
	}
	},
	{ "AuthzAccessCheck",9,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hAuthzClientContext", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pRequest", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_AUTHZ_ACCESS_REQUEST", 160, IN },
		{3, "hAuditEvent", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "pSecurityDescriptor", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{5, "OptionalSecurityDescriptorArray", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
		{6, "OptionalSecurityDescriptorCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{7, "pReply", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_AUTHZ_ACCESS_REPLY", 128, INOUT },
		{8, "phAccessCheckResults", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "AuthzOpenObjectAudit",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hAuthzClientContext", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pRequest", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_AUTHZ_ACCESS_REQUEST", 160, IN },
		{3, "hAuditEvent", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "pSecurityDescriptor", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{5, "OptionalSecurityDescriptorArray", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
		{6, "OptionalSecurityDescriptorCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{7, "pReply", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_AUTHZ_ACCESS_REPLY", 128, IN },
	}
	},
	{ "AuthzFreeHandle",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hAccessCheckResults", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "AuthzCachedAccessCheck",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hAccessCheckResults", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pRequest", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_AUTHZ_ACCESS_REQUEST", 160, IN },
		{3, "hAuditEvent", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "pReply", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_AUTHZ_ACCESS_REPLY", 128, INOUT },
	}
	},
	{ "AuthzUnregisterSecurityEventSource",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "phEventProvider", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "AuthzUninstallSecurityEventSource",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "szEventSourceName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "AuthzFreeContext",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hAuthzClientContext", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "AuthzInitializeContextFromToken",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "TokenHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "hAuthzResourceManager", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pExpirationTime", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "_LARGE_INTEGER", 64, IN },
		{4, "Identifier", NKT_DBOBJCLASS_Struct, "_LUID", 64, IN },
		{5, "DynamicGroupArgs", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{6, "phAuthzClientContext", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "AuthzInitializeObjectAccessAuditEvent",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hAuditEventType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "szOperationType", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "szObjectType", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{4, "szObjectName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{5, "szAdditionalInfo", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{6, "phAuditEvent", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{7, "dwAdditionalParameterCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "AuthzInitializeObjectAccessAuditEvent2",9,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hAuditEventType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "szOperationType", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "szObjectType", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{4, "szObjectName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{5, "szAdditionalInfo", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{6, "szAdditionalInfo2", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{7, "phAuditEvent", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{8, "dwAdditionalParameterCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "AuthzReportSecurityEvent",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hEventProvider", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{2, "dwAuditId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pUserSid", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{4, "dwCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "AuthzInstallSecurityEventSource",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pRegistration", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_AUTHZ_SOURCE_SCHEMA_REGISTRATION", 320, IN },
	}
	},
	{ "AuthzModifySecurityAttributes",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hAuthzClientContext", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pOperations", NKT_DBOBJCLASS_Enumeration | NKT_DBOBJCLASS_Pointer, "AUTHZ_SECURITY_ATTRIBUTE_OPERATION", 32, IN },
		{2, "pAttributes", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_AUTHZ_SECURITY_ATTRIBUTES_INFORMATION", 96, IN },
	}
	},
	{ "AuthzReportSecurityEventFromParams",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "dwFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hEventProvider", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwAuditId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pUserSid", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{4, "pParams", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_AUDIT_PARAMS", 128, IN },
	}
	},
	{ "AuthzInitializeContextFromSid",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "UserSid", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "hAuthzResourceManager", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pExpirationTime", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "_LARGE_INTEGER", 64, IN },
		{4, "Identifier", NKT_DBOBJCLASS_Struct, "_LUID", 64, IN },
		{5, "DynamicGroupArgs", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{6, "phAuthzClientContext", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "AuthzFreeAuditEvent",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hAuditEvent", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "AuthzInitializeResourceManager",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pfnDynamicAccessCheck", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{2, "pfnComputeDynamicGroups", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{3, "pfnFreeDynamicGroups", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{4, "szResourceManagerName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{5, "phAuthzResourceManager", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "AuthzInitializeContextFromAuthzContext",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "hAuthzClientContext", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pExpirationTime", NKT_DBOBJCLASS_Union | NKT_DBOBJCLASS_Pointer, "_LARGE_INTEGER", 64, IN },
		{3, "Identifier", NKT_DBOBJCLASS_Struct, "_LUID", 64, IN },
		{4, "DynamicGroupArgs", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{5, "phNewAuthzClientContext", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "AuthzFreeResourceManager",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hAuthzResourceManager", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
};

int AuthZarraySize = (sizeof(AuthZ_info) / sizeof(AuthZ_info[0]));