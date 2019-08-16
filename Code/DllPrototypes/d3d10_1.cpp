#include "../Pyrebox_libcalls.h"

libcall_info_t d3d10_1_info[] = {
	{ "D3D10StateBlockMaskUnion",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pA", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_D3D10_STATE_BLOCK_MASK", 608, IN },
		{1, "pB", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_D3D10_STATE_BLOCK_MASK", 608, IN },
		{2, "pResult", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_D3D10_STATE_BLOCK_MASK", 608, IN },
	}
	},
	{ "D3D10StateBlockMaskDisableAll",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pMask", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_D3D10_STATE_BLOCK_MASK", 608, IN },
	}
	},
	{ "D3D10GetOutputSignatureBlob",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pShaderBytecode", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "BytecodeLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "ppSignatureBlob", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ID3D10Blob", 32, IN },
	}
	},
	{ "D3D10GetInputSignatureBlob",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pShaderBytecode", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "BytecodeLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "ppSignatureBlob", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ID3D10Blob", 32, IN },
	}
	},
	{ "D3D10CreateStateBlock",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pDevice", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ID3D10Device", 32, IN },
		{1, "pStateBlockMask", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_D3D10_STATE_BLOCK_MASK", 608, IN },
		{2, "ppStateBlock", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ID3D10StateBlock", 32, IN },
	}
	},
	{ "D3D10StateBlockMaskIntersect",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pA", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_D3D10_STATE_BLOCK_MASK", 608, IN },
		{1, "pB", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_D3D10_STATE_BLOCK_MASK", 608, IN },
		{2, "pResult", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_D3D10_STATE_BLOCK_MASK", 608, IN },
	}
	},
	{ "D3D10GetGeometryShaderProfile",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{0, "pDevice", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ID3D10Device", 32, IN },
	}
	},
	{ "D3D10StateBlockMaskDifference",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pA", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_D3D10_STATE_BLOCK_MASK", 608, IN },
		{1, "pB", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_D3D10_STATE_BLOCK_MASK", 608, IN },
		{2, "pResult", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_D3D10_STATE_BLOCK_MASK", 608, IN },
	}
	},
	{ "D3D10CreateBlob",2,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "NumBytes", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{1, "ppBuffer", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ID3D10Blob", 32, IN },
	}
	},
	{ "D3D10PreprocessShader",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pSrcData", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "SrcDataSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pFileName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "pDefines", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_D3D_SHADER_MACRO", 64, IN },
		{4, "pInclude", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ID3DInclude", 32, IN },
		{5, "ppShaderText", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ID3D10Blob", 32, IN },
		{6, "ppErrorMsgs", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ID3D10Blob", 32, IN },
	}
	},
	{ "D3D10DisassembleEffect",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pEffect", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ID3D10Effect", 32, IN },
		{1, "EnableColorCode", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{2, "ppDisassembly", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ID3D10Blob", 32, IN },
	}
	},
	{ "D3D10ReflectShader",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pShaderBytecode", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "BytecodeLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "ppReflector", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ID3D10ShaderReflection", 32, IN },
	}
	},
	{ "D3D10GetInputAndOutputSignatureBlob",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pShaderBytecode", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "BytecodeLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "ppSignatureBlob", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ID3D10Blob", 32, IN },
	}
	},
	{ "D3D10StateBlockMaskDisableCapture",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pMask", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_D3D10_STATE_BLOCK_MASK", 608, IN },
		{1, "StateType", NKT_DBOBJCLASS_Enumeration, "_D3D10_DEVICE_STATE_TYPES", 32, IN },
		{2, "RangeStart", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "RangeLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "D3D10CreateEffectPoolFromMemory",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pData", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "DataLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "FXFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pDevice", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ID3D10Device", 32, IN },
		{4, "ppEffectPool", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ID3D10EffectPool", 32, IN },
	}
	},
	{ "D3D10StateBlockMaskEnableAll",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pMask", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_D3D10_STATE_BLOCK_MASK", 608, IN },
	}
	},
	{ "D3D10DisassembleShader",5,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pShader", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "BytecodeLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "EnableColorCode", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, IN },
		{3, "pComments", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{4, "ppDisassembly", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ID3D10Blob", 32, IN },
	}
	},
	{ "D3D10CreateDeviceAndSwapChain1",9,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pAdapter", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IDXGIAdapter", 32, IN },
		{1, "DriverType", NKT_DBOBJCLASS_Enumeration, "D3D10_DRIVER_TYPE", 32, IN },
		{2, "Software", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "HardwareLevel", NKT_DBOBJCLASS_Enumeration, "D3D10_FEATURE_LEVEL1", 32, IN },
		{5, "SDKVersion", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "pSwapChainDesc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "DXGI_SWAP_CHAIN_DESC", 480, IN },
		{7, "ppSwapChain", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IDXGISwapChain", 32, IN },
		{8, "ppDevice", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ID3D10Device1", 32, IN },
	}
	},
	{ "D3D10CreateEffectFromMemory",6,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pData", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "DataLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "FXFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "pDevice", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ID3D10Device", 32, IN },
		{4, "pEffectPool", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ID3D10EffectPool", 32, IN },
		{5, "ppEffect", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ID3D10Effect", 32, IN },
	}
	},
	{ "D3D10GetPixelShaderProfile",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{0, "pDevice", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ID3D10Device", 32, IN },
	}
	},
	{ "D3D10GetVertexShaderProfile",1,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, INOUT },
		{0, "pDevice", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ID3D10Device", 32, IN },
	}
	},
	{ "D3D10CompileShader",10,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pSrcData", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{1, "SrcDataSize", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pFileName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "pDefines", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_D3D_SHADER_MACRO", 64, IN },
		{4, "pInclude", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ID3DInclude", 32, IN },
		{5, "pFunctionName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{6, "pProfile", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{7, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{8, "ppShader", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ID3D10Blob", 32, IN },
		{9, "ppErrorMsgs", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ID3D10Blob", 32, IN },
	}
	},
	{ "D3D10CreateDevice1",7,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pAdapter", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IDXGIAdapter", 32, IN },
		{1, "DriverType", NKT_DBOBJCLASS_Enumeration, "D3D10_DRIVER_TYPE", 32, IN },
		{2, "Software", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "HardwareLevel", NKT_DBOBJCLASS_Enumeration, "D3D10_FEATURE_LEVEL1", 32, IN },
		{5, "SDKVersion", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "ppDevice", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ID3D10Device1", 32, IN },
	}
	},
	{ "D3D10CompileEffectFromMemory",9,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pData", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "DataLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "pSrcFileName", NKT_DBFUNDTYPE_AnsiChar | NKT_DBOBJCLASS_Pointer, 0, 1, IN },
		{3, "pDefines", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_D3D_SHADER_MACRO", 64, IN },
		{4, "pInclude", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "ID3DInclude", 32, IN },
		{5, "HLSLFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "FXFlags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{7, "ppCompiledEffect", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ID3D10Blob", 32, IN },
		{8, "ppErrors", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ID3D10Blob", 32, IN },
	}
	},
	{ "D3D10GetShaderDebugInfo",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pShaderBytecode", NKT_DBFUNDTYPE_Void | NKT_DBOBJCLASS_Pointer, 0, 0, IN },
		{1, "BytecodeLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{2, "ppDebugInfo", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ID3D10Blob", 32, IN },
	}
	},
	{ "D3D10StateBlockMaskEnableCapture",4,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pMask", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_D3D10_STATE_BLOCK_MASK", 608, IN },
		{1, "StateType", NKT_DBOBJCLASS_Enumeration, "_D3D10_DEVICE_STATE_TYPES", 32, IN },
		{2, "RangeStart", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "RangeLength", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
	{ "D3D10StateBlockMaskGetSetting",3,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pMask", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "_D3D10_STATE_BLOCK_MASK", 608, IN },
		{1, "StateType", NKT_DBOBJCLASS_Enumeration, "_D3D10_DEVICE_STATE_TYPES", 32, IN },
		{2, "Entry", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
	}
	},
};

int d3d10_1arraySize = (sizeof(d3d10_1_info) / sizeof(d3d10_1_info[0]));