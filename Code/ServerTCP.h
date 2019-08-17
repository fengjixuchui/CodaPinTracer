#pragma once
#include "pin.H"
#include "ProcInfo.h"
//#include "HiddenElements.h"
//#include "TaintAnalysis.h"
#include <iostream>


namespace W {
	#define WIN32_LEAN_AND_MEAN
	#include <Windows.h>
	#include <WinUser.h>
	#include <Ws2tcpip.h>
}

#define  fd_set W::fd_set

#ifdef _WIN32
static int (WSAAPI *p_WSAStartup)(W::WORD, W::WSADATA *);
static int (WSAAPI *p_WSAGetLastError)(void);
static W::SOCKET(WSAAPI *p_socket)(int af, int type, int protocol);
static int (WSAAPI *p_bind)(W::SOCKET, const struct W::sockaddr *, int);
static int (WSAAPI *p_setsockopt)(W::SOCKET, int, int, const char *optval, int optlen);
static int (WSAAPI *p_listen)(W::SOCKET s, int backlog);
static W::SOCKET (WSAAPI *p_accept)(W::SOCKET, struct W::sockaddr *, int *);
static int (WSAAPI *p_recv)(W::SOCKET s, char *buf, int len, int flags);
static int (WSAAPI *p_send)(W::SOCKET s, const char *buf, int len, int flags);
static int (WSAAPI *p_select)(int, fd_set *, fd_set *, fd_set *, const struct W::timeval *);
static int (WSAAPI *p_closesocket)(W::SOCKET s);
static W::ULONG (WSAAPI *p_ntohl)(_In_ W::ULONG netlong);
static W::ULONG (WSAAPI *p_htonl)(_In_ W::ULONG hostlong);
static W::USHORT (WSAAPI *p_htons)(u_short hostshort);
// __WSAFDIsSet is used implicitely by FD_ISSET, redefine it
#define __WSAFDIsSet p__WSAFDIsSet
static int (WSAAPI *p__WSAFDIsSet)(W::SOCKET fd, fd_set *);
static int (WSAAPI *p_getaddrinfo)(
	_In_opt_       W::PCSTR      pNodeName,
	_In_opt_       W::PCSTR      pServiceName,
	_In_opt_ const W::ADDRINFOA  *pHints,
	_Out_          W::PADDRINFOA *ppResult
);
static int (WSAAPI *p_WSACleanup)(void);
static void (WSAAPI *p_freeaddrinfo)(
	_In_ struct W::addrinfo *ai
);
#endif


VOID pThreadFuncPin(VOID *arg);
VOID ReceiveSocket(W::SOCKET ClientSocket);

VOID send_bytes(W::SOCKET socket, W::LPSTR buffer, ssize_t n);
VOID get_bytes(W::SOCKET socket, W::LPSTR buffer, ssize_t n);
VOID setGroupByString(char** list, int count);