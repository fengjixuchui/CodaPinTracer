#include "ServerTCP.h"


#define MAKEWORD1(a, b)      ((W::WORD)(((W::BYTE)(((W::DWORD_PTR)(a)) & 0xff)) | ((W::WORD)((W::BYTE)(((W::DWORD_PTR)(b)) & 0xff))) << 8))
#define DEFAULT_BUFLEN 512
#define DEFAULT_PORT "8889"
#define MAX_BUFFER_SIZE 4096

VOID pThreadFuncPin(VOID *arg) {

	cout << "Start socket.." << endl;

	W::HMODULE h = W::LoadLibrary(TEXT("ws2_32.dll"));
	if (h == NULL)
	{
		cout << "Load ws2_32.dll" << endl;
		return;
	}
	
	*(W::FARPROC*)&p_WSAStartup = GetProcAddress(h, TEXT("WSAStartup"));
	*(W::FARPROC*)&p_WSAGetLastError = GetProcAddress(h, TEXT("WSAGetLastError"));
	*(W::FARPROC*)&p_socket = GetProcAddress(h, TEXT("socket"));
	*(W::FARPROC*)&p_bind = GetProcAddress(h, TEXT("bind"));
	*(W::FARPROC*)&p_setsockopt = GetProcAddress(h, TEXT("setsockopt"));
	*(W::FARPROC*)&p_listen = GetProcAddress(h, TEXT("listen"));
	*(W::FARPROC*)&p_accept = GetProcAddress(h, TEXT("accept"));
	*(W::FARPROC*)&p_recv = GetProcAddress(h, TEXT("recv"));
	*(W::FARPROC*)&p_send = GetProcAddress(h, TEXT("send"));
	*(W::FARPROC*)&p_select = GetProcAddress(h, TEXT("select"));
	*(W::FARPROC*)&p_closesocket = GetProcAddress(h, TEXT("closesocket"));
	*(W::FARPROC*)&p_htons = GetProcAddress(h, TEXT("htons"));
	*(W::FARPROC*)&p__WSAFDIsSet = GetProcAddress(h, TEXT("__WSAFDIsSet"));
	*(W::FARPROC*)&p_getaddrinfo = GetProcAddress(h, TEXT("getaddrinfo")); 
	*(W::FARPROC*)&p_WSACleanup = GetProcAddress(h, TEXT("WSACleanup"));
	*(W::FARPROC*)&p_freeaddrinfo = GetProcAddress(h, TEXT("freeaddrinfo"));
	*(W::FARPROC*)&p_ntohl = GetProcAddress(h, TEXT("ntohl"));
	*(W::FARPROC*)&p_htonl = GetProcAddress(h, TEXT("htonl"));

	W::WSADATA wsaData;
	int iResult;
	
	W::SOCKET ListenSocket = (W::SOCKET)(~0);
	W::SOCKET ClientSocket = (W::SOCKET)(~0);
	
	struct W::addrinfo *result = NULL;
	struct W::addrinfo hints;

	// Initialize Winsock
	iResult = p_WSAStartup(MAKEWORD1(2, 2), &wsaData);
	if (iResult != 0) {
		printf("WSAStartup failed with error: %d\n", iResult);
		return;
	}
	
	ZeroMemory(&hints, sizeof(hints));
	hints.ai_family = AF_INET;
	hints.ai_socktype = SOCK_STREAM;
	hints.ai_protocol = W::IPPROTO_TCP;
	hints.ai_flags = AI_PASSIVE;
	
	// Resolve the server address and port
	iResult = p_getaddrinfo(NULL, DEFAULT_PORT, &hints, &result); //27015 port
	if (iResult != 0) {
		printf("getaddrinfo failed with error: %d\n", iResult);
		p_WSACleanup();
		return;
	}
	
	// Create a SOCKET for connecting to server
	ListenSocket = p_socket(result->ai_family, result->ai_socktype, result->ai_protocol);
	if (ListenSocket == (W::SOCKET)(~0)) {
		printf("socket failed with error: %ld\n", p_WSAGetLastError());
		p_freeaddrinfo(result);
		p_WSACleanup();
		return;
	}
	
	// Setup the TCP listening socket
	iResult = p_bind(ListenSocket, result->ai_addr, (int)result->ai_addrlen);
	if (iResult == SOCKET_ERROR) {
		printf("bind failed with error: %d\n", p_WSAGetLastError());
		p_freeaddrinfo(result);
		p_closesocket(ListenSocket);
		p_WSACleanup();
		return;
	}

	p_freeaddrinfo(result);

	iResult = p_listen(ListenSocket, SOMAXCONN);
	if (iResult == SOCKET_ERROR) {
		printf("listen failed with error: %d\n", p_WSAGetLastError());
		p_closesocket(ListenSocket);
		p_WSACleanup();
		return;
	}

	while (TRUE) {

		ProcInfo::getInstance()->breakSocket = FALSE;

		// Accept a client socket
		ClientSocket = p_accept(ListenSocket, NULL, NULL);
		if (ClientSocket == (W::SOCKET)(~0)) {
			printf("accept failed with error: %d\n", p_WSAGetLastError());
			p_closesocket(ListenSocket);
			p_WSACleanup();
			return;
		}

		cout << "Connection accepted" << endl;

		ReceiveSocket(ClientSocket);

		cout << "Waiting for connection..." << endl;

	}

	// No longer need server socket
	p_closesocket(ListenSocket);
	p_WSACleanup();
	
}

