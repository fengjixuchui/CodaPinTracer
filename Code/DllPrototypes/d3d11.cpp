#include "../Pyrebox_libcalls.h"

libcall_info_t d3d11_info[] = {
	{ "D3D11CreateDeviceAndSwapChain",12,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pAdapter", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IDXGIAdapter", 32, IN },
		{1, "DriverType", NKT_DBOBJCLASS_Enumeration, "D3D_DRIVER_TYPE", 32, IN },
		{2, "Software", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "pFeatureLevels", NKT_DBOBJCLASS_Enumeration | NKT_DBOBJCLASS_Pointer, "D3D_FEATURE_LEVEL", 32, IN },
		{5, "FeatureLevels", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "SDKVersion", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{7, "pSwapChainDesc", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "DXGI_SWAP_CHAIN_DESC", 480, IN },
		{8, "ppSwapChain", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "IDXGISwapChain", 32, IN },
		{9, "ppDevice", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ID3D11Device", 32, IN },
		{10, "pFeatureLevel", NKT_DBOBJCLASS_Enumeration | NKT_DBOBJCLASS_Pointer, "D3D_FEATURE_LEVEL", 32, IN },
		{11, "ppImmediateContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ID3D11DeviceContext", 32, IN },
	}
	},
	{ "D3D11CreateDevice",10,
	{ 
		{-1, "Return value", NKT_DBFUNDTYPE_SignedDoubleWord, 0, 4, INOUT },
		{0, "pAdapter", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_Pointer, "IDXGIAdapter", 32, IN },
		{1, "DriverType", NKT_DBOBJCLASS_Enumeration, "D3D_DRIVER_TYPE", 32, IN },
		{2, "Software", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{3, "Flags", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{4, "pFeatureLevels", NKT_DBOBJCLASS_Enumeration | NKT_DBOBJCLASS_Pointer, "D3D_FEATURE_LEVEL", 32, IN },
		{5, "FeatureLevels", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{6, "SDKVersion", NKT_DBFUNDTYPE_UnsignedDoubleWord, 0, 4, IN },
		{7, "ppDevice", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ID3D11Device", 32, IN },
		{8, "pFeatureLevel", NKT_DBOBJCLASS_Enumeration | NKT_DBOBJCLASS_Pointer, "D3D_FEATURE_LEVEL", 32, IN },
		{9, "ppImmediateContext", NKT_DBOBJCLASS_Struct | NKT_DBOBJCLASS_PointerPointer, "ID3D11DeviceContext", 32, IN },
	}
	},
};

int d3d11arraySize = (sizeof(d3d11_info) / sizeof(d3d11_info[0]));