#include "Pyrebox_libcalls.h"

//Primary hash table, mapping Dll name to secondary hash table
hash_map<string, hash_map<string, libcall_info_t*>* > dllToHash;

//Hash table for routines without a Dll
hash_map< string, libcall_info_t* > libstringToProto;

//Libcalls enums hash map
static std::hash_map<string, lib_const_values_t*> mapOfLibConsts;

//Initializes auxiliary hashtable which maps the DLLname to a struct containing pointer of prototypes array and its size
void initDllArrayHash(hash_map<string, dllArray_info*> &mapDllArray) {

	dllArray_info* dllArray_struct;

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = ASycFilt_info;
	dllArray_struct->sizeArray = ASycFiltarraySize;
	mapDllArray.insert(std::make_pair("asycfilt", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = AclUI_info;
	dllArray_struct->sizeArray = AclUIarraySize;
	mapDllArray.insert(std::make_pair("aclui", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = ActiveDS_info;
	dllArray_struct->sizeArray = ActiveDSarraySize;
	mapDllArray.insert(std::make_pair("activeds", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = AdvAPI32_info;
	dllArray_struct->sizeArray = AdvAPI32arraySize;
	mapDllArray.insert(std::make_pair("advapi32", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = AuthZ_info;
	dllArray_struct->sizeArray = AuthZarraySize;
	mapDllArray.insert(std::make_pair("authz", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = Cabinet_info;
	dllArray_struct->sizeArray = CabinetarraySize;
	mapDllArray.insert(std::make_pair("cabinet", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = CertPolEng_info;
	dllArray_struct->sizeArray = CertPolEngarraySize;
	mapDllArray.insert(std::make_pair("certpoleng", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = ClusApi_info;
	dllArray_struct->sizeArray = ClusApiarraySize;
	mapDllArray.insert(std::make_pair("clusapi", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = ComCtl32_info;
	dllArray_struct->sizeArray = ComCtl32arraySize;
	mapDllArray.insert(std::make_pair("comctl32", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = ComDlg32_info;
	dllArray_struct->sizeArray = ComDlg32arraySize;
	mapDllArray.insert(std::make_pair("comdlg32", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = ComSvcs_info;
	dllArray_struct->sizeArray = ComSvcsarraySize;
	mapDllArray.insert(std::make_pair("comsvcs", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = Crypt32_info;
	dllArray_struct->sizeArray = Crypt32arraySize;
	mapDllArray.insert(std::make_pair("crypt32", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = CryptNet_info;
	dllArray_struct->sizeArray = CryptNetarraySize;
	mapDllArray.insert(std::make_pair("cryptnet", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = DSProp_info;
	dllArray_struct->sizeArray = DSProparraySize;
	mapDllArray.insert(std::make_pair("dsprop", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = DSUIExt_info;
	dllArray_struct->sizeArray = DSUIExtarraySize;
	mapDllArray.insert(std::make_pair("dsuiext", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = DbgEng_info;
	dllArray_struct->sizeArray = DbgEngarraySize;
	mapDllArray.insert(std::make_pair("dbgeng", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = DbgHelp_info;
	dllArray_struct->sizeArray = DbgHelparraySize;
	mapDllArray.insert(std::make_pair("dbghelp", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = DhcpCSvc_info;
	dllArray_struct->sizeArray = DhcpCSvcarraySize;
	mapDllArray.insert(std::make_pair("dhcpcsvc", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = DnsAPI_info;
	dllArray_struct->sizeArray = DnsAPIarraySize;
	mapDllArray.insert(std::make_pair("dnsapi", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = ElsCore_info;
	dllArray_struct->sizeArray = ElsCorearraySize;
	mapDllArray.insert(std::make_pair("elscore", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = FaultRep_info;
	dllArray_struct->sizeArray = FaultReparraySize;
	mapDllArray.insert(std::make_pair("faultrep", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = GPEdit_info;
	dllArray_struct->sizeArray = GPEditarraySize;
	mapDllArray.insert(std::make_pair("gpedit", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = Gdi32_info;
	dllArray_struct->sizeArray = Gdi32arraySize;
	mapDllArray.insert(std::make_pair("gdi32", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = GdiPlus_info;
	dllArray_struct->sizeArray = GdiPlusarraySize;
	mapDllArray.insert(std::make_pair("gdiplus", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = HLink_info;
	dllArray_struct->sizeArray = HLinkarraySize;
	mapDllArray.insert(std::make_pair("hlink", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = IPHlpApi_info;
	dllArray_struct->sizeArray = IPHlpApiarraySize;
	mapDllArray.insert(std::make_pair("iphlpapi", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = Icm32_info;
	dllArray_struct->sizeArray = Icm32arraySize;
	mapDllArray.insert(std::make_pair("icm32", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = Icmui_info;
	dllArray_struct->sizeArray = IcmuiarraySize;
	mapDllArray.insert(std::make_pair("icmui", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = ImageHlp_info;
	dllArray_struct->sizeArray = ImageHlparraySize;
	mapDllArray.insert(std::make_pair("imagehlp", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = Imm32_info;
	dllArray_struct->sizeArray = Imm32arraySize;
	mapDllArray.insert(std::make_pair("imm32", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = Iprop_info;
	dllArray_struct->sizeArray = IproparraySize;
	mapDllArray.insert(std::make_pair("iprop", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = Kernel32_info;
	dllArray_struct->sizeArray = Kernel32arraySize;
	mapDllArray.insert(std::make_pair("kernel32", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = KernelBase_info;
	dllArray_struct->sizeArray = KernelBasearraySize;
	mapDllArray.insert(std::make_pair("kernelbase", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = LoadPerf_info;
	dllArray_struct->sizeArray = LoadPerfarraySize;
	mapDllArray.insert(std::make_pair("loadperf", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = Lz32_info;
	dllArray_struct->sizeArray = Lz32arraySize;
	mapDllArray.insert(std::make_pair("lz32", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = MAPI32_info;
	dllArray_struct->sizeArray = MAPI32arraySize;
	mapDllArray.insert(std::make_pair("mapi32", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = MSAcm32_info;
	dllArray_struct->sizeArray = MSAcm32arraySize;
	mapDllArray.insert(std::make_pair("msacm32", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = MSImg32_info;
	dllArray_struct->sizeArray = MSImg32arraySize;
	mapDllArray.insert(std::make_pair("msimg32", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = MSRating_info;
	dllArray_struct->sizeArray = MSRatingarraySize;
	mapDllArray.insert(std::make_pair("msrating", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = MSTask_info;
	dllArray_struct->sizeArray = MSTaskarraySize;
	mapDllArray.insert(std::make_pair("mstask", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = Mf_info;
	dllArray_struct->sizeArray = MfarraySize;
	mapDllArray.insert(std::make_pair("mf", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = Mfplat_info;
	dllArray_struct->sizeArray = MfplatarraySize;
	mapDllArray.insert(std::make_pair("mfplat", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = MgmtAPI_info;
	dllArray_struct->sizeArray = MgmtAPIarraySize;
	mapDllArray.insert(std::make_pair("mgmtapi", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = Mpr_info;
	dllArray_struct->sizeArray = MprarraySize;
	mapDllArray.insert(std::make_pair("mpr", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = Mprapi_info;
	dllArray_struct->sizeArray = MprapiarraySize;
	mapDllArray.insert(std::make_pair("mprapi", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = MsWSock_info;
	dllArray_struct->sizeArray = MsWSockarraySize;
	mapDllArray.insert(std::make_pair("mswsock", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = Mscms_info;
	dllArray_struct->sizeArray = MscmsarraySize;
	mapDllArray.insert(std::make_pair("mscms", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = Msi_info;
	dllArray_struct->sizeArray = MsiarraySize;
	mapDllArray.insert(std::make_pair("msi", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = NetAPI32_info;
	dllArray_struct->sizeArray = NetAPI32arraySize;
	mapDllArray.insert(std::make_pair("netapi32", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = NtDsAPI_info;
	dllArray_struct->sizeArray = NtDsAPIarraySize;
	mapDllArray.insert(std::make_pair("ntdsapi", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = Ole32_info;
	dllArray_struct->sizeArray = Ole32arraySize;
	mapDllArray.insert(std::make_pair("ole32", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = OleAcc_info;
	dllArray_struct->sizeArray = OleAccarraySize;
	mapDllArray.insert(std::make_pair("oleacc", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = OleAut32_info;
	dllArray_struct->sizeArray = OleAut32arraySize;
	mapDllArray.insert(std::make_pair("oleaut32", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = OleDlg_info;
	dllArray_struct->sizeArray = OleDlgarraySize;
	mapDllArray.insert(std::make_pair("oledlg", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = OlePro32_info;
	dllArray_struct->sizeArray = OlePro32arraySize;
	mapDllArray.insert(std::make_pair("olepro32", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = OpenGL32_info;
	dllArray_struct->sizeArray = OpenGL32arraySize;
	mapDllArray.insert(std::make_pair("opengl32", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = Pdh_info;
	dllArray_struct->sizeArray = PdharraySize;
	mapDllArray.insert(std::make_pair("pdh", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = RASAPI32_info;
	dllArray_struct->sizeArray = RASAPI32arraySize;
	mapDllArray.insert(std::make_pair("rasapi32", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = RASDlg_info;
	dllArray_struct->sizeArray = RASDlgarraySize;
	mapDllArray.insert(std::make_pair("rasdlg", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = ResUtils_info;
	dllArray_struct->sizeArray = ResUtilsarraySize;
	mapDllArray.insert(std::make_pair("resutils", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = RichEd20_info;
	dllArray_struct->sizeArray = RichEd20arraySize;
	mapDllArray.insert(std::make_pair("riched20", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = RpcRT4_info;
	dllArray_struct->sizeArray = RpcRT4arraySize;
	mapDllArray.insert(std::make_pair("rpcrt4", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = Rpcns4_info;
	dllArray_struct->sizeArray = Rpcns4arraySize;
	mapDllArray.insert(std::make_pair("rpcns4", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = Rtm_info;
	dllArray_struct->sizeArray = RtmarraySize;
	mapDllArray.insert(std::make_pair("rtm", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = Rtutils_info;
	dllArray_struct->sizeArray = RtutilsarraySize;
	mapDllArray.insert(std::make_pair("rtutils", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = SCardDlg_info;
	dllArray_struct->sizeArray = SCardDlgarraySize;
	mapDllArray.insert(std::make_pair("scarddlg", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = Secur32_info;
	dllArray_struct->sizeArray = Secur32arraySize;
	mapDllArray.insert(std::make_pair("secur32", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = SensAPI_info;
	dllArray_struct->sizeArray = SensAPIarraySize;
	mapDllArray.insert(std::make_pair("sensapi", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = SetupAPI_info;
	dllArray_struct->sizeArray = SetupAPIarraySize;
	mapDllArray.insert(std::make_pair("setupapi", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = Sfc_info;
	dllArray_struct->sizeArray = SfcarraySize;
	mapDllArray.insert(std::make_pair("sfc", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = ShFolder_info;
	dllArray_struct->sizeArray = ShFolderarraySize;
	mapDllArray.insert(std::make_pair("shfolder", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = ShLwApi_info;
	dllArray_struct->sizeArray = ShLwApiarraySize;
	mapDllArray.insert(std::make_pair("shlwapi", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = SnmpAPI_info;
	dllArray_struct->sizeArray = SnmpAPIarraySize;
	mapDllArray.insert(std::make_pair("snmpapi", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = SrClient_info;
	dllArray_struct->sizeArray = SrClientarraySize;
	mapDllArray.insert(std::make_pair("srclient", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = Sti_info;
	dllArray_struct->sizeArray = StiarraySize;
	mapDllArray.insert(std::make_pair("sti", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = Tapi32_info;
	dllArray_struct->sizeArray = Tapi32arraySize;
	mapDllArray.insert(std::make_pair("tapi32", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = Traffic_info;
	dllArray_struct->sizeArray = TrafficarraySize;
	mapDllArray.insert(std::make_pair("traffic", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = UIAutomationCore_info;
	dllArray_struct->sizeArray = UIAutomationCorearraySize;
	mapDllArray.insert(std::make_pair("uiautomationcore", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = USP10_info;
	dllArray_struct->sizeArray = USP10arraySize;
	mapDllArray.insert(std::make_pair("usp10", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = Url_info;
	dllArray_struct->sizeArray = UrlarraySize;
	mapDllArray.insert(std::make_pair("url", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = Urlmon_info;
	dllArray_struct->sizeArray = UrlmonarraySize;
	mapDllArray.insert(std::make_pair("urlmon", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = User32_info;
	dllArray_struct->sizeArray = User32arraySize;
	mapDllArray.insert(std::make_pair("user32", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = UserEnv_info;
	dllArray_struct->sizeArray = UserEnvarraySize;
	mapDllArray.insert(std::make_pair("userenv", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = Uxtheme_info;
	dllArray_struct->sizeArray = UxthemearraySize;
	mapDllArray.insert(std::make_pair("uxtheme", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = VdmDbg_info;
	dllArray_struct->sizeArray = VdmDbgarraySize;
	mapDllArray.insert(std::make_pair("vdmdbg", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = Version_info;
	dllArray_struct->sizeArray = VersionarraySize;
	mapDllArray.insert(std::make_pair("version", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = WER_info;
	dllArray_struct->sizeArray = WERarraySize;
	mapDllArray.insert(std::make_pair("wer", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = WS2_32_info;
	dllArray_struct->sizeArray = WS2_32arraySize;
	mapDllArray.insert(std::make_pair("ws2_32", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = WSnmp32_info;
	dllArray_struct->sizeArray = WSnmp32arraySize;
	mapDllArray.insert(std::make_pair("wsnmp32", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = WSock32_info;
	dllArray_struct->sizeArray = WSock32arraySize;
	mapDllArray.insert(std::make_pair("wsock32", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = WebServices_info;
	dllArray_struct->sizeArray = WebServicesarraySize;
	mapDllArray.insert(std::make_pair("webservices", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = WinBio_info;
	dllArray_struct->sizeArray = WinBioarraySize;
	mapDllArray.insert(std::make_pair("winbio", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = WinFax_info;
	dllArray_struct->sizeArray = WinFaxarraySize;
	mapDllArray.insert(std::make_pair("winfax", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = WinInet_info;
	dllArray_struct->sizeArray = WinInetarraySize;
	mapDllArray.insert(std::make_pair("wininet", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = WinMM_info;
	dllArray_struct->sizeArray = WinMMarraySize;
	mapDllArray.insert(std::make_pair("winmm", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = WinSCard_info;
	dllArray_struct->sizeArray = WinSCardarraySize;
	mapDllArray.insert(std::make_pair("winscard", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = WinTrust_info;
	dllArray_struct->sizeArray = WinTrustarraySize;
	mapDllArray.insert(std::make_pair("wintrust", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = Wldap32_info;
	dllArray_struct->sizeArray = Wldap32arraySize;
	mapDllArray.insert(std::make_pair("wldap32", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = Wow32_info;
	dllArray_struct->sizeArray = Wow32arraySize;
	mapDllArray.insert(std::make_pair("wow32", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = WtsApi32_info;
	dllArray_struct->sizeArray = WtsApi32arraySize;
	mapDllArray.insert(std::make_pair("wtsapi32", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = advpack_info;
	dllArray_struct->sizeArray = advpackarraySize;
	mapDllArray.insert(std::make_pair("advpack", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = avifil32_info;
	dllArray_struct->sizeArray = avifil32arraySize;
	mapDllArray.insert(std::make_pair("avifil32", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = avrt_info;
	dllArray_struct->sizeArray = avrtarraySize;
	mapDllArray.insert(std::make_pair("avrt", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = bcrypt_info;
	dllArray_struct->sizeArray = bcryptarraySize;
	mapDllArray.insert(std::make_pair("bcrypt", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = clfsw32_info;
	dllArray_struct->sizeArray = clfsw32arraySize;
	mapDllArray.insert(std::make_pair("clfsw32", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = corrEngine_info;
	dllArray_struct->sizeArray = corrEnginearraySize;
	mapDllArray.insert(std::make_pair("correngine", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = credui_info;
	dllArray_struct->sizeArray = creduiarraySize;
	mapDllArray.insert(std::make_pair("credui", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = cryptui_info;
	dllArray_struct->sizeArray = cryptuiarraySize;
	mapDllArray.insert(std::make_pair("cryptui", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = cryptxml_info;
	dllArray_struct->sizeArray = cryptxmlarraySize;
	mapDllArray.insert(std::make_pair("cryptxml", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = cscapi_info;
	dllArray_struct->sizeArray = cscapiarraySize;
	mapDllArray.insert(std::make_pair("cscapi", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = d3d10_info;
	dllArray_struct->sizeArray = d3d10arraySize;
	mapDllArray.insert(std::make_pair("d3d10", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = d3d10_1_info;
	dllArray_struct->sizeArray = d3d10_1arraySize;
	mapDllArray.insert(std::make_pair("d3d10_1", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = d3d11_info;
	dllArray_struct->sizeArray = d3d11arraySize;
	mapDllArray.insert(std::make_pair("d3d11", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = d3d9_info;
	dllArray_struct->sizeArray = d3d9arraySize;
	mapDllArray.insert(std::make_pair("d3d9", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = davclnt_info;
	dllArray_struct->sizeArray = davclntarraySize;
	mapDllArray.insert(std::make_pair("davclnt", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = dciman32_info;
	dllArray_struct->sizeArray = dciman32arraySize;
	mapDllArray.insert(std::make_pair("dciman32", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = dhcpcsvc6_info;
	dllArray_struct->sizeArray = dhcpcsvc6arraySize;
	mapDllArray.insert(std::make_pair("dhcpcsvc6", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = dhcpsapi_info;
	dllArray_struct->sizeArray = dhcpsapiarraySize;
	mapDllArray.insert(std::make_pair("dhcpsapi", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = dinput8_info;
	dllArray_struct->sizeArray = dinput8arraySize;
	mapDllArray.insert(std::make_pair("dinput8", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = dpx_info;
	dllArray_struct->sizeArray = dpxarraySize;
	mapDllArray.insert(std::make_pair("dpx", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = drt_info;
	dllArray_struct->sizeArray = drtarraySize;
	mapDllArray.insert(std::make_pair("drt", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = drtprov_info;
	dllArray_struct->sizeArray = drtprovarraySize;
	mapDllArray.insert(std::make_pair("drtprov", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = drttransport_info;
	dllArray_struct->sizeArray = drttransportarraySize;
	mapDllArray.insert(std::make_pair("drttransport", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = dsound_info;
	dllArray_struct->sizeArray = dsoundarraySize;
	mapDllArray.insert(std::make_pair("dsound", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = dwmapi_info;
	dllArray_struct->sizeArray = dwmapiarraySize;
	mapDllArray.insert(std::make_pair("dwmapi", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = dxgi_info;
	dllArray_struct->sizeArray = dxgiarraySize;
	mapDllArray.insert(std::make_pair("dxgi", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = dxva2_info;
	dllArray_struct->sizeArray = dxva2arraySize;
	mapDllArray.insert(std::make_pair("dxva2", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = eappcfg_info;
	dllArray_struct->sizeArray = eappcfgarraySize;
	mapDllArray.insert(std::make_pair("eappcfg", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = eappprxy_info;
	dllArray_struct->sizeArray = eappprxyarraySize;
	mapDllArray.insert(std::make_pair("eappprxy", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = encapi_info;
	dllArray_struct->sizeArray = encapiarraySize;
	mapDllArray.insert(std::make_pair("encapi", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = esent_info;
	dllArray_struct->sizeArray = esentarraySize;
	mapDllArray.insert(std::make_pair("esent", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = evr_info;
	dllArray_struct->sizeArray = evrarraySize;
	mapDllArray.insert(std::make_pair("evr", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = fontsub_info;
	dllArray_struct->sizeArray = fontsubarraySize;
	mapDllArray.insert(std::make_pair("fontsub", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = fwpuclnt_info;
	dllArray_struct->sizeArray = fwpuclntarraySize;
	mapDllArray.insert(std::make_pair("fwpuclnt", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = fxsutility_info;
	dllArray_struct->sizeArray = fxsutilityarraySize;
	mapDllArray.insert(std::make_pair("fxsutility", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = imgutil_info;
	dllArray_struct->sizeArray = imgutilarraySize;
	mapDllArray.insert(std::make_pair("imgutil", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = infocardapi_info;
	dllArray_struct->sizeArray = infocardapiarraySize;
	mapDllArray.insert(std::make_pair("infocardapi", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = ksuser_info;
	dllArray_struct->sizeArray = ksuserarraySize;
	mapDllArray.insert(std::make_pair("ksuser", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = ktmw32_info;
	dllArray_struct->sizeArray = ktmw32arraySize;
	mapDllArray.insert(std::make_pair("ktmw32", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = locationapi_info;
	dllArray_struct->sizeArray = locationapiarraySize;
	mapDllArray.insert(std::make_pair("locationapi", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = magnification_info;
	dllArray_struct->sizeArray = magnificationarraySize;
	mapDllArray.insert(std::make_pair("magnification", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = mfplay_info;
	dllArray_struct->sizeArray = mfplayarraySize;
	mapDllArray.insert(std::make_pair("mfplay", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = mfreadwrite_info;
	dllArray_struct->sizeArray = mfreadwritearraySize;
	mapDllArray.insert(std::make_pair("mfreadwrite", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = mscoree_info;
	dllArray_struct->sizeArray = mscoreearraySize;
	mapDllArray.insert(std::make_pair("mscoree", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = msctfmonitor_info;
	dllArray_struct->sizeArray = msctfmonitorarraySize;
	mapDllArray.insert(std::make_pair("msctfmonitor", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = msdelta_info;
	dllArray_struct->sizeArray = msdeltaarraySize;
	mapDllArray.insert(std::make_pair("msdelta", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = msdmo_info;
	dllArray_struct->sizeArray = msdmoarraySize;
	mapDllArray.insert(std::make_pair("msdmo", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = msdrm_info;
	dllArray_struct->sizeArray = msdrmarraySize;
	mapDllArray.insert(std::make_pair("msdrm", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = msvfw32_info;
	dllArray_struct->sizeArray = msvfw32arraySize;
	mapDllArray.insert(std::make_pair("msvfw32", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = msxml6_info;
	dllArray_struct->sizeArray = msxml6arraySize;
	mapDllArray.insert(std::make_pair("msxml6", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = ncrypt_info;
	dllArray_struct->sizeArray = ncryptarraySize;
	mapDllArray.insert(std::make_pair("ncrypt", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = ndfapi_info;
	dllArray_struct->sizeArray = ndfapiarraySize;
	mapDllArray.insert(std::make_pair("ndfapi", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = ndproxystub_info;
	dllArray_struct->sizeArray = ndproxystubarraySize;
	mapDllArray.insert(std::make_pair("ndproxystub", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = newdev_info;
	dllArray_struct->sizeArray = newdevarraySize;
	mapDllArray.insert(std::make_pair("newdev", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = normaliz_info;
	dllArray_struct->sizeArray = normalizarraySize;
	mapDllArray.insert(std::make_pair("normaliz", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = ntdll_info;
	dllArray_struct->sizeArray = ntdllarraySize;
	mapDllArray.insert(std::make_pair("ntdll", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = powrprof_info;
	dllArray_struct->sizeArray = powrprofarraySize;
	mapDllArray.insert(std::make_pair("powrprof", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = prntvpt_info;
	dllArray_struct->sizeArray = prntvptarraySize;
	mapDllArray.insert(std::make_pair("prntvpt", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = propsys_info;
	dllArray_struct->sizeArray = propsysarraySize;
	mapDllArray.insert(std::make_pair("propsys", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = quartz_info;
	dllArray_struct->sizeArray = quartzarraySize;
	mapDllArray.insert(std::make_pair("quartz", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = qutil_info;
	dllArray_struct->sizeArray = qutilarraySize;
	mapDllArray.insert(std::make_pair("qutil", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = qwave_info;
	dllArray_struct->sizeArray = qwavearraySize;
	mapDllArray.insert(std::make_pair("qwave", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = rstrtmgr_info;
	dllArray_struct->sizeArray = rstrtmgrarraySize;
	mapDllArray.insert(std::make_pair("rstrtmgr", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = sas_info;
	dllArray_struct->sizeArray = sasarraySize;
	mapDllArray.insert(std::make_pair("sas", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = sensorsapi_info;
	dllArray_struct->sizeArray = sensorsapiarraySize;
	mapDllArray.insert(std::make_pair("sensorsapi", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = shdocvw_info;
	dllArray_struct->sizeArray = shdocvwarraySize;
	mapDllArray.insert(std::make_pair("shdocvw", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = shell32_info;
	dllArray_struct->sizeArray = shell32arraySize;
	mapDllArray.insert(std::make_pair("shell32", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = sisbkup_info;
	dllArray_struct->sizeArray = sisbkuparraySize;
	mapDllArray.insert(std::make_pair("sisbkup", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = slc_info;
	dllArray_struct->sizeArray = slcarraySize;
	mapDllArray.insert(std::make_pair("slc", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = slcext_info;
	dllArray_struct->sizeArray = slcextarraySize;
	mapDllArray.insert(std::make_pair("slcext", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = slwga_info;
	dllArray_struct->sizeArray = slwgaarraySize;
	mapDllArray.insert(std::make_pair("slwga", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = structuredquery_info;
	dllArray_struct->sizeArray = structuredqueryarraySize;
	mapDllArray.insert(std::make_pair("structuredquery", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = t2embed_info;
	dllArray_struct->sizeArray = t2embedarraySize;
	mapDllArray.insert(std::make_pair("t2embed", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = taskschd_info;
	dllArray_struct->sizeArray = taskschdarraySize;
	mapDllArray.insert(std::make_pair("taskschd", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = tbs_info;
	dllArray_struct->sizeArray = tbsarraySize;
	mapDllArray.insert(std::make_pair("tbs", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = tdh_info;
	dllArray_struct->sizeArray = tdharraySize;
	mapDllArray.insert(std::make_pair("tdh", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = txfw32_info;
	dllArray_struct->sizeArray = txfw32arraySize;
	mapDllArray.insert(std::make_pair("txfw32", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = virtdisk_info;
	dllArray_struct->sizeArray = virtdiskarraySize;
	mapDllArray.insert(std::make_pair("virtdisk", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = vssapi_info;
	dllArray_struct->sizeArray = vssapiarraySize;
	mapDllArray.insert(std::make_pair("vssapi", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = wecapi_info;
	dllArray_struct->sizeArray = wecapiarraySize;
	mapDllArray.insert(std::make_pair("wecapi", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = wevtapi_info;
	dllArray_struct->sizeArray = wevtapiarraySize;
	mapDllArray.insert(std::make_pair("wevtapi", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = windowscodecs_info;
	dllArray_struct->sizeArray = windowscodecsarraySize;
	mapDllArray.insert(std::make_pair("windowscodecs", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = winhttp_info;
	dllArray_struct->sizeArray = winhttparraySize;
	mapDllArray.insert(std::make_pair("winhttp", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = winsatapi_info;
	dllArray_struct->sizeArray = winsatapiarraySize;
	mapDllArray.insert(std::make_pair("winsatapi", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = wlanapi_info;
	dllArray_struct->sizeArray = wlanapiarraySize;
	mapDllArray.insert(std::make_pair("wlanapi", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = wlanui_info;
	dllArray_struct->sizeArray = wlanuiarraySize;
	mapDllArray.insert(std::make_pair("wlanui", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = wmdrmsdk_info;
	dllArray_struct->sizeArray = wmdrmsdkarraySize;
	mapDllArray.insert(std::make_pair("wmdrmsdk", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = wmiutils_info;
	dllArray_struct->sizeArray = wmiutilsarraySize;
	mapDllArray.insert(std::make_pair("wmiutils", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = wmvcore_info;
	dllArray_struct->sizeArray = wmvcorearraySize;
	mapDllArray.insert(std::make_pair("wmvcore", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = wscapi_info;
	dllArray_struct->sizeArray = wscapiarraySize;
	mapDllArray.insert(std::make_pair("wscapi", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = wsdapi_info;
	dllArray_struct->sizeArray = wsdapiarraySize;
	mapDllArray.insert(std::make_pair("wsdapi", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = xmllite_info;
	dllArray_struct->sizeArray = xmllitearraySize;
	mapDllArray.insert(std::make_pair("xmllite", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = xoleHlp_info;
	dllArray_struct->sizeArray = xoleHlparraySize;
	mapDllArray.insert(std::make_pair("xolehlp", dllArray_struct));

	dllArray_struct = (dllArray_info*)malloc(sizeof(dllArray_info));
	dllArray_struct->dllArray = xpsprint_info;
	dllArray_struct->sizeArray = xpsprintarraySize;
	mapDllArray.insert(std::make_pair("xpsprint", dllArray_struct));

}

//Initializes the hashtables needed to record lib calls using PyreboxData and the enum map
//-> We have one auxiliary hash table which maps DLLName to a struct contaning a pointer to the prototype array and its size. Gets destroyed after initDllArrayHash.
void Pyrebox_libcalls::initHashtables() {

	//HashMap of dll name to struct containing corresponding array of prototypes and size
	hash_map<string, dllArray_info*> hashDllArray;

	//Initialize auxiliary hashtable which maps the DLLname to a struct containing pointer of prototypes array and its size
	initDllArrayHash(hashDllArray);

	//Iterate over keys of hashDllArray
	for (std::hash_map<string, dllArray_info*>::iterator outerIter = hashDllArray.begin(); outerIter != hashDllArray.end(); ++outerIter)
	{
		string dll_name = outerIter->first;
		dllArray_info* arrayInfo = outerIter->second;

		//Create DLL specific hash map to be filled
		hash_map<string, libcall_info_t*>* dllHash = new hash_map<string, libcall_info_t*>;

		//Fill DLL specific hash map
		for (int i = 0; i < arrayInfo->sizeArray; ++i) {
			dllHash->insert(std::make_pair((arrayInfo->dllArray[i]).func_name, &(arrayInfo->dllArray[i])));
		}

		//Add entry to primary hash map
		dllToHash.insert(std::make_pair(dll_name, dllHash));

		//Free dllArray_info element
		free(arrayInfo);
	}

	//Init map for libcalls without Dll in the database
	size_t noDLL_size = noDLL_info_size();
	for (int i = 0; i < noDLL_size; i++) {
		libstringToProto.insert(std::make_pair(noDll_info[i].func_name, &noDll_info[i]));
	}

	//Init map of constants
	size_t mapSize = get_lib_const_arrays_num();
	for (int i = 0; i < mapSize; i++) {
		mapOfLibConsts.insert(std::make_pair(libcalls_const_struct_array[i].enum_name, libcalls_const_struct_array[i].enum_values));
	}

}

//Clears and de allocates hash tables
void Pyrebox_libcalls::clearHashtables() {

	//Iterate over keys of primary hash table
	for (hash_map<string, hash_map<string, libcall_info_t*>* >::iterator iter = dllToHash.begin(); iter != dllToHash.end(); ++iter)
	{
		//Get secondary hash table, clear it and free it
		(iter->second)->clear();
		delete(iter->second);

	}

	//Clear primary hash table
	dllToHash.clear();

}

//Check db of libcalls without DLL
static bool check_misc(const char* rtn_name) {

}

//Checks if routine is Pyrebox DB
//-> For now only routines whose DLL is provided in the database are found
bool Pyrebox_libcalls::findRtn(const char* img_name, const char* rtn_name, hash_map<string, libcall_info_t*>::iterator &it_pyrebox) {

	//Remove .dll from img_name and make it lower case
	size_t lastindex = string(img_name).find_last_of(".");
	string img_name_trunc = string(img_name).substr(0, lastindex);
	std::transform(img_name_trunc.begin(), img_name_trunc.end(), img_name_trunc.begin(), ::tolower);

	//Retrieve dll specific hash table from main hash table
	hash_map<string, hash_map<string, libcall_info_t*>* >::iterator it = dllToHash.find(img_name_trunc);

	//--Dll hash table not found
	if (it == dllToHash.end()) {

		//Check for rtn in array of prototypes without DLL
		hash_map<string, libcall_info_t*>::iterator it_noDll = libstringToProto.find(rtn_name);
		if (it_noDll != libstringToProto.end()) {
			//LOG("No DLL: " + string(rtn_name) + "\n");
			it_pyrebox = it_noDll;
			return true;
		}
		else return false;
	}

	//--Dll hash table found
	hash_map<string, libcall_info_t*>* nameToStruct = it->second;

	//Look for wanted routine
	hash_map<string, libcall_info_t*>::iterator itt = nameToStruct->find(rtn_name);

	//Routine not found
	if (itt == nameToStruct->end()) {

		//Check for rtn in array of prototypes without DLL
		hash_map<string, libcall_info_t*>::iterator itt_noDll = libstringToProto.find(rtn_name);
		if (itt_noDll != libstringToProto.end()) {
			//LOG("No rtn in DLL: " + string(rtn_name) + "\n");
			it_pyrebox = itt_noDll;
			return true;
		}
		else return false;
	}

	//--Routine found
	//libcall_info_t* funcStruct = itt->second;
	it_pyrebox = itt;
	return true;
}

//Print values of simple types
static void print_simple_value(drsys_arg_t* curr_arg, bool leading_zeroes, bluepill_tls* tdata, string &type_str, bool pointer, bool pointerToPointer)
{

	ADDRINT truncValue = curr_arg->value;
	bool leading_zeroes_def = false; //Final value for leading zeroes

									 //Append * or ** to arg type name depending on whether we have a pointer or pointer-to-pointer
	if (pointer) {
		type_str.append("*");
	}
	if (pointerToPointer) {
		type_str.append("**");
	}

	//Print or not with leading zeroes
	if (pointer || pointerToPointer || leading_zeroes) {

		(tdata->file_write)(tdata->threadid, tdata->buffer, tdata->OutFile, PFX, truncValue);

		if (pointerToPointer || leading_zeroes) {
			leading_zeroes_def = true;
		}

	}
	else {
		(tdata->file_write)(tdata->threadid, tdata->buffer, tdata->OutFile, PIFX, truncValue);
	}

	//If pointer and before libcall, read value
	//If pointer, after libcall and INOUT, read value
	if (pointer && ((curr_arg->pre) || (!curr_arg->pre && curr_arg->flags == INOUT))) {

		ADDRINT deref = 0;

		if (curr_arg->size > sizeof(deref)) {
			LOG("too-big simple type\n");
			return;
		}

		//PIN_SafeCopy returns number of bytes read
		//Note that if we have a pointer to void, we don't know how large the actual pointed region is
		if (PIN_SafeCopy(&deref, (void *)curr_arg->value, curr_arg->size) > 0) {

			(tdata->file_write)(tdata->threadid, tdata->buffer, tdata->OutFile, (leading_zeroes_def ? " => 0x%08x" : " => 0x%x"), deref);

		}

	}

}

//Check if pointer can be read without access violation
//https://stackoverflow.com/questions/496034/most-efficient-replacement-for-isbadreadptr
static bool IsBadReadPtr(void* p)
{
	W::MEMORY_BASIC_INFORMATION mbi = { 0 };
	if (W::VirtualQuery(p, &mbi, sizeof(mbi)))
	{
		W::DWORD mask = (PAGE_READONLY | PAGE_READWRITE | PAGE_WRITECOPY | PAGE_EXECUTE_READ | PAGE_EXECUTE_READWRITE | PAGE_EXECUTE_WRITECOPY);
		bool b = !(mbi.Protect & mask);
		// check the page is not a guard page
		if (mbi.Protect & (PAGE_GUARD | PAGE_NOACCESS)) b = true;

		return b;
	}
	return true;
}

//Print String
//-> Crap printed because some functions MAY not use a null terminated string (e.g. MultibyteToWideChar)
//-> Would need to check other args to determined whether string is null terminated or not
static void
print_string(void *pointer_str, bool is_wide, bluepill_tls* tdata, string &type_str, bool pointer, bool pointerToPointer)
{
	//Append * or ** to arg type name depending on whether we have a pointer or pointer-to-pointer
	if (pointer) {
		type_str.append("*");
	}
	if (pointerToPointer) {
		type_str.append("**");
	}

	
	//If pointer-to-pointer print address and return
	if (pointerToPointer) {
		(tdata->file_write)(tdata->threadid, tdata->buffer, tdata->OutFile, PFX, pointer_str);
		return;
	}

	//Init variables for bad memory check
	ADDRINT deref = 0;
	int charSize = 0;
	if (is_wide) {
		charSize = sizeof(wchar_t);
	}
	else charSize = sizeof(char);


	//Print string
	if (pointer_str == NULL)
		(tdata->file_write)(tdata->threadid, tdata->buffer, tdata->OutFile, "<null>");
	else {

		if (IsBadReadPtr(pointer_str) || (PIN_SafeCopy(&deref, pointer_str, charSize) < charSize)) {
			//LOG("Bad Pointer\n");
			(tdata->file_write)(tdata->threadid, tdata->buffer, tdata->OutFile, "<invalid memory>");
		}
		else {
			(tdata->file_write)(tdata->threadid, tdata->buffer, tdata->OutFile, is_wide ? "%ls" : "%s", pointer_str);	
		}

	}
	

}

//Prints value for complex types, i.e. structs, unions, tyepdefs, arrays
//TODO: unwrapping of complex types, e.g. structs-> For now just print address and type_name for every type
//Reminder:
//Structs: value, reference, pointer, pointer-to-pointer
//Union: see structs
//Tyepdef: value, pointer, pointer-to-pointer
//Array: pointer
//Enumeration: value, pointer
static void print_complex_value(drsys_arg_t* curr_arg, bluepill_tls* tdata, string &type_str, bool pointer, bool pointerToPointer, bool reference, int type) {

	//Append * / ** / & to arg type name depending on whether we have a pointer/pointer-to-pointer/reference
	if (pointer) {
		type_str.append("*");
	}
	if (pointerToPointer) {
		type_str.append("**");
	}
	if (reference) {
		type_str.append("&");
	}

	//Update type name for unions/structs with complex structure specific name
	if ((type == NKT_DBOBJCLASS_Struct || type == NKT_DBOBJCLASS_Union) && (curr_arg->type_name != NULL)) {
		type_str.append("|" + string(curr_arg->type_name));
	}

	//Print addresses without unwrapping
	(tdata->file_write)(tdata->threadid, tdata->buffer, tdata->OutFile, PFX, curr_arg->value);

}

//--Attempts to print macro names
static void print_enum(drsys_arg_t *arg, bluepill_tls* tdata, bool pointer) {

	int iterator = 0;
	lib_const_values_t *named_consts;
	lib_const_values_t *named_consts_save;
	bool has_out = false;

	//Build type string
	string type_str = "enum";
	if (pointer) {
		type_str.append("*");
	}
	//Update type name with enum name if its non null
	if (arg->type_name != NULL) {
		type_str.append("|" + string(arg->type_name));
	}
	//Adjust size
	arg->size = sizeof(int);

	/* Trying to find enum_name in the hashtable */
	// Check for enum_name existence
	if (arg->type_name == NULL || mapOfLibConsts.count(arg->type_name) == 0) {
		//No matching enum_name -> Print immediately, differentiating between pointer and value

		//Discriminate between pointer or not
		if (pointer) {
			(tdata->file_write)(tdata->threadid, tdata->buffer, tdata->OutFile, PFX, arg->value);
		}
		else {
			(tdata->file_write)(tdata->threadid, tdata->buffer, tdata->OutFile, PIFX, arg->value);
		}

		//If pointer and before libcall, read value
		//If pointer, after libcall and INOUT, read value
		if (pointer && ((arg->pre) || (!arg->pre && arg->flags == INOUT))) {

			ADDRINT deref = 0;

			//PIN_SafeCopy returns number of bytes read
			//Note that if we have a pointer to void, we don't know how large the actual pointed region is
			if (PIN_SafeCopy(&deref, (void *)arg->value, 4) > 0) {

				(tdata->file_write)(tdata->threadid, tdata->buffer, tdata->OutFile, " => 0x%x", deref);

			}


		}
		//Print arg info
		(tdata->file_write)(tdata->threadid, tdata->buffer, tdata->OutFile, " (%s%s%stype=%s, size=" PIFX ")\n",
			(arg->arg_name == NULL) ? "" : "name=",
			(arg->arg_name == NULL) ? "" : arg->arg_name,
			(arg->arg_name == NULL) ? "" : ", ",
			(type_str.empty()) ? "\"\"" : type_str.c_str(),
			arg->size);

		return;

	};

	//If pointer and before libcall, read value
	//If pointer, after libcall and INOUT, read value
	ADDRINT deref = 0;
	bool readValue = false;
	if (pointer && ((arg->pre) || (!arg->pre && arg->flags == INOUT))) {
		PIN_SafeCopy(&deref, (void *)arg->value, 4);
		readValue = true;
	}
	//If I have a pointer and the conditions for deferentiation are not met I can return immediately
	else if (pointer) {
		(tdata->file_write)(tdata->threadid, tdata->buffer, tdata->OutFile, PFX, arg->value);

		//Print arg info
		(tdata->file_write)(tdata->threadid, tdata->buffer, tdata->OutFile, " (%s%s%stype=%s, size=" PIFX ")\n",
			(arg->arg_name == NULL) ? "" : "name=",
			(arg->arg_name == NULL) ? "" : arg->arg_name,
			(arg->arg_name == NULL) ? "" : ", ",
			(type_str.empty()) ? "\"\"" : type_str.c_str(),
			arg->size);

		return;
	}

	//In case I have a pointer and I got to this point I have to dereference in log
	if (pointer) {
		(tdata->file_write)(tdata->threadid, tdata->buffer, tdata->OutFile, PFX, arg->value);
		(tdata->file_write)(tdata->threadid, tdata->buffer, tdata->OutFile, " => ");
	}

	//Set value for enum resolution
	int value;
	if (readValue) {
		value = (int)deref;
	}
	else value = arg->value;

	//Enum present -> Get corresponding struct
	named_consts = mapOfLibConsts[arg->type_name];

	/* There are a lot of named constants with incremental values
	* (e.g. REG_NONE 0, REG_SZ 1, REG_EXPAND_SZ 2, REG_BINARY 3).
	* So, firstly, we're trying to determine such cases.
	*/
	named_consts_save = named_consts;
	while (named_consts_save->const_name != NULL) {
		if (value == named_consts_save->value) {
			if (has_out)
				(tdata->file_write)(tdata->threadid, tdata->buffer, tdata->OutFile, " or ");

			(tdata->file_write)(tdata->threadid, tdata->buffer, tdata->OutFile, "%s", named_consts_save->const_name);

			has_out = true;
		}
		named_consts_save++;
	}
	//I cant print resolved macro and return
	if (has_out) {

		//Print arg info
		(tdata->file_write)(tdata->threadid, tdata->buffer, tdata->OutFile, " (%s%s%stype=%s, value=0x%x, size=" PIFX ")\n",
			(arg->arg_name == NULL) ? "" : "name=",
			(arg->arg_name == NULL) ? "" : arg->arg_name,
			(arg->arg_name == NULL) ? "" : ", ",
			(type_str.empty()) ? "\"\"" : type_str.c_str(),
			value,
			arg->size);

		return;
	}

	/* If not, we perform linear search for composite named constants
	* (e.g. FILE_SHARE_READ | FILE_SHARE_WRITE). We're using linear
	* search instead of random access b/c current table entries may
	* contain the same values for different named constants as well as
	* combination values, which make it difficult, such as:
	* ...
	* {0x00800000, "FILE_OPEN_FOR_FREE_SPACE_QUERY"},
	* {0x00ffffff, "FILE_VALID_OPTION_FLAGS"},
	* ...
	*/
	has_out = false;
	while (named_consts->const_name != NULL) {
		if (TESTALL(named_consts->value, value)) {
			if (has_out)
				(tdata->file_write)(tdata->threadid, tdata->buffer, tdata->OutFile, "|");
			/* FIXME i#1550: We don't perform additional search to
			* include entries with the same values in the output.
			* Ideally the tables shouldn't contain such entries.
			*/
			(tdata->file_write)(tdata->threadid, tdata->buffer, tdata->OutFile, "%s", named_consts->const_name);
			has_out = true;
		}
		named_consts++;
	}
	//Entry not found
	//-> Print value and info and return
	if (!has_out) {
		(tdata->file_write)(tdata->threadid, tdata->buffer, tdata->OutFile, PIFX, arg->value);

		//Print arg info
		(tdata->file_write)(tdata->threadid, tdata->buffer, tdata->OutFile, " (%s%s%stype=%s, size=" PIFX ")\n",
			(arg->arg_name == NULL) ? "" : "name=",
			(arg->arg_name == NULL) ? "" : arg->arg_name,
			(arg->arg_name == NULL) ? "" : ", ",
			(type_str.empty()) ? "\"\"" : type_str.c_str(),
			arg->size);

		return;
	}

	//Print resolved macro
	(tdata->file_write)(tdata->threadid, tdata->buffer, tdata->OutFile, " (%s%s%stype=%s, value=0x%x, size=" PIFX ")\n",
		(arg->arg_name == NULL) ? "" : "name=",
		(arg->arg_name == NULL) ? "" : arg->arg_name,
		(arg->arg_name == NULL) ? "" : ", ",
		(type_str.empty()) ? "\"\"" : type_str.c_str(),
		value,
		arg->size);

}

/*
NKT_DBFUNDTYPE_SignedByte = 1,
NKT_DBFUNDTYPE_UnsignedByte = 2,
NKT_DBFUNDTYPE_SignedWord = 3,
NKT_DBFUNDTYPE_UnsignedWord = 4,
NKT_DBFUNDTYPE_SignedDoubleWord = 5,
NKT_DBFUNDTYPE_UnsignedDoubleWord = 6,
NKT_DBFUNDTYPE_SignedQuadWord = 7,
NKT_DBFUNDTYPE_UnsignedQuadWord = 8,
NKT_DBFUNDTYPE_Float = 9,
NKT_DBFUNDTYPE_Double = 10,
NKT_DBFUNDTYPE_LongDouble = 11,
NKT_DBFUNDTYPE_Void = 12,
NKT_DBFUNDTYPE_AnsiChar = 13,
NKT_DBFUNDTYPE_WideChar = 14,

NKT_DBOBJCLASS_Struct = 15,
NKT_DBOBJCLASS_Union = 16,
NKT_DBOBJCLASS_Typedef = 17,
NKT_DBOBJCLASS_Array = 18,
NKT_DBOBJCLASS_Enumeration = 19,

NKT_DBOBJCLASS_Pointer = 32,
NKT_DBOBJCLASS_PointerPointer = 64,
NKT_DBOBJCLASS_Reference = 128
*/

//Generic print args function
void
Pyrebox_libcalls::print_arg_pyrebox(drsys_arg_t *arg, bluepill_tls* tdata, uint api_count)
{

	// Do not print if we are before the libcall and the argument is just OUT
	if ((arg->pre) && (arg->flags == OUT))
		return;

	//Do not print if we are after the libcall and the argument is just IN
	if ((!arg->pre) && (arg->flags == IN))
		return;

	//Type String
	string type_str = "";
	//Determine if we have a pointer or a pointer to pointer or a reference
	bool pointer = (TEST(NKT_DBOBJCLASS_Pointer, arg->type));
	bool pointerToPointer = (TEST(NKT_DBOBJCLASS_PointerPointer, arg->type));
	bool reference = (TEST(NKT_DBOBJCLASS_Reference, arg->type));

	//Differentiate return value
	if (arg->ordinal == -1)
		(tdata->file_write)(tdata->threadid, tdata->buffer, tdata->OutFile, "%u \tretval: ", api_count);
	else
		(tdata->file_write)(tdata->threadid, tdata->buffer, tdata->OutFile, "%u \targ %d: ", api_count, arg->ordinal);

	//Remove pointer/pointer-to-pointer/reference from type mask if necessary
	int type_wout_pointer;
	if (pointer) {
		type_wout_pointer = (arg->type) & ~NKT_DBOBJCLASS_Pointer;
	}
	else if (pointerToPointer) {
		type_wout_pointer = (arg->type) & ~NKT_DBOBJCLASS_PointerPointer;
	}
	else if (reference) {
		type_wout_pointer = (arg->type) & ~NKT_DBOBJCLASS_Reference;
	}
	else type_wout_pointer = arg->type;

	//Constant Resolution Here
	if (type_wout_pointer == NKT_DBOBJCLASS_Enumeration) {
		print_enum(arg, tdata, pointer);
		return;
	}

	//Determine arg type and print arg accordingly
	switch (type_wout_pointer) {

	//Simple types
	
	case NKT_DBFUNDTYPE_SignedByte:         type_str = "char"; print_simple_value(arg, false, tdata, type_str, pointer, pointerToPointer); break;
	case NKT_DBFUNDTYPE_UnsignedByte:		type_str = "BYTE"; print_simple_value(arg, false, tdata, type_str, pointer, pointerToPointer); break;
	case NKT_DBFUNDTYPE_SignedWord:			type_str = "short"; print_simple_value(arg, false, tdata, type_str, pointer, pointerToPointer); break;
	case NKT_DBFUNDTYPE_UnsignedWord:		type_str = "WORD"; print_simple_value(arg, false, tdata, type_str, pointer, pointerToPointer); break;
	case NKT_DBFUNDTYPE_SignedDoubleWord:	type_str = "(long/int)"; print_simple_value(arg, false, tdata, type_str, pointer, pointerToPointer); break;
	case NKT_DBFUNDTYPE_UnsignedDoubleWord:	type_str = "DWORD"; print_simple_value(arg, false, tdata, type_str, pointer, pointerToPointer); break;
	case NKT_DBFUNDTYPE_SignedQuadWord:		type_str = "LONGLONG"; print_simple_value(arg, false, tdata, type_str, pointer, pointerToPointer); break;
	case NKT_DBFUNDTYPE_UnsignedQuadWord:	type_str = "ULONGLONG"; print_simple_value(arg, false, tdata, type_str, pointer, pointerToPointer); break;
	case NKT_DBFUNDTYPE_Float:				type_str = "float"; print_simple_value(arg, false, tdata, type_str, pointer, pointerToPointer); break;
	case NKT_DBFUNDTYPE_Double:				type_str = "double"; print_simple_value(arg, false, tdata, type_str, pointer, pointerToPointer); break;
	case NKT_DBFUNDTYPE_LongDouble:			type_str = "long double"; print_simple_value(arg, false, tdata, type_str, pointer, pointerToPointer); break;
	case NKT_DBFUNDTYPE_Void:				type_str = "void"; print_simple_value(arg, true, tdata, type_str, pointer, pointerToPointer); break;
	
	
	//Strings
	case NKT_DBFUNDTYPE_AnsiChar:			type_str = "char"; print_string((void *)arg->value, false, tdata, type_str, pointer, pointerToPointer); break;
	case NKT_DBFUNDTYPE_WideChar:			type_str = "wchar_t"; print_string((void *)arg->value, true, tdata, type_str, pointer, pointerToPointer); break;

	
		//Complex types
	case NKT_DBOBJCLASS_Struct:				type_str = "struct"; print_complex_value(arg, tdata, type_str, pointer, pointerToPointer, reference, type_wout_pointer); break;
	case NKT_DBOBJCLASS_Union:				type_str = "union"; print_complex_value(arg, tdata, type_str, pointer, pointerToPointer, reference, type_wout_pointer); break;
	case NKT_DBOBJCLASS_Typedef:			type_str = "typedef"; print_complex_value(arg, tdata, type_str, pointer, pointerToPointer, reference, type_wout_pointer); break;
	case NKT_DBOBJCLASS_Array:				type_str = "array"; print_complex_value(arg, tdata, type_str, pointer, pointerToPointer, reference, type_wout_pointer); break;
	

	default: {
		if (arg->value == 0)
			(tdata->file_write)(tdata->threadid, tdata->buffer, tdata->OutFile, "<null>");
		else
			(tdata->file_write)(tdata->threadid, tdata->buffer, tdata->OutFile, PFX, arg->value);
	}
	}

	//Print arg info
	(tdata->file_write)(tdata->threadid, tdata->buffer, tdata->OutFile, " (%s%s%stype=%s, size=" PIFX ")\n",
		(arg->arg_name == NULL) ? "" : "name=",
		(arg->arg_name == NULL) ? "" : arg->arg_name,
		(arg->arg_name == NULL) ? "" : ", ",
		(type_str.empty()) ? "\"\"" : type_str.c_str(),
		arg->size);
}

//Fills exeApi with args info and prints them
void Pyrebox_libcalls::print_args_known_pyrebox(bluepill_tls* tdata, ADDRINT* args, apicall_t *exeApi, libcall_info_t* pyrebox_libcall) {

	//i=1 because at 0 we have ret value
	for (int i = 1; i <= pyrebox_libcall->argnum; i++) {

		//Check if max args limit is not surpassed
		if (i == MAX_ARGS_CONFIG) break;

		//Info fetched from cpp files containing Pyrebox info on libcalls args
		(exeApi->arguments[i - 1]).type = ((pyrebox_libcall->lib_args)[i]).arg_type;
		(exeApi->arguments[i - 1]).type_name = ((pyrebox_libcall->lib_args)[i]).arg_type_name;
		(exeApi->arguments[i - 1]).ordinal = ((pyrebox_libcall->lib_args)[i]).arg_num;
		(exeApi->arguments[i - 1]).size = ((pyrebox_libcall->lib_args)[i]).size;
		(exeApi->arguments[i - 1]).arg_name = ((pyrebox_libcall->lib_args)[i]).arg_name;
		(exeApi->arguments[i - 1]).pre = true;
		(exeApi->arguments[i - 1]).flags = ((pyrebox_libcall->lib_args)[i]).in_out_flag;

		//Set value
		(exeApi->arguments[i - 1]).value = args[i - 1];

	}
	exeApi->count = pyrebox_libcall->argnum;

	//Fill retval info without value obviously
	(exeApi->retval).type = ((pyrebox_libcall->lib_args)[0]).arg_type;
	(exeApi->retval).type_name = ((pyrebox_libcall->lib_args)[0]).arg_type_name;
	(exeApi->retval).ordinal = ((pyrebox_libcall->lib_args)[0]).arg_num;		//-1
	(exeApi->retval).size = ((pyrebox_libcall->lib_args)[0]).size;
	(exeApi->retval).arg_name = ((pyrebox_libcall->lib_args)[0]).arg_name;
	(exeApi->retval).pre = true;
	(exeApi->retval).flags = ((pyrebox_libcall->lib_args)[0]).in_out_flag;

	//--Print args using prototype--
	for (int i = 0; i < exeApi->count; i++) {

		drsys_arg_t curr_arg = (exeApi->arguments)[i];
		Pyrebox_libcalls::print_arg_pyrebox(&curr_arg, tdata, tdata->call_number);

	}
}