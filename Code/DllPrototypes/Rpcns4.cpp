#include "../Pyrebox_libcalls.h"

libcall_info_t Rpcns4_info[] = {
	{ "RpcNsGroupMbrAddA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "GroupNameSyntax", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "GroupName", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "MemberNameSyntax", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "MemberName", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "RpcNsGroupMbrAddW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "GroupNameSyntax", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "GroupName", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "MemberNameSyntax", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "MemberName", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "I_RpcNsSendReceive",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Message", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RPC_MESSAGE", 352, IN },
		{1, "Handle", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
	}
	},
	{ "RpcNsBindingLookupNext",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "LookupContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "BindingVec", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_RPC_BINDING_VECTOR", 64, IN },
	}
	},
	{ "RpcNsMgmtEntryCreateA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "EntryNameSyntax", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "EntryName", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "RpcNsProfileEltInqNextW",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "InquiryContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "IfId", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RPC_IF_ID", 160, IN },
		{2, "MemberName", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_PointerPointer, 0, 2, IN },
		{3, "Priority", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{4, "Annotation", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_PointerPointer, 0, 2, IN },
	}
	},
	{ "RpcNsProfileDeleteA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ProfileNameSyntax", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "ProfileName", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "RpcNsBindingImportBeginW",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "EntryNameSyntax", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "EntryName", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "IfSpec", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "ObjUuid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{4, "ImportContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
	}
	},
	{ "RpcNsGroupMbrInqBeginA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "GroupNameSyntax", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "GroupName", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "MemberNameSyntax", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "InquiryContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
	}
	},
	{ "RpcNsGroupMbrInqBeginW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "GroupNameSyntax", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "GroupName", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "MemberNameSyntax", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "InquiryContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
	}
	},
	{ "RpcNsBindingImportDone",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ImportContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
	}
	},
	{ "RpcNsMgmtInqExpAge",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ExpirationAge", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "I_RpcReBindBuffer",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Message", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RPC_MESSAGE", 352, IN },
	}
	},
	{ "RpcNsGroupMbrInqNextA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "InquiryContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "MemberName", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_PointerPointer, 0, 1, IN },
	}
	},
	{ "RpcNsGroupMbrInqNextW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "InquiryContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "MemberName", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_PointerPointer, 0, 2, IN },
	}
	},
	{ "RpcNsProfileEltRemoveA",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ProfileNameSyntax", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "ProfileName", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "IfId", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RPC_IF_ID", 160, IN },
		{3, "MemberNameSyntax", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "MemberName", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "RpcNsProfileEltRemoveW",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ProfileNameSyntax", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "ProfileName", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "IfId", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RPC_IF_ID", 160, IN },
		{3, "MemberNameSyntax", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "MemberName", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "RpcNsEntryObjectInqNext",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "InquiryContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "ObjUuid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
	}
	},
	{ "RpcNsProfileEltAddA",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ProfileNameSyntax", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "ProfileName", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "IfId", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RPC_IF_ID", 160, IN },
		{3, "MemberNameSyntax", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "MemberName", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{5, "Priority", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "Annotation", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "RpcNsProfileEltAddW",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ProfileNameSyntax", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "ProfileName", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "IfId", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RPC_IF_ID", 160, IN },
		{3, "MemberNameSyntax", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "MemberName", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{5, "Priority", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "Annotation", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "RpcNsEntryExpandNameA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "EntryNameSyntax", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "EntryName", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "ExpandedName", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_PointerPointer, 0, 1, IN },
	}
	},
	{ "RpcNsMgmtSetExpAge",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ExpirationAge", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "RpcNsBindingExportA",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "EntryNameSyntax", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "EntryName", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "IfSpec", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "BindingVec", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RPC_BINDING_VECTOR", 64, IN },
		{4, "ObjectUuidVec", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_UUID_VECTOR", 64, IN },
	}
	},
	{ "RpcNsBindingExportW",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "EntryNameSyntax", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "EntryName", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "IfSpec", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "BindingVec", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RPC_BINDING_VECTOR", 64, IN },
		{4, "ObjectUuidVec", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_UUID_VECTOR", 64, IN },
	}
	},
	{ "RpcNsBindingExportPnPA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "EntryNameSyntax", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "EntryName", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "IfSpec", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "ObjectVector", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_UUID_VECTOR", 64, IN },
	}
	},
	{ "RpcNsBindingExportPnPW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "EntryNameSyntax", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "EntryName", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "IfSpec", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "ObjectVector", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_UUID_VECTOR", 64, IN },
	}
	},
	{ "RpcNsBindingLookupBeginA",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "EntryNameSyntax", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "EntryName", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "IfSpec", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "ObjUuid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{4, "BindingMaxCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "LookupContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
	}
	},
	{ "RpcNsBindingLookupBeginW",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "EntryNameSyntax", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "EntryName", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "IfSpec", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "ObjUuid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{4, "BindingMaxCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "LookupContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
	}
	},
	{ "RpcNsBindingLookupDone",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "LookupContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
	}
	},
	{ "RpcNsMgmtEntryInqIfIdsA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "EntryNameSyntax", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "EntryName", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "IfIdVec", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "RPC_IF_ID_VECTOR", 64, IN },
	}
	},
	{ "RpcNsMgmtEntryInqIfIdsW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "EntryNameSyntax", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "EntryName", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "IfIdVec", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "RPC_IF_ID_VECTOR", 64, IN },
	}
	},
	{ "I_RpcNsRaiseException",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "Message", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RPC_MESSAGE", 352, IN },
		{1, "Status", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "RpcNsBindingImportBeginA",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "EntryNameSyntax", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "EntryName", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "IfSpec", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "ObjUuid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GUID", 128, IN },
		{4, "ImportContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
	}
	},
	{ "I_RpcNsGetBuffer",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "Message", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RPC_MESSAGE", 352, IN },
	}
	},
	{ "RpcNsBindingUnexportA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "EntryNameSyntax", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "EntryName", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "IfSpec", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "ObjectUuidVec", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_UUID_VECTOR", 64, IN },
	}
	},
	{ "RpcNsBindingUnexportW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "EntryNameSyntax", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "EntryName", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "IfSpec", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "ObjectUuidVec", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_UUID_VECTOR", 64, IN },
	}
	},
	{ "RpcNsMgmtHandleSetExpAge",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "NsHandle", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "ExpirationAge", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "RpcNsGroupMbrRemoveW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "GroupNameSyntax", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "GroupName", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "MemberNameSyntax", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "MemberName", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "RpcNsEntryExpandNameW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "EntryNameSyntax", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "EntryName", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "ExpandedName", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_PointerPointer, 0, 2, IN },
	}
	},
	{ "RpcNsMgmtEntryDeleteW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "EntryNameSyntax", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "EntryName", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "RpcNsEntryObjectInqBeginA",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "EntryNameSyntax", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "EntryName", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "InquiryContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
	}
	},
	{ "RpcNsEntryObjectInqBeginW",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "EntryNameSyntax", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "EntryName", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "InquiryContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
	}
	},
	{ "RpcNsMgmtEntryCreateW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "EntryNameSyntax", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "EntryName", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "RpcNsGroupDeleteA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "GroupNameSyntax", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "GroupName", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "RpcNsGroupDeleteW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "GroupNameSyntax", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "GroupName", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "RpcNsProfileEltInqDone",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "InquiryContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
	}
	},
	{ "RpcNsBindingUnexportPnPA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "EntryNameSyntax", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "EntryName", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "IfSpec", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "ObjectVector", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_UUID_VECTOR", 64, IN },
	}
	},
	{ "RpcNsBindingUnexportPnPW",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "EntryNameSyntax", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "EntryName", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "IfSpec", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{3, "ObjectVector", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_UUID_VECTOR", 64, IN },
	}
	},
	{ "RpcNsBindingSelect",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "BindingVec", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RPC_BINDING_VECTOR", 64, IN },
		{1, "Binding", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
	}
	},
	{ "RpcNsProfileEltInqBeginA",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ProfileNameSyntax", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "ProfileName", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "InquiryType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "IfId", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RPC_IF_ID", 160, IN },
		{4, "VersOption", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "MemberNameSyntax", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "MemberName", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{7, "InquiryContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
	}
	},
	{ "RpcNsProfileEltInqBeginW",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ProfileNameSyntax", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "ProfileName", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "InquiryType", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "IfId", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RPC_IF_ID", 160, IN },
		{4, "VersOption", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "MemberNameSyntax", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "MemberName", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{7, "InquiryContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
	}
	},
	{ "RpcNsEntryObjectInqDone",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "InquiryContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
	}
	},
	{ "RpcNsBindingImportNext",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ImportContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "Binding", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
	}
	},
	{ "RpcNsProfileDeleteW",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "ProfileNameSyntax", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "ProfileName", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "RpcIfIdVectorFree",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "IfIdVector", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "RPC_IF_ID_VECTOR", 64, IN },
	}
	},
	{ "RpcNsProfileEltInqNextA",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "InquiryContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "IfId", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RPC_IF_ID", 160, IN },
		{2, "MemberName", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_PointerPointer, 0, 1, IN },
		{3, "Priority", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{4, "Annotation", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_PointerPointer, 0, 1, IN },
	}
	},
	{ "RpcNsGroupMbrInqDone",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "InquiryContext", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
	}
	},
	{ "RpcNsMgmtBindingUnexportA",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "EntryNameSyntax", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "EntryName", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "IfId", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RPC_IF_ID", 160, IN },
		{3, "VersOption", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "ObjectUuidVec", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_UUID_VECTOR", 64, IN },
	}
	},
	{ "RpcNsMgmtBindingUnexportW",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "EntryNameSyntax", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "EntryName", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "IfId", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_RPC_IF_ID", 160, IN },
		{3, "VersOption", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "ObjectUuidVec", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_UUID_VECTOR", 64, IN },
	}
	},
	{ "RpcNsMgmtEntryDeleteA",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "EntryNameSyntax", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "EntryName", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
	{ "RpcNsGroupMbrRemoveA",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "GroupNameSyntax", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "GroupName", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "MemberNameSyntax", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "MemberName", NKT_DBFUNDTYPE_UnsignedByte | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
	}
	},
};

int Rpcns4arraySize = (sizeof(Rpcns4_info) / sizeof(Rpcns4_info[0]));