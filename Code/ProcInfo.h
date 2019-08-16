#pragma once

#include "pin.H"
#include "Config.h"
#include "Debug.h"
#include "TimeTracker.h"
#include <time.h>
#include <set>
#include "Helper.h"
#include <map>
#include "md5.h"

namespace W{
	#include "windows.h"
	#include <tlhelp32.h>
	#include "Winternl.h"
	#include "winnt.h"
	#include "Intsafe.h"
}

#define MAX_STACK_SIZE 0x100000    //Used to define the memory range of the stack
#define TEB_SIZE 0xfe0 	

#define SIZE_GLOBAL_BUFFER 100

// DCD https://www.geoffchappell.com/studies/windows/km/ntoskrnl/structs/kuser_shared_data.htm
#define KUSER_SHARED_DATA_ADDRESS 0x7ffe0000
#define KUSER_SHARED_DATA_SIZE 0x3e0 

#define PEB_PVOID(field)			(*((W::PVOID*)(&field)))
#define PEB_OFFSET(peb, field)		size_t((char*)peb->field - (char*)peb)

#define MAX_ADAPTER_NAME_LENGTH 256
#define MAX_ADAPTER_DESCRIPTION_LENGTH 128
#define MAX_ADAPTER_ADDRESS_LENGTH 8

typedef struct PEB32 {
	W::BYTE padding1[2];
	W::BYTE BeingDebugged;
	W::BYTE padding2[53];
	W::BYTE ptr_ApiSetMap[4];
	W::BYTE padding3[16];
	W::BYTE ptr_ReadOnlySharedMemoryBase[4];
	W::BYTE padding4[8];
	W::BYTE ptr_AnsiCodePageData[4];
	W::BYTE padding5[52];
	W::PVOID ProcessHeaps; // UNUSED
	W::PVOID GdiSharedHandleTable; // UNUSED
	W::BYTE padding6[336];
	W::BYTE ptr_pShimData[4];
	W::BYTE padding7[12];
	W::BYTE ptr_ActivationContextData[4];
	W::BYTE padding8[4];
	W::BYTE ptr_SystemDefaultActivationContextData[4];
	W::BYTE padding9[52];
	W::BYTE ptr_pContextData[4];
	W::BYTE padding10[4];
	W::BYTE padding11[4]; // DCD added to account for TracingFlags on Win7
 } PEB32;

// DCD praise Rolf Rolles http://terminus.rewolf.pl/terminus/structures/ntdll/_PEB_x64.html
typedef struct PEB64 {
	W::BYTE padding1[2]; // pad 0x1
	W::BYTE BeingDebugged; // @0x02
	W::BYTE padding2[0x68-3]; // pad 0x65
	W::BYTE ptr_ApiSetMap[8]; // @0x68
	W::BYTE padding3[0x88-0x70]; // pad 0x18
	W::BYTE ptr_ReadOnlySharedMemoryBase[8]; // @0x88
	W::BYTE padding4[0xA0-0x90]; // pad 0x10
	W::BYTE ptr_AnsiCodePageData[8]; // @0xA0
	W::BYTE padding5a[0xBC-0xA8]; // pad 0x14
	W::BYTE dword_NtGlobalFlag[4]; // @OxBC
	W::BYTE padding5[0x2D8-0xC0]; // pad 0x218
	// DCD: ProcessHeaps and GdiSharedHandleTable are unused
	W::BYTE ptr_pShimData[8]; // @0x2D8
	W::BYTE padding7[0x2F8-0x2E0]; // pad 0x18
	W::BYTE ptr_ActivationContextData[8]; // @0x2F8
	W::BYTE padding8[0x308-0x300]; // pad 0x8
	W::BYTE ptr_SystemDefaultActivationContextData[8]; // @0x308
	W::BYTE padding9[0x368-0x310]; // pad 0x58
	W::BYTE ptr_pContextData[8]; // @0x368
	W::BYTE padding10[4+0x37C-0x370]; // pImageHeaderHash + TracingFlags + 4-byte padding for alignment
} PEB64;

typedef struct { /* [Suppli] */
	char String[4 * 4];
} IP_ADDRESS_STRING, *PIP_ADDRESS_STRING, IP_MASK_STRING, *PIP_MASK_STRING;

typedef struct _IP_ADDR_STRING { /* [Suppli] */
	struct _IP_ADDR_STRING  *Next;
	IP_ADDRESS_STRING      IpAddress;
	IP_MASK_STRING         IpMask;
	W::DWORD                  Context;
} IP_ADDR_STRING, *PIP_ADDR_STRING;

