#include "../Pyrebox_libcalls.h"

libcall_info_t virtdisk_info[] = {
	{ "CompactVirtualDisk",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "VirtualDiskHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "Flags", NKT_DBOBJCLASS_Enumeration, "_COMPACT_VIRTUAL_DISK_FLAG", 32, IN },
		{2, "Parameters", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_COMPACT_VIRTUAL_DISK_PARAMETERS", 64, IN },
		{3, "Overlapped", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_OVERLAPPED", 160, IN },
	}
	},
	{ "GetVirtualDiskInformation",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "VirtualDiskHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "VirtualDiskInfoSize", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{2, "VirtualDiskInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_GET_VIRTUAL_DISK_INFO", 256, INOUT },
		{3, "SizeUsed", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "AttachVirtualDisk",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "VirtualDiskHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "SecurityDescriptor", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{2, "Flags", NKT_DBOBJCLASS_Enumeration, "_ATTACH_VIRTUAL_DISK_FLAG", 32, IN },
		{3, "ProviderSpecificFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "Parameters", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_ATTACH_VIRTUAL_DISK_PARAMETERS", 64, IN },
		{5, "Overlapped", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_OVERLAPPED", 160, IN },
	}
	},
	{ "MergeVirtualDisk",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "VirtualDiskHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "Flags", NKT_DBOBJCLASS_Enumeration, "_MERGE_VIRTUAL_DISK_FLAG", 32, IN },
		{2, "Parameters", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MERGE_VIRTUAL_DISK_PARAMETERS", 96, IN },
		{3, "Overlapped", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_OVERLAPPED", 160, IN },
	}
	},
	{ "OpenVirtualDisk",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "VirtualStorageType", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_VIRTUAL_STORAGE_TYPE", 160, IN },
		{1, "Path", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "VirtualDiskAccessMask", NKT_DBOBJCLASS_Enumeration, "_VIRTUAL_DISK_ACCESS_MASK", 32, IN },
		{3, "Flags", NKT_DBOBJCLASS_Enumeration, "_OPEN_VIRTUAL_DISK_FLAG", 32, IN },
		{4, "Parameters", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_OPEN_VIRTUAL_DISK_PARAMETERS", 224, IN },
		{5, "Handle", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "ExpandVirtualDisk",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "VirtualDiskHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "Flags", NKT_DBOBJCLASS_Enumeration, "_EXPAND_VIRTUAL_DISK_FLAG", 32, IN },
		{2, "Parameters", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_EXPAND_VIRTUAL_DISK_PARAMETERS", 128, IN },
		{3, "Overlapped", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_OVERLAPPED", 160, IN },
	}
	},
	{ "GetVirtualDiskOperationProgress",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "VirtualDiskHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "Overlapped", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_OVERLAPPED", 160, IN },
		{2, "Progress", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_VIRTUAL_DISK_PROGRESS", 192, INOUT },
	}
	},
	{ "SetVirtualDiskInformation",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "VirtualDiskHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "VirtualDiskInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_SET_VIRTUAL_DISK_INFO", 160, IN },
	}
	},
	{ "GetVirtualDiskPhysicalPath",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "VirtualDiskHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "DiskPathSizeInBytes", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{2, "DiskPath", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, INOUT },
	}
	},
	{ "CreateVirtualDisk",9,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "VirtualStorageType", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_VIRTUAL_STORAGE_TYPE", 160, IN },
		{1, "Path", NKT_DBFUNDTYPE_WideChar | NKT_DBOBJCLASS_Pointer, 0, 2, IN },
		{2, "VirtualDiskAccessMask", NKT_DBOBJCLASS_Enumeration, "_VIRTUAL_DISK_ACCESS_MASK", 32, IN },
		{3, "SecurityDescriptor", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{4, "Flags", NKT_DBOBJCLASS_Enumeration, "_CREATE_VIRTUAL_DISK_FLAG", 32, IN },
		{5, "ProviderSpecificFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "Parameters", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_CREATE_VIRTUAL_DISK_PARAMETERS", 896, IN },
		{7, "Overlapped", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_OVERLAPPED", 160, IN },
		{8, "Handle", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "GetStorageDependencyInformation",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "ObjectHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "Flags", NKT_DBOBJCLASS_Enumeration, "_GET_STORAGE_DEPENDENCY_FLAG", 32, IN },
		{2, "StorageDependencyInfoSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "StorageDependencyInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_STORAGE_DEPENDENCY_INFO", 64, INOUT },
		{4, "SizeUsed", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
	}
	},
	{ "DetachVirtualDisk",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, INOUT },
		{0, "VirtualDiskHandle", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "Flags", NKT_DBOBJCLASS_Enumeration, "_DETACH_VIRTUAL_DISK_FLAG", 32, IN },
		{2, "ProviderSpecificFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
};

int virtdiskarraySize = (sizeof(virtdisk_info) / sizeof(virtdisk_info[0]));