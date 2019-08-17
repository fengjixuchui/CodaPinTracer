#pragma once
#include <iostream>
#include <hash_map>
#include "tls.h"

#define IN 0
#define INOUT 1
#define OUT 2

typedef enum {

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

} db_types_t;

//Struct containing libcall arg info
typedef struct _libcall_arg_info_t {

	//Arg number
	// -> Ret arg has number -1 
	int arg_num;

	//Arg name
	const char* arg_name;

	//Arg type
	int arg_type;

	//Arg type name
	// -> Not null only for enums, structs and unions
	char* arg_type_name;

	//Size
	int size;

	//Input/output flag
	int in_out_flag;

}libcall_arg_info_t;


//Struct containing libcall info
typedef struct _libcall_info_t {

	//Function name
	const char* func_name;

	//Number of args
	int argnum;

	//Array of args (we assume max number of args to be 20) -> Func with max args had 19 args, including return value
	libcall_arg_info_t lib_args[20];

} libcall_info_t;

//Struct containing pointer to array of libcall arg info and its size, to be used for auxiliary hashmap [(dllname) -> struct ]
typedef struct _dllArray_info_t {

	//Array pointer
	libcall_info_t* dllArray;

	//Array size
	int sizeArray;

} dllArray_info;

//We hardcode each named constant using separate structures for each group of constants
typedef struct lib_const_values_t {
	int value; /* value of the named constant */
	const char *const_name; /* name of the named constant */
} lib_const_values_t;

//We have an array where we have an entry for each enum of this type
typedef struct lib_const_array_entry_t {
	string enum_name; /* enum name */
	lib_const_values_t *enum_values; /* pointer to enum struct */
} lib_const_array_entry_t;

//Externs with prototypes arrays and sizes, grouped by dll
extern libcall_info_t ASycFilt_info[];
extern int ASycFiltarraySize;

extern libcall_info_t AclUI_info[];
extern int AclUIarraySize;

extern libcall_info_t ActiveDS_info[];
extern int ActiveDSarraySize;

extern libcall_info_t AdvAPI32_info[];
extern int AdvAPI32arraySize;

extern libcall_info_t AuthZ_info[];
extern int AuthZarraySize;

extern libcall_info_t Cabinet_info[];
extern int CabinetarraySize;

extern libcall_info_t CertPolEng_info[];
extern int CertPolEngarraySize;

extern libcall_info_t ClusApi_info[];
extern int ClusApiarraySize;

extern libcall_info_t ComCtl32_info[];
extern int ComCtl32arraySize;

extern libcall_info_t ComDlg32_info[];
extern int ComDlg32arraySize;

extern libcall_info_t ComSvcs_info[];
extern int ComSvcsarraySize;

extern libcall_info_t Crypt32_info[];
extern int Crypt32arraySize;

extern libcall_info_t CryptNet_info[];
extern int CryptNetarraySize;

extern libcall_info_t DSProp_info[];
extern int DSProparraySize;

extern libcall_info_t DSUIExt_info[];
extern int DSUIExtarraySize;

extern libcall_info_t DbgEng_info[];
extern int DbgEngarraySize;

extern libcall_info_t DbgHelp_info[];
extern int DbgHelparraySize;

extern libcall_info_t DhcpCSvc_info[];
extern int DhcpCSvcarraySize;

extern libcall_info_t DnsAPI_info[];
extern int DnsAPIarraySize;

extern libcall_info_t ElsCore_info[];
extern int ElsCorearraySize;

extern libcall_info_t FaultRep_info[];
extern int FaultReparraySize;

extern libcall_info_t GPEdit_info[];
extern int GPEditarraySize;

extern libcall_info_t Gdi32_info[];
extern int Gdi32arraySize;

extern libcall_info_t GdiPlus_info[];
extern int GdiPlusarraySize;

extern libcall_info_t HLink_info[];
extern int HLinkarraySize;

extern libcall_info_t IPHlpApi_info[];
extern int IPHlpApiarraySize;

extern libcall_info_t Icm32_info[];
extern int Icm32arraySize;

extern libcall_info_t Icmui_info[];
extern int IcmuiarraySize;

extern libcall_info_t ImageHlp_info[];
extern int ImageHlparraySize;

extern libcall_info_t Imm32_info[];
extern int Imm32arraySize;

extern libcall_info_t Iprop_info[];
extern int IproparraySize;

extern libcall_info_t Kernel32_info[];
extern int Kernel32arraySize;

extern libcall_info_t KernelBase_info[];
extern int KernelBasearraySize;

