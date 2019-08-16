#include "FakeReadHandler.h"
#include "porting.h"

FakeReadHandler::FakeReadHandler()
{
	pInfo = ProcInfo::getInstance();
	//Populating the ntdll function patch table
	ntdllHooksNamesPatch.insert(std::pair<string,string>("KiUserApcDispatcher","\x8D\x84\x24\xDC\x02\x00\x00"));
	string KiUserPatch("\x64\x8B\x00\x0D\x00\x00\x00",7);// Trick to be able to insert null bytes
	ntdllHooksNamesPatch.insert(std::pair<string,string>("KiUserCallbackDispatcher",KiUserPatch));
	ntdllHooksNamesPatch.insert(std::pair<string,string>("KiUserExceptionDispatcher","\xFC\x8B\x4C\x24\x04"));
	ntdllHooksNamesPatch.insert(std::pair<string,string>("LdrInitializeThunk","\x8B\xFF\x55\x8B\xEC"));

	this->hPsapi = W::LoadLibraryA("psapi.dll");
	this->enumProcessModules = (MyEnumProcessModules) W::GetProcAddress(hPsapi, "EnumProcessModules");
	this->getModuleInformation= (MyGetModuleInformation) W::GetProcAddress(hPsapi,"GetModuleInformation");
	
}

ADDRINT FakeReadHandler::ntdllFuncPatch(ADDRINT curReadAddr, ADDRINT ntdllFuncAddr){
	/* DCD: string patch = ntdllHooksAddrPatch.at(ntdllFuncAddr); */
	string &patch = map_at(ntdllHooksAddrPatch, ntdllFuncAddr);
	ADDRINT delta = curReadAddr - ntdllFuncAddr;
	curFakeMemory = patch.substr(delta, string::npos);
	ADDRINT patchAddr = (ADDRINT)&curFakeMemory;
	LOG_INFO("read at %08x containig %02x  Patched address %08x with string %02x \n",curReadAddr, *(char *)curReadAddr,patchAddr,*(char *)curFakeMemory.c_str());
	return patchAddr;
}

//populate FakeMemory Array which contains the FakeMemoryItem 
VOID FakeReadHandler::initFakeMemory(){	
	//Hide the ntdll hooks
	for(map<string,string>::iterator it = ntdllHooksNamesPatch.begin(); it != ntdllHooksNamesPatch.end();++it){
		// for each (funcName, patch) in ntdllHooksNamesPatch add (funcAddr, patch) to ntdllHooksAddrPatch
		const char *funcName = it->first.c_str();
		string patch = it->second;
		ADDRINT address = (ADDRINT)W::GetProcAddress(W::GetModuleHandle("ntdll.dll"), funcName);		
		ntdllHooksAddrPatch.insert(std::pair<ADDRINT,string>(address,patch));
		
		FakeMemoryItem fakeMem;
		fakeMem.StartAddress = address;
		fakeMem.EndAddress = address + patch.length() - 1; // -1 to exclude the trailing 0x00 // TODO DCD are you sure about that?
		fakeMem.func = &FakeReadHandler::ntdllFuncPatch;
		fakeMemory.push_back(fakeMem);
		LOG_INFO("Add FakeMemory ntdll %s addr  %08x -> %08x",funcName,fakeMem.StartAddress,fakeMem.EndAddress);
	}
	//add other FakeMemoryItem to the fakeMemory array for handling other cases
	/*
	//add FakeMemoryItem in order to fake the getTickCount value
	FakeMemoryItem fakeGetTickCount;
	fakeGetTickCount.StartAddress = KUSER_SHARED_DATA_ADDRESS + TICK_MULTIPLIER_OFFSET;  
	fakeGetTickCount.EndAddress = KUSER_SHARED_DATA_ADDRESS + TICK_MULTIPLIER_OFFSET + TICK_MULTIPLIER_SIZE; // the end of the TickMultiplier field 
	fakeGetTickCount.func = &FakeReadHandler::TickMultiplierPatch;
	fakeMemory.push_back(fakeGetTickCount);
	//add FakeMemoryItem in order to fake TimeGetTime value retreived from the InterruptTime structure in KUSER_SHARED_DATA 
	FakeMemoryItem fakeTimeGetTime;
	fakeTimeGetTime.StartAddress = KUSER_SHARED_DATA_ADDRESS + LOW_PART_INTERRUPT_TIME_OFFSET;
	fakeTimeGetTime.EndAddress = KUSER_SHARED_DATA_ADDRESS + HIGH_2_INTERRUPT_TIME_OFFSET;
	fakeTimeGetTime.func = &FakeReadHandler::InterruptTimePatch;
	fakeMemory.push_back(fakeTimeGetTime);
	// Faking the SystemTime structure 
	FakeMemoryItem fakeSystemTime;
	fakeSystemTime.StartAddress = KUSER_SHARED_DATA_ADDRESS + LOW_PART_SYSTEM_TIME_OFFSET ; // start addr of systemtime structure 
	fakeSystemTime.EndAddress = KUSER_SHARED_DATA_ADDRESS + HIGH_2_SYSTEM_TIME_OFFSET;
	fakeSystemTime.func = &FakeReadHandler::SystemTimePatch;
	fakeMemory.push_back(fakeSystemTime);
	*/
	
}