typedef struct _IP_ADAPTER_INFO { /* [Suppli] */
	struct _IP_ADAPTER_INFO  *Next;
	W::DWORD                   ComboIndex;
	char                    AdapterName[MAX_ADAPTER_NAME_LENGTH + 4];
	char                    Description[MAX_ADAPTER_DESCRIPTION_LENGTH + 4];
	W::UINT                    AddressLength;
	W::BYTE                    Address[MAX_ADAPTER_ADDRESS_LENGTH];
	W::DWORD                   Index;
	W::UINT                    Type;
	W::UINT                    DhcpEnabled;
	PIP_ADDR_STRING         CurrentIpAddress;
	IP_ADDR_STRING          IpAddressList;
	IP_ADDR_STRING          GatewayList;
	IP_ADDR_STRING          DhcpServer;
	W::BOOL                    HaveWins;
	IP_ADDR_STRING          PrimaryWinsServer;
	IP_ADDR_STRING          SecondaryWinsServer;
	time_t                  LeaseObtained;
	time_t                  LeaseExpires;
} IP_ADAPTER_INFO, *PIP_ADAPTER_INFO;

#ifdef __LP64__
typedef PEB64 PEB;
#else
typedef PEB32 PEB;
#endif

struct MemoryRange{
	ADDRINT StartAddress;
	ADDRINT EndAddress;
};

// track library loaded at program startup
struct LibraryItem{
	ADDRINT StartAddress;
	ADDRINT EndAddress;
	string name;
};

// memorize PE section information
struct Section {
	ADDRINT begin;
	ADDRINT end;
	string name;

	Section(ADDRINT begin, ADDRINT end, string name) {
		this->begin = begin;
		this->end = end;
		this->name = name;
	}

	Section(SEC &sec) {
		this->begin = SEC_Address(sec);
		this->end = this->begin + SEC_Size(sec);
		this->name = SEC_Name(sec);
	}
};

struct HeapZone {
	ADDRINT begin;
	ADDRINT end;
	UINT32 size;
	UINT32 version;
};

typedef std::pair<std::string, HeapZone> HeapZoneID;

class ProcInfo
{
public:
	//singleton instance
	static ProcInfo* getInstance();

	/* getter */
	ADDRINT getFirstINSaddress();
	ADDRINT getPrevIp();
	std::vector<Section> getSections();
	std::vector<Section> getProtectedSections();
	float getInitialEntropy();
	BOOL getPushadFlag();
	BOOL getPopadFlag();
	string getProcName();
	clock_t getStartTimer();
	std::set<ADDRINT> getJmpBlacklist(); /* DCD: unordered_set */
	//ADDRINT getPINVMStart();
	//ADDRINT getPINVMEnd();
	std::vector<HeapZoneID> &getHeapZones();
	std::map<string,string> getDumpedHZ();

	/* setter */
	void addProcAddresses();
	void setFirstINSaddress(ADDRINT address);
	void setPrevIp(ADDRINT ip);
	void setInitialEntropy(float Entropy);
	void setPushadFlag(BOOL flag);
	void setPopadFlag(BOOL flag);
	void setProcName(string name);
	void setStartTimer(clock_t t);
	void setMainIMGAddress(ADDRINT startAddress, ADDRINT endAddr);	
	/* debug */
	//void PrintStartContext();
	//void PrintCurrContext();
	void PrintSections();
	void printHeapList();
	/* helper */
	void insertSection(Section section);
	string getSectionNameByIp(ADDRINT addr);
	void insertHeapZone(std::string hz_md5, HeapZone heap_zone);
	void insertDumpedHeapZone(std::string hz_data_md5, std::string hz_bin_path);
	void deleteHeapZone(std::string md5_to_remove);
	bool searchHeapMap(ADDRINT ip);
	//HeapZone *getHeapZoneByIndex(UINT32 index);
	float GetEntropy();
	//std::vector<HeapZone> getWhitelistHeap();
	void insertInJmpBlacklist(ADDRINT ip);
	BOOL isInsideJmpBlacklist(ADDRINT ip);
	BOOL isInsideMainIMG(ADDRINT address);
	
	//Protected secions (functions for FakeMemoryHandler)
	VOID addProtectedSection(ADDRINT startAddr, ADDRINT endAddr, const char* secName, const char* libName);
	BOOL isInsideProtectedSection(ADDRINT address);

	//Whitelisted memory (functions for FakeMemoryReader)
	//PEB
	BOOL isPebAddress(ADDRINT addr);
	//TEB
	BOOL isTebAddress(ADDRINT addr);
	VOID addThreadTebAddress();
	//Stack
	BOOL isStackAddress(ADDRINT addr);
	VOID addThreadStackAddress(ADDRINT addr);
	//Library
	BOOL isLibraryInstruction(ADDRINT address);
	BOOL isKnownLibraryInstruction(ADDRINT address);
	VOID addLibrary(const string name,ADDRINT startAddr,ADDRINT endAddr);
	BOOL isLibItemDuplicate(ADDRINT address , std::vector<LibraryItem> Libraries);

	BOOL getMemoryRange(ADDRINT address, MemoryRange& range);	
	BOOL addProcessHeapsAndCheckAddress(ADDRINT address);