extern libcall_info_t LoadPerf_info[];
extern int LoadPerfarraySize;

extern libcall_info_t Lz32_info[];
extern int Lz32arraySize;

extern libcall_info_t MAPI32_info[];
extern int MAPI32arraySize;

extern libcall_info_t MSAcm32_info[];
extern int MSAcm32arraySize;

extern libcall_info_t MSImg32_info[];
extern int MSImg32arraySize;

extern libcall_info_t MSRating_info[];
extern int MSRatingarraySize;

extern libcall_info_t MSTask_info[];
extern int MSTaskarraySize;

extern libcall_info_t Mf_info[];
extern int MfarraySize;

extern libcall_info_t Mfplat_info[];
extern int MfplatarraySize;

extern libcall_info_t MgmtAPI_info[];
extern int MgmtAPIarraySize;

extern libcall_info_t Mpr_info[];
extern int MprarraySize;

extern libcall_info_t Mprapi_info[];
extern int MprapiarraySize;

extern libcall_info_t MsWSock_info[];
extern int MsWSockarraySize;

extern libcall_info_t Mscms_info[];
extern int MscmsarraySize;

extern libcall_info_t Msi_info[];
extern int MsiarraySize;

extern libcall_info_t NetAPI32_info[];
extern int NetAPI32arraySize;

extern libcall_info_t NtDsAPI_info[];
extern int NtDsAPIarraySize;

extern libcall_info_t Ole32_info[];
extern int Ole32arraySize;

extern libcall_info_t OleAcc_info[];
extern int OleAccarraySize;

extern libcall_info_t OleAut32_info[];
extern int OleAut32arraySize;

extern libcall_info_t OleDlg_info[];
extern int OleDlgarraySize;

extern libcall_info_t OlePro32_info[];
extern int OlePro32arraySize;

extern libcall_info_t OpenGL32_info[];
extern int OpenGL32arraySize;

extern libcall_info_t Pdh_info[];
extern int PdharraySize;

extern libcall_info_t RASAPI32_info[];
extern int RASAPI32arraySize;

extern libcall_info_t RASDlg_info[];
extern int RASDlgarraySize;

extern libcall_info_t ResUtils_info[];
extern int ResUtilsarraySize;

extern libcall_info_t RichEd20_info[];
extern int RichEd20arraySize;

extern libcall_info_t RpcRT4_info[];
extern int RpcRT4arraySize;

extern libcall_info_t Rpcns4_info[];
extern int Rpcns4arraySize;

extern libcall_info_t Rtm_info[];
extern int RtmarraySize;

extern libcall_info_t Rtutils_info[];
extern int RtutilsarraySize;

extern libcall_info_t SCardDlg_info[];
extern int SCardDlgarraySize;

extern libcall_info_t Secur32_info[];
extern int Secur32arraySize;

extern libcall_info_t SensAPI_info[];
extern int SensAPIarraySize;

extern libcall_info_t SetupAPI_info[];
extern int SetupAPIarraySize;

extern libcall_info_t Sfc_info[];
extern int SfcarraySize;

extern libcall_info_t ShFolder_info[];
extern int ShFolderarraySize;

extern libcall_info_t ShLwApi_info[];
extern int ShLwApiarraySize;

extern libcall_info_t SnmpAPI_info[];
extern int SnmpAPIarraySize;

extern libcall_info_t SrClient_info[];
extern int SrClientarraySize;

extern libcall_info_t Sti_info[];
extern int StiarraySize;

extern libcall_info_t Tapi32_info[];
extern int Tapi32arraySize;

extern libcall_info_t Traffic_info[];
extern int TrafficarraySize;

extern libcall_info_t UIAutomationCore_info[];
extern int UIAutomationCorearraySize;

extern libcall_info_t USP10_info[];
extern int USP10arraySize;

extern libcall_info_t Url_info[];
extern int UrlarraySize;

extern libcall_info_t Urlmon_info[];
extern int UrlmonarraySize;

extern libcall_info_t User32_info[];
extern int User32arraySize;

extern libcall_info_t UserEnv_info[];
extern int UserEnvarraySize;

extern libcall_info_t Uxtheme_info[];
extern int UxthemearraySize;

extern libcall_info_t VdmDbg_info[];
extern int VdmDbgarraySize;

extern libcall_info_t Version_info[];
extern int VersionarraySize;

extern libcall_info_t WER_info[];
extern int WERarraySize;

extern libcall_info_t WS2_32_info[];
extern int WS2_32arraySize;

extern libcall_info_t WSnmp32_info[];
extern int WSnmp32arraySize;

