#include "../Pyrebox_libcalls.h"

libcall_info_t dxva2_info[] = {
	{ "GetMonitorDisplayAreaPosition",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hMonitor", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "ptPositionType", NKT_DBOBJCLASS_Enumeration, "_MC_POSITION_TYPE", 32, IN },
		{2, "pdwMinimumPosition", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{3, "pdwCurrentPosition", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{4, "pdwMaximumPosition", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "DXVAHD_CreateDevice",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pD3DDevice", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IDirect3DDevice9Ex", 32, IN },
		{1, "pContentDesc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_DXVAHD_CONTENT_DESC", 288, IN },
		{2, "Usage", NKT_DBOBJCLASS_Enumeration, "_DXVAHD_DEVICE_USAGE", 32, IN },
		{3, "pPlugin", NKT_DBOBJCLASS_Typedef, 0, 0, IN },
		{4, "ppDevice", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IDXVAHD_Device", 32, INOUT },
	}
	},
	{ "GetNumberOfPhysicalMonitorsFromHMONITOR",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hMonitor", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pdwNumberOfPhysicalMonitors", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "GetMonitorDisplayAreaSize",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hMonitor", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "stSizeType", NKT_DBOBJCLASS_Enumeration, "_MC_SIZE_TYPE", 32, IN },
		{2, "pdwMinimumWidthOrHeight", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{3, "pdwCurrentWidthOrHeight", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{4, "pdwMaximumWidthOrHeight", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "GetMonitorContrast",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hMonitor", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pdwMinimumContrast", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{2, "pdwCurrentContrast", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{3, "pdwMaximumContrast", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "GetMonitorTechnologyType",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hMonitor", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pdtyDisplayTechnologyType", NKT_DBOBJCLASS_Enumeration | NKT_DBOBJCLASS_Pointer, "_MC_DISPLAY_TECHNOLOGY_TYPE", 32, IN },
	}
	},
	{ "SetMonitorBrightness",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hMonitor", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwNewBrightness", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetTimingReport",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hMonitor", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pmtrMonitorTimingReport", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_MC_TIMING_REPORT", 72, IN },
	}
	},
	{ "GetPhysicalMonitorsFromHMONITOR",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hMonitor", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwPhysicalMonitorArraySize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pPhysicalMonitorArray", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_PHYSICAL_MONITOR", 2080, IN },
	}
	},
	{ "DXVA2CreateVideoService",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pDD", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IDirect3DDevice9", 32, IN },
		{1, "riid", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Reference, "_GUID", 128, IN },
		{2, "ppService", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_PointerPointer, 0, 0, IN },
	}
	},
	{ "OPMGetVideoOutputsFromHMONITOR",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hMonitor", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "vos", NKT_DBOBJCLASS_Enumeration, "_OPM_VIDEO_OUTPUT_SEMANTICS", 32, IN },
		{2, "pulNumVideoOutputs", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{3, "pppOPMVideoOutputArray", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer | NKT_DBOBJCLASS_Pointer | NKT_DBOBJCLASS_Pointer, "IOPMVideoOutput", 32, INOUT },
	}
	},
	{ "GetPhysicalMonitorsFromIDirect3DDevice9",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pDirect3DDevice9", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IDirect3DDevice9", 32, IN },
		{1, "dwPhysicalMonitorArraySize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pPhysicalMonitorArray", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_PHYSICAL_MONITOR", 2080, IN },
	}
	},
	{ "SetVCPFeature",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hMonitor", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "bVCPCode", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, IN },
		{2, "dwNewValue", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetMonitorRedGreenOrBlueDrive",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hMonitor", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dtDriveType", NKT_DBOBJCLASS_Enumeration, "_MC_DRIVE_TYPE", 32, IN },
		{2, "dwNewDrive", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "RestoreMonitorFactoryColorDefaults",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hMonitor", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DegaussMonitor",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hMonitor", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DestroyPhysicalMonitor",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hMonitor", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetMonitorCapabilities",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hMonitor", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pdwMonitorCapabilities", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{2, "pdwSupportedColorTemperatures", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "GetMonitorBrightness",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hMonitor", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pdwMinimumBrightness", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{2, "pdwCurrentBrightness", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{3, "pdwMaximumBrightness", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "SaveCurrentSettings",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hMonitor", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "DXVA2CreateDirect3DDeviceManager9",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pResetToken", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{1, "ppDeviceManager", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IDirect3DDeviceManager9", 32, IN },
	}
	},
	{ "GetMonitorRedGreenOrBlueDrive",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hMonitor", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dtDriveType", NKT_DBOBJCLASS_Enumeration, "_MC_DRIVE_TYPE", 32, IN },
		{2, "pdwMinimumDrive", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{3, "pdwCurrentDrive", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{4, "pdwMaximumDrive", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "SaveCurrentMonitorSettings",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hMonitor", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "RestoreMonitorFactoryDefaults",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hMonitor", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetMonitorColorTemperature",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hMonitor", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "ctCurrentColorTemperature", NKT_DBOBJCLASS_Enumeration, "_MC_COLOR_TEMPERATURE", 32, IN },
	}
	},
	{ "DestroyPhysicalMonitors",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "dwPhysicalMonitorArraySize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pPhysicalMonitorArray", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_PHYSICAL_MONITOR", 2080, IN },
	}
	},
	{ "SetMonitorDisplayAreaSize",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hMonitor", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "stSizeType", NKT_DBOBJCLASS_Enumeration, "_MC_SIZE_TYPE", 32, IN },
		{2, "dwNewDisplayAreaWidthOrHeight", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetNumberOfPhysicalMonitorsFromIDirect3DDevice9",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pDirect3DDevice9", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IDirect3DDevice9", 32, IN },
		{1, "pdwNumberOfPhysicalMonitors", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "GetCapabilitiesStringLength",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hMonitor", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pdwCapabilitiesStringLengthInCharacters", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "SetMonitorContrast",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hMonitor", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "dwNewContrast", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "GetMonitorColorTemperature",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hMonitor", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pctCurrentColorTemperature", NKT_DBOBJCLASS_Enumeration | NKT_DBOBJCLASS_Pointer, "_MC_COLOR_TEMPERATURE", 32, IN },
	}
	},
	{ "GetMonitorRedGreenOrBlueGain",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hMonitor", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "gtGainType", NKT_DBOBJCLASS_Enumeration, "_MC_GAIN_TYPE", 32, IN },
		{2, "pdwMinimumGain", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{3, "pdwCurrentGain", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{4, "pdwMaximumGain", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "SetMonitorRedGreenOrBlueGain",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hMonitor", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "gtGainType", NKT_DBOBJCLASS_Enumeration, "_MC_GAIN_TYPE", 32, IN },
		{2, "dwNewGain", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "SetMonitorDisplayAreaPosition",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hMonitor", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "ptPositionType", NKT_DBOBJCLASS_Enumeration, "_MC_POSITION_TYPE", 32, IN },
		{2, "dwNewPosition", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "OPMGetVideoOutputsFromIDirect3DDevice9Object",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pDirect3DDevice9", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IDirect3DDevice9", 32, IN },
		{1, "vos", NKT_DBOBJCLASS_Enumeration, "_OPM_VIDEO_OUTPUT_SEMANTICS", 32, IN },
		{2, "pulNumVideoOutputs", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, INOUT },
		{3, "pppOPMVideoOutputArray", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer | NKT_DBOBJCLASS_Pointer | NKT_DBOBJCLASS_Pointer, "IOPMVideoOutput", 32, INOUT },
	}
	},
	{ "GetVCPFeatureAndVCPFeatureReply",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hMonitor", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "bVCPCode", NKT_DBFUNDTYPE_UnsignedByte, 0, 1, IN },
		{2, "pvct", NKT_DBOBJCLASS_Enumeration | NKT_DBOBJCLASS_Pointer, "_MC_VCP_CODE_TYPE", 32, IN },
		{3, "pdwCurrentValue", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
		{4, "pdwMaximumValue", NKT_DBFUNDTYPE_UnsignedDoubleWord | NKT_DBOBJCLASS_Pointer, 0, 4, IN },
	}
	},
	{ "CapabilitiesRequestAndCapabilitiesReply",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "hMonitor", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "pszASCIICapabilitiesString", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{2, "dwCapabilitiesStringLengthInCharacters", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
};

int dxva2arraySize = (sizeof(dxva2_info) / sizeof(dxva2_info[0]));