ADDRINT FakeReadHandler::getFakeMemory(ADDRINT address, ADDRINT eip){
	//Check if address is inside the FakeMemory array (need to modify the result of the read)
	for(std::vector<FakeMemoryItem>::iterator it = fakeMemory.begin(); it != fakeMemory.end(); ++it){
		if(it->StartAddress <= address && address <= it->EndAddress){
			//Executing the PatchFunction associated to this memory range which contains the address
			ADDRINT patchedAddr = it->func(address, it->StartAddress);
			LOG_INFO("Found address in FakeMemory %08x ", patchedAddr);
			LOG_INFO("Found FakeMemory read at %08x containig %08x  Patched at %08x containing %08x",address, *(unsigned int *)address, patchedAddr, *(unsigned int *)patchedAddr);
			LOG_INFO("ip : %08x in %s reading %08x and it has been redirected to : %08x",eip, RTN_FindNameByAddress(eip).c_str() , address, patchedAddr);
			return patchedAddr;			
		}
	}

	return address;
	/*
	//Check if the address is inside the WhiteListed addresses( need to return the correct value)
	if(isAddrInWhiteList(address)){
		return address;
	}
	//Read address is outside of the Whitelist probably in the PIN address space (need to return some random garbage)
	else{
		ProcInfo *p = ProcInfo::getInstance();
		// here the whitelist is updated and we check also if the address is inside the new discovere heaps
		if(p->addProcessHeapsAndCheckAddress(address)){
			return address;
		}	  
		if(checkInCurrentDlls(address)){
			return address;
		}
		else{
			curFakeMemory = "TopoMotoTopoMotoTopoMotoTopoMotoTopoMotoTopoMotoTopoMoto";
			return NULL;
		}
	}*/

	
}


ADDRINT FakeReadHandler::TickMultiplierPatch(ADDRINT curReadAddr, ADDRINT addr){
	W::ULONG tick_multiplier; // 4 bytes on Win32 & Win64
	ADDRINT kuser = KUSER_SHARED_DATA_ADDRESS + TICK_MULTIPLIER_OFFSET; //from 0x7ffe0000 to 0x7ffe0004
	memcpy(&tick_multiplier, (const void *)kuser, sizeof(W::ULONG));
	tick_multiplier = tick_multiplier / Config::TICK_DIVISOR;
	memcpy((void*)curFakeMemory.c_str(), (const void*)&tick_multiplier, sizeof(W::ULONG));
	ADDRINT patchAddr = (ADDRINT)&curFakeMemory;
	return patchAddr;
}

