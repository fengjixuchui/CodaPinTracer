#include "../Pyrebox_libcalls.h"

libcall_info_t dhcpsapi_info[] = {
	{ "DhcpDeleteFilterV4",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ServerIpAddress", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "DeleteFilterInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DHCP_ADDR_PATTERN", 2144, IN },
	}
	},
	{ "DhcpGetAllOptionValuesV6",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ServerIpAddress", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "ScopeInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DHCP_OPTION_SCOPE_INFO6", 320, IN },
		{3, "Values", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_DHCP_ALL_OPTION_VALUES", 96, INOUT },
	}
	},
	{ "DhcpEnumSubnetElementsV5",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ServerIpAddress", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "SubnetAddress", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "EnumElementType", NKT_DBOBJCLASS_Enumeration, "_DHCP_SUBNET_ELEMENT_TYPE_V5", 32, IN },
		{3, "ResumeHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{4, "PreferredMaximum", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "EnumElementInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_DHCP_SUBNET_ELEMENT_INFO_ARRAY_V5", 64, INOUT },
		{6, "ElementsRead", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{7, "ElementsTotal", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "DhcpAddSubnetElement",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ServerIpAddress", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "SubnetAddress", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "AddElementInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DHCP_SUBNET_ELEMENT_DATA", 64, IN },
	}
	},
	{ "DhcpDeleteClassV6",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ServerIpAddress", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "ReservedMustBeZero", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "ClassName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "DhcpEnumSubnetsV6",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ServerIpAddress", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "ResumeHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{2, "PreferredMaximum", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "EnumInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_DHCPV6_IP_ARRAY", 64, INOUT },
		{4, "ElementsRead", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{5, "ElementsTotal", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "DhcpDeleteSuperScopeV4",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ServerIpAddress", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "SuperScopeName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "DhcpAddSecurityGroup",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "pServer", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "DhcpSetServerBindingInfoV6",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ServerIpAddress", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "BindElementInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DHCPV6_BIND_ELEMENT_ARRAY", 64, IN },
	}
	},
	{ "DhcpSetSubnetInfo",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ServerIpAddress", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "SubnetAddress", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "SubnetInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DHCP_SUBNET_INFO", 256, IN },
	}
	},
	{ "DhcpServerGetConfigV6",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ServerIpAddress", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "ScopeInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DHCP_OPTION_SCOPE_INFO6", 320, IN },
		{2, "ConfigInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_DHCP_SERVER_CONFIG_INFO_V6", 288, INOUT },
	}
	},
	{ "DhcpSetOptionValuesV5",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ServerIpAddress", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "ClassName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "VendorName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{4, "ScopeInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DHCP_OPTION_SCOPE_INFO", 96, IN },
		{5, "OptionValues", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DHCP_OPTION_VALUE_ARRAY", 64, IN },
	}
	},
	{ "DhcpGetAllOptionValues",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ServerIpAddress", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "ScopeInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DHCP_OPTION_SCOPE_INFO", 96, IN },
		{3, "Values", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_DHCP_ALL_OPTION_VALUES", 96, INOUT },
	}
	},
	{ "DhcpGetSubnetInfoV6",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ServerIpAddress", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "SubnetAddress", NKT_DBOBJCLASS_Struct, "_DHCP_IPV6_ADDRESS", 128, IN },
		{2, "SubnetInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_DHCP_SUBNET_INFO_V6", 320, INOUT },
	}
	},
	{ "DhcpGetSubnetInfoVQ",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ServerIpAddress", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "SubnetAddress", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "SubnetInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_DHCP_SUBNET_INFO_VQ", 512, INOUT },
	}
	},
	{ "DhcpSetClientInfo",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ServerIpAddress", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "ClientInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DHCP_CLIENT_INFO", 352, IN },
	}
	},
	{ "DhcpSetClientInfoV4",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ServerIpAddress", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "ClientInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DHCP_CLIENT_INFO_V4", 384, IN },
	}
	},
	{ "DhcpSetClientInfoV6",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ServerIpAddress", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "ClientInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DHCP_CLIENT_INFO_V6", 640, IN },
	}
	},
	{ "DhcpSetClientInfoVQ",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ServerIpAddress", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "ClientInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DHCP_CLIENT_INFO_VQ", 512, IN },
	}
	},
	{ "DhcpGetClassInfo",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ServerIpAddress", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "ReservedMustBeZero", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "PartialClassInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DHCP_CLASS_INFO", 192, IN },
		{3, "FilledClassInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_DHCP_CLASS_INFO", 192, INOUT },
	}
	},
	{ "DhcpDeleteSubnet",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ServerIpAddress", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "SubnetAddress", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "ForceFlag", NKT_DBOBJCLASS_Enumeration, "_DHCP_FORCE_FLAG", 32, IN },
	}
	},
	{ "DhcpSetOptionValues",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ServerIpAddress", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "ScopeInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DHCP_OPTION_SCOPE_INFO", 96, IN },
		{2, "OptionValues", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DHCP_OPTION_VALUE_ARRAY", 64, IN },
	}
	},
	{ "DhcpRpcFreeMemory",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "BufferPointer", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "DhcpAuditLogGetParams",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ServerIpAddress", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "AuditLogDir", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_PointerPointer, 0, 2, INOUT },
		{3, "DiskCheckInterval", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{4, "MaxLogFilesSize", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{5, "MinSpaceOnDisk", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "DhcpSetOptionInfo",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ServerIpAddress", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "OptionID", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "OptionInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DHCP_OPTION", 192, IN },
	}
	},
	{ "DhcpSetServerBindingInfo",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ServerIpAddress", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "BindElementInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DHCP_BIND_ELEMENT_ARRAY", 64, IN },
	}
	},
	{ "DhcpModifyClassV6",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ServerIpAddress", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "ReservedMustBeZero", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "ClassInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DHCP_CLASS_INFO_V6", 224, IN },
	}
	},
	{ "DhcpServerGetConfig",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ServerIpAddress", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "ConfigInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_DHCP_SERVER_CONFIG_INFO", 288, IN },
	}
	},
	{ "DhcpEnumSubnets",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ServerIpAddress", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "ResumeHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{2, "PreferredMaximum", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "EnumInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_DHCP_IP_ARRAY", 64, INOUT },
		{4, "ElementsRead", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{5, "ElementsTotal", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "DhcpEnumServers",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "IdInfo", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "Servers", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_DHCPDS_SERVERS", 96, INOUT },
		{3, "CallbackFn", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{4, "CallbackData", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "DhcpCreateSubnetV6",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ServerIpAddress", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "SubnetAddress", NKT_DBOBJCLASS_Struct, "_DHCP_IPV6_ADDRESS", 128, IN },
		{2, "SubnetInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DHCP_SUBNET_INFO_V6", 320, IN },
	}
	},
	{ "DhcpCreateSubnetVQ",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ServerIpAddress", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "SubnetAddress", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "SubnetInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DHCP_SUBNET_INFO_VQ", 512, IN },
	}
	},
	{ "DhcpCreateClass",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ServerIpAddress", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "ReservedMustBeZero", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "ClassInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DHCP_CLASS_INFO", 192, IN },
	}
	},
	{ "DhcpServerAuditlogParamsFree",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
		{0, "ConfigInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DHCP_SERVER_CONFIG_INFO_VQ", 512, IN },
	}
	},
	{ "DhcpSetOptionInfoV5",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ServerIpAddress", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "OptionID", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "ClassName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{4, "VendorName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{5, "OptionInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DHCP_OPTION", 192, IN },
	}
	},
	{ "DhcpSetOptionInfoV6",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ServerIpAddress", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "OptionID", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "ClassName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{4, "VendorName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{5, "OptionInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DHCP_OPTION", 192, IN },
	}
	},
	{ "DhcpEnumOptionValues",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ServerIpAddress", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "ScopeInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DHCP_OPTION_SCOPE_INFO", 96, IN },
		{2, "ResumeHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{3, "PreferredMaximum", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "OptionValues", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_DHCP_OPTION_VALUE_ARRAY", 64, IN },
		{5, "OptionsRead", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{6, "OptionsTotal", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "DhcpCreateOptionV5",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ServerIpAddress", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "OptionId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "ClassName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{4, "VendorName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{5, "OptionInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DHCP_OPTION", 192, IN },
	}
	},
	{ "DhcpCreateOptionV6",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ServerIpAddress", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "OptionId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "ClassName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{4, "VendorName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{5, "OptionInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DHCP_OPTION", 192, IN },
	}
	},
	{ "DhcpSetFilterV4",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ServerIpAddress", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "GlobalFilterInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DHCP_FILTER_GLOBAL_INFO", 64, IN },
	}
	},
	{ "DhcpDsCleanup",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_Void, 0, 0, INOUT },
	}
	},
	{ "DhcpCreateSubnet",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ServerIpAddress", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "SubnetAddress", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "SubnetInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DHCP_SUBNET_INFO", 256, IN },
	}
	},
	{ "DhcpEnumSubnetElements",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ServerIpAddress", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "SubnetAddress", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "EnumElementType", NKT_DBOBJCLASS_Enumeration, "_DHCP_SUBNET_ELEMENT_TYPE_V5", 32, IN },
		{3, "ResumeHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{4, "PreferredMaximum", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "EnumElementInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_DHCP_SUBNET_ELEMENT_INFO_ARRAY", 64, IN },
		{6, "ElementsRead", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{7, "ElementsTotal", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "DhcpServerSetDnsRegCredentials",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ServerIpAddress", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "Uname", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "Domain", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "Passwd", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "DhcpDsInit",0,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
	}
	},
	{ "DhcpDeleteClientInfoV6",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ServerIpAddress", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "ClientInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DHCP_CLIENT_SEARCH_INFO_V6", 192, IN },
	}
	},
	{ "DhcpGetSubnetInfo",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ServerIpAddress", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "SubnetAddress", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "SubnetInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_DHCP_SUBNET_INFO", 256, INOUT },
	}
	},
	{ "DhcpServerSetConfigV4",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ServerIpAddress", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "FieldsToSet", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "ConfigInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DHCP_SERVER_CONFIG_INFO_V4", 416, IN },
	}
	},
	{ "DhcpServerSetConfigV6",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ServerIpAddress", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "ScopeInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DHCP_OPTION_SCOPE_INFO6", 320, IN },
		{2, "FieldsToSet", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "ConfigInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DHCP_SERVER_CONFIG_INFO_V6", 288, IN },
	}
	},
	{ "DhcpServerSetConfigVQ",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ServerIpAddress", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "FieldsToSet", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "ConfigInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DHCP_SERVER_CONFIG_INFO_VQ", 512, IN },
	}
	},
	{ "DhcpGetVersion",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ServerIpAddress", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "MajorVersion", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{2, "MinorVersion", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "DhcpAuditLogSetParams",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ServerIpAddress", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "AuditLogDir", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "DiskCheckInterval", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "MaxLogFilesSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "MinSpaceOnDisk", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DhcpCreateClientInfoV4",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ServerIpAddress", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "ClientInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DHCP_CLIENT_INFO_V4", 384, IN },
	}
	},
	{ "DhcpCreateClientInfoVQ",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ServerIpAddress", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "ClientInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DHCP_CLIENT_INFO_VQ", 512, IN },
	}
	},
	{ "DhcpGetFilterV4",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ServerIpAddress", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "GlobalFilterInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DHCP_FILTER_GLOBAL_INFO", 64, INOUT },
	}
	},
	{ "DhcpSetSubnetDelayOffer",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ServerIpAddress", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "SubnetAddress", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "TimeDelayInMilliseconds", NKT_DBFUNDTYPE_UnsignedWord, 0, 2, IN },
	}
	},
	{ "DhcpGetOptionInfo",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ServerIpAddress", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "OptionID", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "OptionInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_DHCP_OPTION", 192, IN },
	}
	},
	{ "DhcpEnumSubnetClients",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ServerIpAddress", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "SubnetAddress", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "ResumeHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{3, "PreferredMaximum", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "ClientInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_DHCP_CLIENT_INFO_ARRAY", 64, INOUT },
		{5, "ClientsRead", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{6, "ClientsTotal", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "DhcpServerSetDnsRegCredentialsV5",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ServerIpAddress", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "Uname", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "Domain", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "Passwd", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "DhcpServerBackupDatabase",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ServerIpAddress", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "Path", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "DhcpRemoveOptionV5",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ServerIpAddress", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "OptionID", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "ClassName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{4, "VendorName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "DhcpRemoveOptionV6",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ServerIpAddress", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "OptionID", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "ClassName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{4, "VendorName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "DhcpDeleteServer",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "IdInfo", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "NewServer", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DHCPDS_SERVER", 224, IN },
		{3, "CallbackFn", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{4, "CallbackData", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "DhcpServerGetConfigV4",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ServerIpAddress", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "ConfigInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_DHCP_SERVER_CONFIG_INFO_V4", 416, INOUT },
	}
	},
	{ "DhcpServerGetConfigVQ",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ServerIpAddress", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "ConfigInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_DHCP_SERVER_CONFIG_INFO_VQ", 512, INOUT },
	}
	},
	{ "DhcpRemoveOption",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ServerIpAddress", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "OptionID", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DhcpCreateClassV6",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ServerIpAddress", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "ReservedMustBeZero", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "ClassInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DHCP_CLASS_INFO_V6", 224, IN },
	}
	},
	{ "DhcpAddServer",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "IdInfo", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "NewServer", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DHCPDS_SERVER", 224, IN },
		{3, "CallbackFn", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{4, "CallbackData", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "DhcpScanDatabase",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ServerIpAddress", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "SubnetAddress", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "FixFlag", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "ScanList", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_DHCP_SCAN_LIST", 64, IN },
	}
	},
	{ "DhcpGetSubnetDelayOffer",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ServerIpAddress", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "SubnetAddress", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "TimeDelayInMilliseconds", NKT_DBFUNDTYPE_UnsignedWord | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
	}
	},
	{ "DhcpGetServerSpecificStrings",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ServerIpAddress", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "ServerSpecificStrings", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_DHCP_SERVER_SPECIFIC_STRINGS", 64, IN },
	}
	},
	{ "DhcpGetClientInfoV4",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ServerIpAddress", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "SearchInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DHCP_CLIENT_SEARCH_INFO", 96, IN },
		{2, "ClientInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_DHCP_CLIENT_INFO_V4", 384, INOUT },
	}
	},
	{ "DhcpGetClientInfoV6",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ServerIpAddress", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "SearchInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DHCP_CLIENT_SEARCH_INFO_V6", 192, IN },
		{2, "ClientInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_DHCP_CLIENT_INFO_V6", 640, INOUT },
	}
	},
	{ "DhcpGetClientInfoVQ",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ServerIpAddress", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "SearchInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DHCP_CLIENT_SEARCH_INFO", 96, IN },
		{2, "ClientInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_DHCP_CLIENT_INFO_VQ", 512, INOUT },
	}
	},
	{ "DhcpEnumClasses",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ServerIpAddress", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "ReservedMustBeZero", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "ResumeHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{3, "PreferredMaximum", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "ClassInfoArray", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_DHCP_CLASS_INFO_ARRAY", 64, INOUT },
		{5, "nRead", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{6, "nTotal", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "DhcpGetSuperScopeInfoV4",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ServerIpAddress", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "SuperScopeTable", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_DHCP_SUPER_SCOPE_TABLE", 64, INOUT },
	}
	},
	{ "DhcpCreateClientInfo",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ServerIpAddress", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "ClientInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DHCP_CLIENT_INFO", 352, IN },
	}
	},
	{ "DhcpServerSetConfig",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ServerIpAddress", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "FieldsToSet", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "ConfigInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DHCP_SERVER_CONFIG_INFO", 288, IN },
	}
	},
	{ "DhcpModifyClass",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ServerIpAddress", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "ReservedMustBeZero", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "ClassInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DHCP_CLASS_INFO", 192, IN },
	}
	},
	{ "DhcpGetOptionInfoV5",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ServerIpAddress", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "OptionID", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "ClassName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{4, "VendorName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{5, "OptionInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_DHCP_OPTION", 192, INOUT },
	}
	},
	{ "DhcpGetOptionInfoV6",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ServerIpAddress", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "OptionID", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "ClassName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{4, "VendorName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{5, "OptionInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_DHCP_OPTION", 192, INOUT },
	}
	},
	{ "DhcpGetClientOptions",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ServerIpAddress", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "ClientIpAddress", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "ClientSubnetMask", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "ClientOptions", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_DHCP_OPTION_LIST", 64, IN },
	}
	},
	{ "DhcpServerRedoAuthorization",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ServerIpAddr", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "dwReserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DhcpServerQueryAttributes",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ServerIpAddr", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "dwReserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "dwAttribCount", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pDhcpAttribs", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{4, "pDhcpAttribArr", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_DHCP_ATTRIB_ARRAY", 64, IN },
	}
	},
	{ "DhcpSetSubnetInfoV6",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ServerIpAddress", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "SubnetAddress", NKT_DBOBJCLASS_Struct, "_DHCP_IPV6_ADDRESS", 128, IN },
		{2, "SubnetInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DHCP_SUBNET_INFO_V6", 320, IN },
	}
	},
	{ "DhcpSetSubnetInfoVQ",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ServerIpAddress", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "SubnetAddress", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "SubnetInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DHCP_SUBNET_INFO_VQ", 512, IN },
	}
	},
	{ "DhcpGetClientInfo",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ServerIpAddress", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "SearchInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DHCP_CLIENT_SEARCH_INFO", 96, IN },
		{2, "ClientInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_DHCP_CLIENT_INFO", 352, INOUT },
	}
	},
	{ "DhcpGetOptionValue",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ServerIpAddress", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "OptionID", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "ScopeInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DHCP_OPTION_SCOPE_INFO", 96, IN },
		{3, "OptionValue", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_DHCP_OPTION_VALUE", 96, INOUT },
	}
	},
	{ "DhcpAddSubnetElementV4",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ServerIpAddress", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "SubnetAddress", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "AddElementInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DHCP_SUBNET_ELEMENT_DATA_V4", 64, IN },
	}
	},
	{ "DhcpAddSubnetElementV5",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ServerIpAddress", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "SubnetAddress", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "AddElementInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DHCP_SUBNET_ELEMENT_DATA_V5", 64, IN },
	}
	},
	{ "DhcpAddSubnetElementV6",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ServerIpAddress", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "SubnetAddress", NKT_DBOBJCLASS_Struct, "_DHCP_IPV6_ADDRESS", 128, IN },
		{2, "AddElementInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DHCP_SUBNET_ELEMENT_DATA_V6", 64, IN },
	}
	},
	{ "DhcpRemoveOptionValueV5",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ServerIpAddress", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "OptionID", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "ClassName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{4, "VendorName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{5, "ScopeInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DHCP_OPTION_SCOPE_INFO", 96, IN },
	}
	},
	{ "DhcpRemoveOptionValueV6",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ServerIpAddress", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "OptionID", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "ClassName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{4, "VendorName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{5, "ScopeInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DHCP_OPTION_SCOPE_INFO6", 320, IN },
	}
	},
	{ "DhcpAddFilterV4",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ServerIpAddress", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "AddFilterInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DHCP_FILTER_ADD_INFOV4", 2208, IN },
		{2, "ForceFlag", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DhcpSetThreadOptions",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "Reserved", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "DhcpEnumFilterV4",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ServerIpAddress", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "ResumeHandle", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DHCP_ADDR_PATTERN", 2144, INOUT },
		{2, "PreferredMaximum", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "ListType", NKT_DBOBJCLASS_Enumeration, "_DHCP_FILTER_LIST_TYPE", 32, IN },
		{4, "EnumFilterInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_DHCP_FILTER_ENUM_INFO", 64, INOUT },
		{5, "ElementsRead", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{6, "ElementsTotal", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "DhcpGetThreadOptions",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "pFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{1, "Reserved", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
	}
	},
	{ "DhcpServerRestoreDatabase",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ServerIpAddress", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "Path", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "DhcpCreateOption",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ServerIpAddress", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "OptionID", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "OptionInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DHCP_OPTION", 192, IN },
	}
	},
	{ "DhcpGetMibInfoV5",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ServerIpAddress", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "MibInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_DHCP_MIB_INFO_V5", 640, INOUT },
	}
	},
	{ "DhcpGetMibInfoV6",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ServerIpAddress", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "MibInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_DHCP_MIB_INFO_V6", 448, INOUT },
	}
	},
	{ "DhcpGetAllOptionsV6",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ServerIpAddress", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "OptionStruct", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_DHCP_ALL_OPTIONS", 128, INOUT },
	}
	},
	{ "DhcpEnumOptions",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ServerIpAddress", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "ResumeHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{2, "PreferredMaximum", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "Options", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_DHCP_OPTION_ARRAY", 64, IN },
		{4, "OptionsRead", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{5, "OptionsTotal", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "DhcpDeleteSubnetV6",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ServerIpAddress", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "SubnetAddress", NKT_DBOBJCLASS_Struct, "_DHCP_IPV6_ADDRESS", 128, IN },
		{2, "ForceFlag", NKT_DBOBJCLASS_Enumeration, "_DHCP_FORCE_FLAG", 32, IN },
	}
	},
	{ "DhcpEnumOptionValuesV5",10,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ServerIpAddress", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "ClassName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "VendorName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{4, "ScopeInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DHCP_OPTION_SCOPE_INFO", 96, IN },
		{5, "ResumeHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{6, "PreferredMaximum", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{7, "OptionValues", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_DHCP_OPTION_VALUE_ARRAY", 64, INOUT },
		{8, "OptionsRead", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{9, "OptionsTotal", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "DhcpEnumOptionValuesV6",10,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ServerIpAddress", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "ClassName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "VendorName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{4, "ScopeInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DHCP_OPTION_SCOPE_INFO6", 320, IN },
		{5, "ResumeHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{6, "PreferredMaximum", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{7, "OptionValues", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_DHCP_OPTION_VALUE_ARRAY", 64, INOUT },
		{8, "OptionsRead", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{9, "OptionsTotal", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "DhcpDeleteClientInfo",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ServerIpAddress", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "ClientInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DHCP_CLIENT_SEARCH_INFO", 96, IN },
	}
	},
	{ "DhcpEnumOptionsV5",9,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ServerIpAddress", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "ClassName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "VendorName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{4, "ResumeHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{5, "PreferredMaximum", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "Options", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_DHCP_OPTION_ARRAY", 64, INOUT },
		{7, "OptionsRead", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{8, "OptionsTotal", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "DhcpEnumOptionsV6",9,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ServerIpAddress", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "ClassName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "VendorName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{4, "ResumeHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{5, "PreferredMaximum", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "Options", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_DHCP_OPTION_ARRAY", 64, INOUT },
		{7, "OptionsRead", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{8, "OptionsTotal", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "DhcpRemoveSubnetElementV4",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ServerIpAddress", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "SubnetAddress", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "RemoveElementInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DHCP_SUBNET_ELEMENT_DATA_V4", 64, IN },
		{3, "ForceFlag", NKT_DBOBJCLASS_Enumeration, "_DHCP_FORCE_FLAG", 32, IN },
	}
	},
	{ "DhcpRemoveSubnetElementV5",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ServerIpAddress", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "SubnetAddress", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "RemoveElementInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DHCP_SUBNET_ELEMENT_DATA_V5", 64, IN },
		{3, "ForceFlag", NKT_DBOBJCLASS_Enumeration, "_DHCP_FORCE_FLAG", 32, IN },
	}
	},
	{ "DhcpRemoveSubnetElementV6",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ServerIpAddress", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "SubnetAddress", NKT_DBOBJCLASS_Struct, "_DHCP_IPV6_ADDRESS", 128, IN },
		{2, "RemoveElementInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DHCP_SUBNET_ELEMENT_DATA_V6", 64, IN },
		{3, "ForceFlag", NKT_DBOBJCLASS_Enumeration, "_DHCP_FORCE_FLAG", 32, IN },
	}
	},
	{ "DhcpSetOptionValue",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ServerIpAddress", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "OptionID", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "ScopeInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DHCP_OPTION_SCOPE_INFO", 96, IN },
		{3, "OptionValue", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DHCP_OPTION_DATA", 64, IN },
	}
	},
	{ "DhcpEnumClassesV6",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ServerIpAddress", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "ReservedMustBeZero", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "ResumeHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{3, "PreferredMaximum", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "ClassInfoArray", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_DHCP_CLASS_INFO_ARRAY_V6", 64, INOUT },
		{5, "nRead", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{6, "nTotal", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "DhcpDeleteClass",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ServerIpAddress", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "ReservedMustBeZero", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "ClassName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
	}
	},
	{ "DhcpSetOptionValueV5",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ServerIpAddress", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "OptionId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "ClassName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{4, "VendorName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{5, "ScopeInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DHCP_OPTION_SCOPE_INFO", 96, IN },
		{6, "OptionValue", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DHCP_OPTION_DATA", 64, IN },
	}
	},
	{ "DhcpSetOptionValueV6",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ServerIpAddress", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "OptionId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "ClassName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{4, "VendorName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{5, "ScopeInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DHCP_OPTION_SCOPE_INFO6", 320, IN },
		{6, "OptionValue", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DHCP_OPTION_DATA", 64, IN },
	}
	},
	{ "DhcpSetSuperScopeV4",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ServerIpAddress", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "SubnetAddress", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "SuperScopeName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{3, "ChangeExisting", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DhcpEnumSubnetElementsV4",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ServerIpAddress", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "SubnetAddress", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "EnumElementType", NKT_DBOBJCLASS_Enumeration, "_DHCP_SUBNET_ELEMENT_TYPE_V5", 32, IN },
		{3, "ResumeHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{4, "PreferredMaximum", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "EnumElementInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_DHCP_SUBNET_ELEMENT_INFO_ARRAY_V4", 64, IN },
		{6, "ElementsRead", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{7, "ElementsTotal", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "DhcpEnumSubnetElementsV6",8,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ServerIpAddress", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "SubnetAddress", NKT_DBOBJCLASS_Struct, "_DHCP_IPV6_ADDRESS", 128, IN },
		{2, "EnumElementType", NKT_DBOBJCLASS_Enumeration, "_DHCP_SUBNET_ELEMENT_TYPE_V6", 32, IN },
		{3, "ResumeHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{4, "PreferredMaximum", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{5, "EnumElementInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_DHCP_SUBNET_ELEMENT_INFO_ARRAY_V6", 64, INOUT },
		{6, "ElementsRead", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{7, "ElementsTotal", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "DhcpGetOptionValueV5",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ServerIpAddress", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "OptionID", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "ClassName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{4, "VendorName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{5, "ScopeInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DHCP_OPTION_SCOPE_INFO", 96, IN },
		{6, "OptionValue", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_DHCP_OPTION_VALUE", 96, INOUT },
	}
	},
	{ "DhcpGetOptionValueV6",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ServerIpAddress", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "OptionID", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "ClassName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{4, "VendorName", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{5, "ScopeInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DHCP_OPTION_SCOPE_INFO6", 320, IN },
		{6, "OptionValue", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_DHCP_OPTION_VALUE", 96, INOUT },
	}
	},
	{ "DhcpRemoveOptionValue",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ServerIpAddress", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "OptionID", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "ScopeInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DHCP_OPTION_SCOPE_INFO", 96, IN },
	}
	},
	{ "DhcpRemoveSubnetElement",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ServerIpAddress", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "SubnetAddress", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "RemoveElementInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DHCP_SUBNET_ELEMENT_DATA", 64, IN },
		{3, "ForceFlag", NKT_DBOBJCLASS_Enumeration, "_DHCP_FORCE_FLAG", 32, IN },
	}
	},
	{ "DhcpGetAllOptions",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ServerIpAddress", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "OptionStruct", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_DHCP_ALL_OPTIONS", 128, IN },
	}
	},
	{ "DhcpServerQueryDnsRegCredentials",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ServerIpAddress", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "UnameSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "Uname", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
		{3, "DomainSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "Domain", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
	}
	},
	{ "DhcpEnumSubnetClientsFilterStatusInfo",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ServerIpAddress", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "SubnetAddress", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "ResumeHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{3, "PreferredMaximum", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "ClientInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_DHCP_CLIENT_FILTER_STATUS_INFO_ARRAY", 64, INOUT },
		{5, "ClientsRead", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{6, "ClientsTotal", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "DhcpGetMibInfo",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ServerIpAddress", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "MibInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_DHCP_MIB_INFO", 352, IN },
	}
	},
	{ "DhcpServerQueryAttribute",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ServerIpAddr", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "dwReserved", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "DhcpAttribId", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pDhcpAttrib", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_DHCP_ATTRIB", 96, IN },
	}
	},
	{ "DhcpGetServerBindingInfoV6",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ServerIpAddress", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "BindElementsInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_DHCPV6_BIND_ELEMENT_ARRAY", 64, INOUT },
	}
	},
	{ "DhcpEnumSubnetClientsV4",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ServerIpAddress", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "SubnetAddress", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "ResumeHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{3, "PreferredMaximum", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "ClientInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_DHCP_CLIENT_INFO_ARRAY_V4", 64, IN },
		{5, "ClientsRead", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{6, "ClientsTotal", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "DhcpEnumSubnetClientsV6",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ServerIpAddress", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "SubnetAddress", NKT_DBOBJCLASS_Struct, "_DHCP_IPV6_ADDRESS", 128, IN },
		{2, "ResumeHandle", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DHCP_IPV6_ADDRESS", 128, INOUT },
		{3, "PreferredMaximum", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "ClientInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_DHCP_CLIENT_INFO_ARRAY_V6", 64, INOUT },
		{5, "ClientsRead", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{6, "ClientsTotal", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "DhcpEnumSubnetClientsVQ",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ServerIpAddress", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "SubnetAddress", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "ResumeHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{3, "PreferredMaximum", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "ClientInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_DHCP_CLIENT_INFO_ARRAY_VQ", 64, INOUT },
		{5, "ClientsRead", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{6, "ClientsTotal", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "DhcpEnumSubnetClientsV5",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ServerIpAddress", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "SubnetAddress", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "ResumeHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{3, "PreferredMaximum", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "ClientInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_DHCP_CLIENT_INFO_ARRAY_V5", 64, INOUT },
		{5, "ClientsRead", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{6, "ClientsTotal", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "DhcpGetServerBindingInfo",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ServerIpAddress", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{1, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "BindElementsInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "_DHCP_BIND_ELEMENT_ARRAY", 64, INOUT },
	}
	},
};

int dhcpsapiarraySize = (sizeof(dhcpsapi_info) / sizeof(dhcpsapi_info[0]));