extern libcall_info_t WSock32_info[];
extern int WSock32arraySize;

extern libcall_info_t WebServices_info[];
extern int WebServicesarraySize;

extern libcall_info_t WinBio_info[];
extern int WinBioarraySize;

extern libcall_info_t WinFax_info[];
extern int WinFaxarraySize;

extern libcall_info_t WinInet_info[];
extern int WinInetarraySize;

extern libcall_info_t WinMM_info[];
extern int WinMMarraySize;

extern libcall_info_t WinSCard_info[];
extern int WinSCardarraySize;

extern libcall_info_t WinTrust_info[];
extern int WinTrustarraySize;

extern libcall_info_t Wldap32_info[];
extern int Wldap32arraySize;

extern libcall_info_t Wow32_info[];
extern int Wow32arraySize;

extern libcall_info_t WtsApi32_info[];
extern int WtsApi32arraySize;

extern libcall_info_t advpack_info[];
extern int advpackarraySize;

extern libcall_info_t avifil32_info[];
extern int avifil32arraySize;

extern libcall_info_t avrt_info[];
extern int avrtarraySize;

extern libcall_info_t bcrypt_info[];
extern int bcryptarraySize;

extern libcall_info_t clfsw32_info[];
extern int clfsw32arraySize;

extern libcall_info_t corrEngine_info[];
extern int corrEnginearraySize;

extern libcall_info_t credui_info[];
extern int creduiarraySize;

extern libcall_info_t cryptui_info[];
extern int cryptuiarraySize;

extern libcall_info_t cryptxml_info[];
extern int cryptxmlarraySize;

extern libcall_info_t cscapi_info[];
extern int cscapiarraySize;

extern libcall_info_t d3d10_info[];
extern int d3d10arraySize;

extern libcall_info_t d3d10_1_info[];
extern int d3d10_1arraySize;

extern libcall_info_t d3d11_info[];
extern int d3d11arraySize;

extern libcall_info_t d3d9_info[];
extern int d3d9arraySize;

extern libcall_info_t davclnt_info[];
extern int davclntarraySize;

extern libcall_info_t dciman32_info[];
extern int dciman32arraySize;

extern libcall_info_t dhcpcsvc6_info[];
extern int dhcpcsvc6arraySize;

extern libcall_info_t dhcpsapi_info[];
extern int dhcpsapiarraySize;

extern libcall_info_t dinput8_info[];
extern int dinput8arraySize;

extern libcall_info_t dpx_info[];
extern int dpxarraySize;

extern libcall_info_t drt_info[];
extern int drtarraySize;

extern libcall_info_t drtprov_info[];
extern int drtprovarraySize;

extern libcall_info_t drttransport_info[];
extern int drttransportarraySize;

extern libcall_info_t dsound_info[];
extern int dsoundarraySize;

extern libcall_info_t dwmapi_info[];
extern int dwmapiarraySize;

extern libcall_info_t dxgi_info[];
extern int dxgiarraySize;

extern libcall_info_t dxva2_info[];
extern int dxva2arraySize;

extern libcall_info_t eappcfg_info[];
extern int eappcfgarraySize;

extern libcall_info_t eappprxy_info[];
extern int eappprxyarraySize;

extern libcall_info_t encapi_info[];
extern int encapiarraySize;

extern libcall_info_t esent_info[];
extern int esentarraySize;

extern libcall_info_t evr_info[];
extern int evrarraySize;

extern libcall_info_t fontsub_info[];
extern int fontsubarraySize;

extern libcall_info_t fwpuclnt_info[];
extern int fwpuclntarraySize;

extern libcall_info_t fxsutility_info[];
extern int fxsutilityarraySize;

extern libcall_info_t imgutil_info[];
extern int imgutilarraySize;

extern libcall_info_t infocardapi_info[];
extern int infocardapiarraySize;

extern libcall_info_t ksuser_info[];
extern int ksuserarraySize;

extern libcall_info_t ktmw32_info[];
extern int ktmw32arraySize;

extern libcall_info_t locationapi_info[];
extern int locationapiarraySize;

extern libcall_info_t magnification_info[];
extern int magnificationarraySize;

extern libcall_info_t mfplay_info[];
extern int mfplayarraySize;

extern libcall_info_t mfreadwrite_info[];
extern int mfreadwritearraySize;

extern libcall_info_t mscoree_info[];
extern int mscoreearraySize;

extern libcall_info_t msctfmonitor_info[];
extern int msctfmonitorarraySize;

extern libcall_info_t msdelta_info[];
extern int msdeltaarraySize;