ADDRINT FakeReadHandler::InterruptTimePatch(ADDRINT curReadAddr, ADDRINT addr){
	// DCD: struct KSYSTEM_TIME { ULONG LowPart; LONG High1Time; LONG High2Time; }
	// TODO: using UINT32 can be a problem here?
	UINT32 low_part = *(UINT32 *)(KUSER_SHARED_DATA_ADDRESS + LOW_PART_INTERRUPT_TIME_OFFSET);
	UINT32 high_1_part = *(UINT32 *)(KUSER_SHARED_DATA_ADDRESS + HIGH_1_INTERRUPT_TIME_OFFSET);
	UINT32 high_2_part = *(UINT32 *)(KUSER_SHARED_DATA_ADDRESS + HIGH_2_INTERRUPT_TIME_OFFSET);
	// if these two values are different, according to the documentation, the value contained
	// in the low_part is not consistent, so the program must retry the read (we will return
	// the original read address)
	if (high_1_part != high_2_part) {
		return curReadAddr;
	}
	//store the value of edx in a 64 bit data in order to shift this value correctly
	UINT64 tmp_high_1_part = high_1_part;
	UINT32 low_part_new_value = 0; 
	UINT32 high_1_part_new_value = 0;
	UINT32 high_2_part_new_value = 0;
	UINT64 divided_time = 0;
	UINT32 current_divisor = Config::INTERRUPT_TIME_DIVISOR;
	UINT64 orig = ( (tmp_high_1_part << 32) + low_part );
	divided_time = orig / Config::INTERRUPT_TIME_DIVISOR;
	low_part_new_value = (UINT32)divided_time; // UINT32 for low part
	high_1_part_new_value = divided_time >> 32;
	high_2_part_new_value = high_1_part_new_value;
	if(curReadAddr == KUSER_SHARED_DATA_ADDRESS + LOW_PART_INTERRUPT_TIME_OFFSET){
		memcpy((void*)curFakeMemory.c_str(),(const void*)&low_part_new_value,sizeof(UINT32));	
	}
	if(curReadAddr == KUSER_SHARED_DATA_ADDRESS + HIGH_1_INTERRUPT_TIME_OFFSET){
		memcpy((void*)curFakeMemory.c_str(),(const void*)&high_1_part_new_value,sizeof(UINT32));
	}
	if(curReadAddr == KUSER_SHARED_DATA_ADDRESS + HIGH_2_INTERRUPT_TIME_OFFSET){
		memcpy((void*)curFakeMemory.c_str(),(const void*)&high_2_part_new_value,sizeof(UINT32));
	}	
	return (ADDRINT)curFakeMemory.c_str();
}


ADDRINT FakeReadHandler::SystemTimePatch(ADDRINT curReadAddr, ADDRINT addr){
	// DCD see UINT32 note for KSYSTEM_TIME in InterruptTimePatch()
	UINT32 low_part = *(UINT32 *)(KUSER_SHARED_DATA_ADDRESS + LOW_PART_SYSTEM_TIME_OFFSET);
	UINT32 high_1_part = *(UINT32 *)(KUSER_SHARED_DATA_ADDRESS + HIGH_1_SYSTEM_TIME_OFFSET);
	UINT32 high_2_part = *(UINT32 *)(KUSER_SHARED_DATA_ADDRESS + HIGH_2_SYSTEM_TIME_OFFSET);	
	// if these two values are different, according to the documentation, the value contained
	// in the low_part is not consistent, so the program must retry the read (we will return
	// the original read address)
	if (high_1_part != high_2_part) {
		return curReadAddr;
	}
	//store the value of edx in a 64 bit data in order to shift this value correctly
	UINT64 tmp_high_1_part = high_1_part;
	UINT32 low_part_new_value = 0; 
	UINT32 high_1_part_new_value = 0;
	UINT32 high_2_part_new_value = 0;
	UINT64 divided_time = 0;
	UINT32 current_divisor = Config::SYSTEM_TIME_DIVISOR;
	UINT64 orig = ( (tmp_high_1_part << 32) + low_part );
	divided_time = orig / Config::SYSTEM_TIME_DIVISOR;
	low_part_new_value = (UINT32)divided_time; // UINT32 for low part
	high_1_part_new_value = divided_time >> 32;
	high_2_part_new_value = high_1_part_new_value;
	if(curReadAddr == KUSER_SHARED_DATA_ADDRESS + LOW_PART_SYSTEM_TIME_OFFSET){
		memcpy((void*)curFakeMemory.c_str(),(const void*)&low_part_new_value,sizeof(UINT32));	
	}
	if(curReadAddr == KUSER_SHARED_DATA_ADDRESS + HIGH_1_SYSTEM_TIME_OFFSET){
		memcpy((void*)curFakeMemory.c_str(),(const void*)&high_1_part_new_value,sizeof(UINT32));
	}
	if(curReadAddr == KUSER_SHARED_DATA_ADDRESS + HIGH_2_SYSTEM_TIME_OFFSET){
		memcpy((void*)curFakeMemory.c_str(),(const void*)&high_2_part_new_value,sizeof(UINT32));
	}	
	return (ADDRINT)curFakeMemory.c_str();
}