	//Memory Mapped Files
	BOOL isMappedFileAddress(ADDRINT addr);
	VOID addMappedFilesAddress(ADDRINT startAddr);
	VOID setCurrentMappedFiles();
	VOID printMappedFileAddress();
	//Generic Address
	BOOL isGenericMemoryAddress(ADDRINT address);
	void PrintWhiteListedAddr();

	//Process Fingerprint
	BOOL isInterestingProcess(unsigned int pid);

	#ifndef __LP64__
	static BOOL isRunningInWow64();
	static PEB64* getPeb64Wow64();
	#endif

	/******* SUPPLI ******/
	W::DWORD static GetProcessIdByName(char* procName);

	W::DWORD sleepMs; // used by AssemblyHandler
	
	// syscall hooks
	W::DWORD sleepMsTick;
	W::DWORD lastMs;
	W::DWORD numLastMs;
	W::DWORD lastMs2;
	W::DWORD numLastMs2;

	// function hooks
	W::DWORD tick;
	bool obsFlag;
	W::LPBYTE dataQuery;
	W::LPTSTR buf;
	W::LPPROCESSENTRY32 lp;
	W::SHORT sleepTime;
	W::PULARGE_INTEGER lpFreeBytesAvailable;
	W::PULARGE_INTEGER lpTotalNumberOfBytes;
	W::PULARGE_INTEGER lpTotalNumberOfFreeBytes;
	W::LPFILETIME filetime;
	VOID *protectAddr;
	W::SIZE_T addrSize;
	W::ULONG protectionSign;
	W::LPTSTR driverBaseName;
	W::LPTSTR windowName;
	W::LPTSTR modName;
	PIP_ADAPTER_INFO macStruct;
	W::PULONG  macSizeStruct;
	W::ULONG  macSizeStructInitial;
	W::SHORT macCounter;
	W::SHORT ntQueryCounter;
	W::PBYTE devBuff;
	W::INT NtCloseFlag;
	W::SHORT insCount;
	W::SHORT flagStep;
	W::BOOL debugObject;
	W::LPPOINT cursorPoint;
	W::INT createFCont;
	W::DWORD flagObsidium;
	W::BOOL waitForDebugger;
	W::BOOL breakSocket;

	W::WCHAR *ppz;

	/* [UNUSED]
	W::PROCESSINFOCLASS pr;
	W::POBJECT_ATTRIBUTES strZw;
	int obsCont;
	void* index;
	string ins;
	string ins2;
	unsigned long cont; */

	/******* END SUPPLI ******/


private:
	typedef std::vector<MemoryRange> MemoryRangeVector;
	static ProcInfo* instance;
	ProcInfo::ProcInfo();
	ADDRINT first_instruction;
	ADDRINT prev_ip;
	//std::set<string> interesting_processes_name; /* DCD: unused - was: unordered_set */
	std::set<UINT32> interesting_processes_pid; /* DCD: unordered_set - TODO almost unused! */
	MemoryRange mainImg;
	MemoryRangeVector stacks;				   //Set of Stack one for each thread
	MemoryRangeVector tebs;                     //Teb Base Address
	MemoryRangeVector genericMemoryRanges;
	MemoryRangeVector mappedFiles;
	PEB *peb;
	std::vector<Section> Sections;
	std::vector<HeapZoneID> HeapZones;
	std::vector<HeapZone> WhitelistHeap;
	std::map<std::string, std::string> HeapMapDumped; // TODO use md5string here?
	std::set<ADDRINT> addr_jmp_blacklist; /* DCD: unordered_set */
	std::vector<LibraryItem> knownLibraries;		   //vector of know library loaded
	std::vector<LibraryItem> unknownLibraries;		   //vector of unknow library loaded	
	std::vector<Section> protected_section;			   //vector of protected section ( for example the .text of ntdll is protected ( write on these memory range are redirected to other heap's zone ) )
	float InitialEntropy;
	//track if we found a pushad followed by a popad
	//this is a common technique to restore the initial register status after the unpacking routine
	BOOL pushad_flag;
	BOOL popad_flag;
	string full_proc_name;
	string proc_name;
	clock_t start_timer; 
	//Enumerate Whitelisted Memory Helpers	
	//return the MemoryRange in which the address is mapped
	BOOL isKnownLibrary(const string name,ADDRINT startAddr,ADDRINT endAddr);
	VOID addPebAddress();
	VOID addContextDataAddress();
	VOID addSharedMemoryAddress();
	VOID addAnsiCodePageDataAddress();
	VOID addShimDataAddress();
	VOID addApiSetMapAddress();
	VOID addKUserSharedDataAddress();
	void addMemoryRange(ADDRINT address, MemoryRangeVector &container, const char* logFormat);
	//Library Helpers
	string libToString(LibraryItem lib);
	//long long FindEx(W::HANDLE hProcess, W::LPVOID MemoryStart, W::DWORD MemorySize, W::LPVOID SearchPattern, W::DWORD PatternSize, W::LPBYTE WildCard);
	//void retrieveInterestingPidFromNames();
};