extern libcall_info_t msdmo_info[];
extern int msdmoarraySize;

extern libcall_info_t msdrm_info[];
extern int msdrmarraySize;

extern libcall_info_t msvfw32_info[];
extern int msvfw32arraySize;

extern libcall_info_t msxml6_info[];
extern int msxml6arraySize;

extern libcall_info_t ncrypt_info[];
extern int ncryptarraySize;

extern libcall_info_t ndfapi_info[];
extern int ndfapiarraySize;

extern libcall_info_t ndproxystub_info[];
extern int ndproxystubarraySize;

extern libcall_info_t newdev_info[];
extern int newdevarraySize;

extern libcall_info_t normaliz_info[];
extern int normalizarraySize;

extern libcall_info_t ntdll_info[];
extern int ntdllarraySize;

extern libcall_info_t powrprof_info[];
extern int powrprofarraySize;

extern libcall_info_t prntvpt_info[];
extern int prntvptarraySize;

extern libcall_info_t propsys_info[];
extern int propsysarraySize;

extern libcall_info_t quartz_info[];
extern int quartzarraySize;

extern libcall_info_t qutil_info[];
extern int qutilarraySize;

extern libcall_info_t qwave_info[];
extern int qwavearraySize;

extern libcall_info_t rstrtmgr_info[];
extern int rstrtmgrarraySize;

extern libcall_info_t sas_info[];
extern int sasarraySize;

extern libcall_info_t sensorsapi_info[];
extern int sensorsapiarraySize;

extern libcall_info_t shdocvw_info[];
extern int shdocvwarraySize;

extern libcall_info_t shell32_info[];
extern int shell32arraySize;

extern libcall_info_t sisbkup_info[];
extern int sisbkuparraySize;

extern libcall_info_t slc_info[];
extern int slcarraySize;

extern libcall_info_t slcext_info[];
extern int slcextarraySize;

extern libcall_info_t slwga_info[];
extern int slwgaarraySize;

extern libcall_info_t structuredquery_info[];
extern int structuredqueryarraySize;

extern libcall_info_t t2embed_info[];
extern int t2embedarraySize;

extern libcall_info_t taskschd_info[];
extern int taskschdarraySize;

extern libcall_info_t tbs_info[];
extern int tbsarraySize;

extern libcall_info_t tdh_info[];
extern int tdharraySize;

extern libcall_info_t txfw32_info[];
extern int txfw32arraySize;

extern libcall_info_t virtdisk_info[];
extern int virtdiskarraySize;

extern libcall_info_t vssapi_info[];
extern int vssapiarraySize;

extern libcall_info_t wecapi_info[];
extern int wecapiarraySize;

extern libcall_info_t wevtapi_info[];
extern int wevtapiarraySize;

extern libcall_info_t windowscodecs_info[];
extern int windowscodecsarraySize;

extern libcall_info_t winhttp_info[];
extern int winhttparraySize;

extern libcall_info_t winsatapi_info[];
extern int winsatapiarraySize;

extern libcall_info_t wlanapi_info[];
extern int wlanapiarraySize;

extern libcall_info_t wlanui_info[];
extern int wlanuiarraySize;

extern libcall_info_t wmdrmsdk_info[];
extern int wmdrmsdkarraySize;

extern libcall_info_t wmiutils_info[];
extern int wmiutilsarraySize;

extern libcall_info_t wmvcore_info[];
extern int wmvcorearraySize;

extern libcall_info_t wscapi_info[];
extern int wscapiarraySize;

extern libcall_info_t wsdapi_info[];
extern int wsdapiarraySize;

extern libcall_info_t xmllite_info[];
extern int xmllitearraySize;

extern libcall_info_t xoleHlp_info[];
extern int xoleHlparraySize;

extern libcall_info_t xpsprint_info[];
extern int xpsprintarraySize;

//NoDLL array and size
extern libcall_info_t noDll_info[];
size_t noDLL_info_size(void);

//Const array
extern lib_const_array_entry_t libcalls_const_struct_array[];
size_t get_lib_const_arrays_num(void);

//Class definition
class Pyrebox_libcalls
{
public:
	static void initHashtables();
	static void clearHashtables();
	static bool findRtn(const char* img_name, const char* rtn_name, std::hash_map<string, libcall_info_t*>::iterator &it_pyrebox);
	static void print_args_known_pyrebox(bluepill_tls* tdata, ADDRINT* args, apicall_t *exeApi, libcall_info_t* pyrebox_libcall);
	static void print_arg_pyrebox(drsys_arg_t *arg, bluepill_tls* tdata, uint api_count);

private:

};