VOID send_bytes(W::SOCKET socket, W::LPSTR buffer, ssize_t n) {
	if (n == 0) return;
	ssize_t written_size, bytes_sent = 0;
	while (bytes_sent < n) {
		written_size = p_send(socket, (const char *)buffer + bytes_sent, n - bytes_sent, 0);
		if (written_size < 0) { 
			cout << "fail send" << endl;
			p_closesocket(socket);
			ProcInfo::getInstance()->breakSocket = TRUE;
			return;
		}//TODO FAIL("Error when sending data\n");
		bytes_sent += written_size;
	}
}

VOID get_bytes(W::SOCKET socket, W::LPSTR buffer, ssize_t n) {
	if (n == 0) return;
	ssize_t read_size, bytes_read = 0;
	while (bytes_read < n) {
		read_size = p_recv(socket, buffer + bytes_read, n - bytes_read, 0);
		if (read_size <= 0) { 
			cout << "fail get" << endl;
			p_closesocket(socket);
			ProcInfo::getInstance()->breakSocket = TRUE;
			return;
		}//TODO FAIL("Error when sending data\n");
		bytes_read += read_size;
	}
}

VOID handle_command(W::SOCKET ClientSocket) {
	
	//assert(client_sock);

	unsigned cmd;
	get_bytes(ClientSocket, (W::LPSTR)&cmd, sizeof(cmd));
	if (ProcInfo::getInstance()->breakSocket) return;
	cmd = p_ntohl(cmd);
	cout << "CMD " << cmd << endl;

	// STEP 2: get data len (4 bytes)
	unsigned data_size;
	get_bytes(ClientSocket, (W::LPSTR)&data_size, sizeof(data_size));
	if (ProcInfo::getInstance()->breakSocket) return;
	data_size = p_ntohl(data_size);
	cout << "\tsize=" << data_size << endl;

	//assert(data_size <= MAX_BUFFER_SIZE);

	// STEP 3: get data (data_size bytes)
	char d[MAX_BUFFER_SIZE];
	W::LPSTR data = d;
	get_bytes(ClientSocket, data, data_size);
	if (ProcInfo::getInstance()->breakSocket) return;

	// STEP 4: process command
	unsigned count;

	switch (cmd) {

		/*
		+        1 => AntiEvasionTricks
		+        2 => HiddenProcesses
		+        3 => RegOpenKeyStrings
		+        4 => RegQueryValueStrings
		+        5 => GenericFileNames
		+        6 => WindowNames
		+        7 => WMIQueryFail
		+        8 => Hooks (mi serve una lista delle stringhe)
		+        9 => SetTaints (mi serve lista)
		+        10 => GetRegTaints
		+        11 => SetRegTaints
		+        12 => GetMemTaints
		+        13 => SetMemTaints
		+        14 => GetThreads
		+        */

		case 1:
		{
			// number of strings
			count = p_ntohl(*((W::INT *)data));
			data += sizeof(W::INT);

			cout << "\tcount=" << count << endl;
			assert(count < 17);

			W::CHAR* tmp[NUMHIDDENMAX];
			for (size_t k = 0; k < count; k++) {
				cout << "\tstring=" << data << endl;
				tmp[k] = (W::CHAR*)malloc(sizeof(W::CHAR) * strlen(data));
				strcpy(tmp[k], data);
				data += strlen(data) + 1;
			}
			tmp[count] = NULL;

			setGroupByString(tmp, count); //set bitmap and free tmp memory

			//copy to array
			cout << endl;
			break;
		}
		case 2:
		{
			// number of strings
			count = p_ntohl(*((W::INT *)data));
			data += sizeof(W::INT);

			cout << "\tcount=" << count << endl;
			assert(count < 10);
			W::CHAR* tmp[NUMHIDDENMAX];
			for (size_t k = 0; k < count; k++) {
				cout << "\tstring=" << data << endl;
				tmp[k] = (W::CHAR*)malloc(sizeof(W::CHAR) * strlen(data));
				strcpy(tmp[k], data);
				data += strlen(data) + 1;
			}
			tmp[count] = NULL;

			HiddenElements::updateHiddenProcesses(tmp);

			//copy to array
			cout << endl;
			break;
		}
		case 3:
		{
			// number of strings
			count = p_ntohl(*((W::INT *)data));
			data += sizeof(W::INT);

			cout << "\tcount=" << count << endl;
			assert(count < 10);
			W::CHAR* tmp[NUMHIDDENMAX];
			for (size_t k = 0; k < count; k++) {
				cout << "\tstring=" << data << endl;
				tmp[k] = (W::CHAR*)malloc(sizeof(W::CHAR) * strlen(data));
				strcpy(tmp[k], data);
				data += strlen(data) + 1;
			}
			tmp[count] = NULL;

			HiddenElements::updateRegOpenKeyStrings(tmp);

			//copy to array
			cout << endl;
			break;
		}
		case 4:
		{
			// number of strings
			count = p_ntohl(*((W::INT *)data));
			data += sizeof(W::INT);

			cout << "\tcount=" << count << endl;
			assert(count < 10);
			W::CHAR* tmp[NUMHIDDENMAX];
			for (size_t k = 0; k < count; k++) {
				cout << "\tstring=" << data << endl;
				tmp[k] = (W::CHAR*)malloc(sizeof(W::CHAR) * strlen(data));
				strcpy(tmp[k], data);
				data += strlen(data) + 1;
			}
			tmp[count] = NULL;

			HiddenElements::updateRegQueryValueStrings(tmp);

			//copy to array
			cout << endl;
			break;
		}
		case 5:
		{
			// number of strings
			count = p_ntohl(*((W::INT *)data));
			data += sizeof(W::INT);

			cout << "\tcount=" << count << endl;
			assert(count < 10);
			W::CHAR* tmp[NUMHIDDENMAX];
			for (size_t k = 0; k < count; k++) {
				cout << "\tstring=" << data << endl;
				tmp[k] = (W::CHAR*)malloc(sizeof(W::CHAR) * strlen(data));
				strcpy(tmp[k], data);
				data += strlen(data) + 1;
			}
			tmp[count] = NULL;

			HiddenElements::updateGenericFileNames(tmp);

			//copy to array
			cout << endl;
			break;
		}
		case 6:
		{
			// number of strings
			count = p_ntohl(*((W::INT *)data));
			data += sizeof(W::INT);

			cout << "\tcount=" << count << endl;
			assert(count < 10);
			W::CHAR* tmp[NUMHIDDENMAX];
			for (size_t k = 0; k < count; k++) {
				cout << "\tstring=" << data << endl;
				tmp[k] = (W::CHAR*)malloc(sizeof(W::CHAR) * strlen(data));
				strcpy(tmp[k], data);
				data += strlen(data) + 1;
			}
			tmp[count] = NULL;

			HiddenElements::updateWindowNames(tmp);

			//copy to array
			cout << endl;
			break;
		}
		case 7:
		{
			// number of strings
			count = p_ntohl(*((W::INT *)data));
			data += sizeof(W::INT);

			printf("\tcount=%u\n", count);
			assert(count < 10);
			W::CHAR* tmp[NUMHIDDENMAX];
			for (size_t k = 0; k < count; k++) {
				cout << "\tstring=" << data << endl;
				tmp[k] = (W::CHAR*)malloc(sizeof(W::CHAR) * strlen(data));
				strcpy(tmp[k], data);
				data += strlen(data) + 1;
			}
			tmp[count] = NULL;

			HiddenElements::updateWMIQueryFail(tmp);

			//copy to array
			cout << endl;
			break;
		}
		case 8:
		{
			// number of strings
			count = p_ntohl(*((int *)data));
			data += sizeof(int);
			cout << "\tcount=" << count << endl;
			for (size_t k = 0; k < count; k++) {
				cout << "\tstring=" << data << endl;
				data += strlen(data) + 1;
				cout << " traced=" << data[0] << " break=" << data[1] << endl;
				data += 2;
			}
			cout << endl;
			break;
		}

		case 9:
		{
			// number of strings
			count = p_ntohl(*((int *)data));
			data += sizeof(int);
			cout << "\tcount=" << count << endl;
			for (size_t k = 0; k < count; k++) {
				cout << "\tstring=" << data << endl;
				data += strlen(data) + 1;
				cout << " seed=" << *data++ << endl;
			}
			cout << endl;
			break;
		}

		case 10:

		{
			// enum gpr {GPR_EDI, GPR_ESI, GPR_EBP, GPR_ESP, GPR_EBX, GPR_EDX, GPR_ECX};
			char * regs[] = { "eax", "ebx", "ecx", "edx", "esi", "edi", "esp" };
			OS_THREAD_ID thread_id = p_ntohl(*((int *)data));
			count = sizeof(regs) / sizeof(char *);

			cout << "\tSending reg count for thread_id=" << thread_id << "..." << endl;
			fflush(stdout);

			// number of registers
			count = p_htonl(count);
			send_bytes(ClientSocket, (char *)&count, sizeof(count));
			if (ProcInfo::getInstance()->breakSocket) return;
			count = p_ntohl(count);
			// for each reg, send name (string) and taint value (1 byte)
			for (size_t k = 0; k < count; k++) {
				send_bytes(ClientSocket, regs[k], strlen(regs[k]) + 1);
				if (ProcInfo::getInstance()->breakSocket) return;
				thread_ctx_t *tctx = lookupThreadCtx(thread_id);
				tag_t taints[4];
				switch (k) {
					case 0: //eax
						getRegisterTaints(tctx, GPR_EAX, taints);
						break;
					case 1: //ebx
						getRegisterTaints(tctx, GPR_EBX, taints);
						break;
					case 2: //ecx
						getRegisterTaints(tctx, GPR_ECX, taints);
						break;
					case 3: //edx
						getRegisterTaints(tctx, GPR_EDX, taints);
						break;
					case 4: //esi
						getRegisterTaints(tctx, GPR_ESI, taints);
						break;
					case 5: //edi
						getRegisterTaints(tctx, GPR_EDI, taints);
						break;
					case 6: //esp
						getRegisterTaints(tctx, GPR_ESP, taints);
						break;
				}
				unsigned taint = (unsigned char)taints[0];
				cout << "\treg=" << regs[k] << " taint=" << taint << endl;
				send_bytes(ClientSocket, (char *)&taint, sizeof(taint));
			}

			break;
		}

		case 11:
		{
			// number of regs
			OS_THREAD_ID thread_id = p_ntohl(*((int *)data));
			data += sizeof(unsigned);
			count = p_ntohl(*((int *)data));
			data += sizeof(int);
			cout << "\tthread_id=" << thread_id << " count=" << count << endl;
			for (size_t k = 0; k < count; k++) {
				char name[4];
				strcpy(name, data);
				cout << "\treg=" << name << endl;
				data += strlen(data) + 1;
				unsigned char tmp = (unsigned char)*data++;
				int seed = (int)tmp;
				tag_t tags[4];
				switch (seed) {
				case 1:
					for (int g = 0; g<4; g++) tags[g] = (unsigned)1;
					break;
				case 2:
					for (int g = 0; g<4; g++) tags[g] = (unsigned)2;
					break;
				case 3:
					for (int g = 0; g<4; g++) tags[g] = (unsigned)4;
					break;
				case 4:
					for (int g = 0; g<4; g++) tags[g] = (unsigned)8;
					break;
				case 5:
					for (int g = 0; g<4; g++) tags[g] = (unsigned)16;
					break;
				case 6:
					for (int g = 0; g<4; g++) tags[g] = (unsigned)32;
					break;
				case 7:
					for (int g = 0; g<4; g++) tags[g] = (unsigned)64;
					break;
				case 8:
					for (int g = 0; g<4; g++) tags[g] = (unsigned)128;
					break;
				case 255:
					for (int g = 0; g<4; g++) tags[g] = (unsigned)0;
					break;
				}
				cout << "\tseed=" << seed << endl;
				thread_ctx_t *tctx = lookupThreadCtx(thread_id);
				if (strcmp(name, "eax") == 0)
					addTaintRegister(tctx, GPR_EAX, tags, true);
				else if (strcmp(name, "ebx") == 0)
					addTaintRegister(tctx, GPR_EBX, tags, true);
				else if (strcmp(name, "ecx") == 0)
					addTaintRegister(tctx, GPR_ECX, tags, true);
				else if (strcmp(name, "edx") == 0)
					addTaintRegister(tctx, GPR_EDX, tags, true);
				else if (strcmp(name, "esi") == 0)
					addTaintRegister(tctx, GPR_ESI, tags, true);
				else if (strcmp(name, "edi") == 0)
					addTaintRegister(tctx, GPR_EDI, tags, true);
				else if (strcmp(name, "esp") == 0)
					addTaintRegister(tctx, GPR_ESP, tags, true);
			}
			cout << endl;
			break;
		}
		case 12:

		{
			// get start address
			unsigned start_addr = p_ntohl(*((int *)data));
			data += sizeof(unsigned);

			// get number of bytes
			count = p_ntohl(*((int *)data));
			data += sizeof(unsigned);

			cout << "\tstart_addr=" << start_addr << " count=" << count << endl;
			fflush(stdout);

			tag_t *tags = (tag_t*)malloc(sizeof(tag_t) * count);
			getMemoryTaints(start_addr, tags, count);

			// for each addr, send taint
			for (size_t k = 0; k < count; k++) {
				
				char taint = (char)tags[k];
				cout << "\taddr=" << start_addr + k << " taint=" << taint << endl;
				p_send(ClientSocket, &taint, sizeof(taint), 0);
			}
			break;
		}

		case 13:

		{
			// get start address
			unsigned start_addr = p_ntohl(*((int *)data));
			data += sizeof(unsigned);

			// get number of bytes
			UINT32 count1 = p_ntohl(*((UINT32 *)data));
			data += sizeof(unsigned);

			cout << "\tstart_addr=" << start_addr << " count=" << count1 << endl;
			fflush(stdout);

			// for each addr, get seed
			for (size_t k = 0; k < count1; k++) {
				tag_t taint;
				unsigned char tmp = (unsigned char)*data++;
				int seed = (int)tmp;
				switch (seed) {
				case 1:
					taint = (unsigned)1;
					break;
				case 2:
					taint = (unsigned)2;
					break;
				case 3:
					taint = (unsigned)4;
					break;
				case 4:
					taint = (unsigned)8;
					break;
				case 5:
					taint = (unsigned)16;
					break;
				case 6:
					taint = (unsigned)32;
					break;
				case 7:
					taint = (unsigned)64;
					break;
				case 8:
					taint = (unsigned)128;
					break;
				case 255:
					taint = (unsigned)0;
					break;
				}
				addTaintMemory(start_addr + k, 1, taint, true);
				cout << "\taddr=" << start_addr + k << " seed=" << taint << endl;
			}
			
			break;
		}

		case 14:
		{
			osThreadIdVec threadVec = getRunningThreads();
			unsigned num_threads = threadVec.size();
			num_threads = p_ntohl(*((int *)&num_threads));
			send_bytes(ClientSocket, (char *)&num_threads, sizeof(num_threads));
			num_threads = p_ntohl(*((int *)&num_threads));
			
			cout << "\tthread count=" << num_threads << endl;
			
			for (std::vector<OS_THREAD_ID>::iterator it = threadVec.begin(),
				end = threadVec.end(); it != end; ++it) {
				OS_THREAD_ID thread_id = *it; // FAKE VALUE
				cout << "\tthread_id=" << thread_id << endl;
				thread_id = p_ntohl(*((int *)&thread_id));
				send_bytes(ClientSocket, (char *)&thread_id, sizeof(thread_id));
			}

			break;
		}

		default:
			cout << "Invalid command\n" << endl;
	}

}