BOOL getMemoryRange(ADDRINT address, MemoryRange& range){	
	W::MEMORY_BASIC_INFORMATION mbi;
	W::SIZE_T numBytes = W::VirtualQuery((W::LPCVOID)address, &mbi, sizeof(mbi));
	if(numBytes == 0){
		LOG_ERROR("VirtualQuery failed");
		return FALSE;
	}
	ADDRINT start = (ADDRINT)mbi.BaseAddress;
	ADDRINT end = (ADDRINT)mbi.BaseAddress + mbi.RegionSize;
	//get the stack base address by searching the highest address in the allocated memory containing the stack Address
	if((mbi.State == MEM_COMMIT || mbi.Type == MEM_MAPPED || mbi.Type == MEM_IMAGE ||  mbi.Type == MEM_PRIVATE) &&
		start <=address && address <= end){
		range.StartAddress = start;
		range.EndAddress = end;
		return TRUE;
	}
	else{
		LOG_ERROR("Address %08x  not inside mapped memory from %08x -> %08x or Type/State not correct ",address,start,end);
		return  FALSE;
	}		
}

// TODO verify the fix I did for this code
BOOL FakeReadHandler::checkInCurrentDlls(ADDRINT address_to_check){
	W::HMODULE hMods[1024];
	char Buffer[2048];
	W::LPTSTR pBuffer = Buffer;
    W::DWORD cbNeeded;
	BOOL isDll = FALSE;
	W::HANDLE process = W::GetCurrentProcess(); 
	MODULEINFO mi;
	// invoke W::EnumProcessModules(hProcess, *lphModule, cp, lpcbNeeed)
	if (this->enumProcessModules(process, hMods, sizeof(hMods), &cbNeeded)){
        // iterate over each found module
		for (size_t i = 0; i < (cbNeeded / sizeof(W::HMODULE)); i++ ){
			// invoke W::GetModuleInformation(hProcess, hModule, lpmodinfo, cb)
            this->getModuleInformation(process, hMods[i], &mi, sizeof(mi));
		    GetModuleFileNameA(hMods[i], pBuffer, sizeof(Buffer));
			ADDRINT end_addr = (ADDRINT)mi.lpBaseOfDll + mi.SizeOfImage;
			ProcInfo *p = ProcInfo::getInstance();
			BOOL isMain = FALSE;
			
			/* DCD: "The pin client lock is obtained during the call of this API" */
			//PIN_LockClient();
			IMG img = IMG_FindByAddress((ADDRINT)mi.lpBaseOfDll);
			//PIN_UnlockClient();
			
			if (IMG_Valid(img)) {
				isMain = IMG_IsMainExecutable(img);
			}

			if(!isMain){ // DCD what about IMG_Valid???
				p->addLibrary(Buffer,(ADDRINT)mi.lpBaseOfDll,end_addr);
			}
			else continue; // DCD

			FilterHandler *filterHandler = FilterHandler::getInstance();
			if(filterHandler->isNameInFilteredLibrary(Buffer)){
				LOG_INFO("Adding to the filtered array the module %s\n" , Buffer);
				filterHandler->addToFilteredLibrary(Buffer,(ADDRINT)mi.lpBaseOfDll,end_addr);
			}
			if(address_to_check >= (ADDRINT)mi.lpBaseOfDll && address_to_check <= end_addr){
				isDll = true;
			}
        }
    }
	return isDll; // DCD: was TRUE
}



/**
Check if address is inside:
	- Main executable
	- Stack
	- Dynamically allocated memory
	- Teb
	- Peb
	- generic memory region (SharedMemory pContextData..)
**/
BOOL FakeReadHandler::isAddrInWhiteList(ADDRINT address){
	//Main IMG
	ProcInfo  *myProcInfo = ProcInfo::getInstance();
	if(myProcInfo->isInsideMainIMG(address)){
		//LOG_INFO("Inside Main IMG");
		return TRUE;
	}
	//Stack
	if(myProcInfo->isStackAddress(address)){
		//LOG_INFO("Inside Stack");
		return TRUE;
	}
	//Dynamic Allocation
	if(myProcInfo->searchHeapMap(address)){
		//LOG_INFO("Inside Heaps");
		return TRUE;
	}
	//Library Addresses
	if (myProcInfo->isLibraryInstruction(address)){
		//LOG_INFO("Inside Library");
		return TRUE;
	}
	//Teb Addresses
	if(myProcInfo->isTebAddress(address)){
		//LOG_INFO("Inside TEB");
		return TRUE;
	}
	//Peb Addresses
	if(myProcInfo->isPebAddress(address)){
		//LOG_INFO("Inside Generic");
		return TRUE;
	}
	//Mapped file addresses
	if(myProcInfo->isMappedFileAddress(address)){
		//LOG_INFO("Inside PEB");
		return TRUE;
	}
	//Generic memory addresses (pContextData ..)
	if(myProcInfo->isGenericMemoryAddress(address)){
	//	LOG_INFO("Inside Generic");
		return TRUE;
	}
	return FALSE;	
}