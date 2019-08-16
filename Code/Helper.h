#pragma once
#include "pin.H"
#include <ctime>
#include <sstream>

namespace W {
	#include "windows.h"
}

//CHAR
#define PATH_BUFSIZE	512
#define GET_TO_UPPER(c, buf, bufSize)	do { \
			size_t i; \
			for (i = 0; i < bufSize; i++) { \
				(buf)[i] = toupper((c)[i]); \
				if ((c)[i] == '\0') break; \
			} \
} while (0)

//T_CHAR
#define GET_LPCSTR_TO_UPPER(c, buf, bufSize)	do { \
			size_t i; \
			for (i = 0; i < bufSize; i++) { \
				(buf)[i] = toupper((c)[2*i]); \
				if ((c)[2*i] == '\0') break; \
			} \
} while (0)

class Helper
{
public:
	Helper(void);
	static BOOL existFile (string name);
	static std::vector<std::string> split(const std::string &s, char delim);
	static std::string replaceString(std::string str, const std::string &from, const std::string &to);
	static bool writeBufferToFile(unsigned char *buffer, UINT32 dwBytesToWrite, std::string path);

	// Suppli
	static wchar_t locase_w(wchar_t c);
	static int _strcmpi_w(const wchar_t *s1, const wchar_t *s2);
	static void toValue(char* value, void* buffer);
	static size_t _strlen_a(const char *s);
	static std::string getCurDateAndTime();
};