VOID ReceiveSocket(W::SOCKET ClientSocket) {
	
	while (TRUE) {
		cout << "Waiting for command...\n" << endl;
		handle_command(ClientSocket);
		if (ProcInfo::getInstance()->breakSocket) return;
	}

}

VOID setGroupByString(char** list, int count) {

	ssize_t i;
	for (i = 0; i < NUMGROUP; i++) //clean all data first
		HiddenElements::setGroup(i, FALSE);

	for (i = 0; i < count; i++) {
		if (strcmp(list[i], "Group1") == 0)
			HiddenElements::setGroup(EN_GR_L_MEMORY, TRUE);
		else if (strcmp(list[i], "Group2") == 0)
			HiddenElements::setGroup(EN_GR_L_FILE, TRUE);
		else if (strcmp(list[i], "Group3") == 0)
			HiddenElements::setGroup(EN_GR_L_DEBUGGER, TRUE);
		else if (strcmp(list[i], "Group4") == 0)
			HiddenElements::setGroup(EN_GR_L_GUI, TRUE);
		else if (strcmp(list[i], "Group5") == 0)
			HiddenElements::setGroup(EN_GR_L_WMI, TRUE);
		else if (strcmp(list[i], "Group6") == 0)
			HiddenElements::setGroup(EN_GR_L_HARDWARE, TRUE);
		else if (strcmp(list[i], "Group7") == 0)
			HiddenElements::setGroup(EN_GR_L_PROCESS, TRUE);
		else if (strcmp(list[i], "Group8") == 0)
			HiddenElements::setGroup(EN_GR_L_PIPE, TRUE);
		else if (strcmp(list[i], "Group9") == 0)
			HiddenElements::setGroup(EN_GR_L_DLL, TRUE);
		else if (strcmp(list[i], "Group10") == 0)
			HiddenElements::setGroup(EN_GR_L_TIME, TRUE);
		else if (strcmp(list[i], "Group11") == 0)
			HiddenElements::setGroup(EN_GR_L_MUTEX, TRUE);
		else if (strcmp(list[i], "Group12") == 0)
			HiddenElements::setGroup(EN_GR_L_NETWORK, TRUE);
		else if (strcmp(list[i], "Group13") == 0)
			HiddenElements::setGroup(EN_GR_L_REGISTRY, TRUE);
		else if (strcmp(list[i], "Group14") == 0)
			HiddenElements::setGroup(EN_GR_L_STRING, TRUE);
		else if (strcmp(list[i], "Group15") == 0)
			HiddenElements::setGroup(EN_GR_S_ALL, TRUE);
		else if (strcmp(list[i], "Group16") == 0)
			HiddenElements::setGroup(EN_GR_I_ALL, TRUE);

		free(list[i]); //release memory

	}
}