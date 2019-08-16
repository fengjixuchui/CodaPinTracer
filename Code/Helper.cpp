#include "Helper.h"

#define MD5LEN  16

Helper::Helper(void)
{
}

/*
Helper function to check file existence
*/
BOOL Helper::existFile (std::string name) {
	if (FILE *file = fopen(name.c_str(), "r")) {
        fclose(file);
        return true;
    } else {
        return false;
    }   
}

/*
Split a string into an array based on a delimiter character
*/
std::vector<std::string> Helper::split(const std::string &s, char delim) {
    std::vector<std::string> elems;
    std::stringstream ss(s);
    std::string item;
    while (getline(ss, item, delim)) {
        elems.push_back(item);
    }
    return elems;
}


std::string Helper::replaceString(std::string str, const std::string& from, const std::string& to) {
    size_t start_pos = 0;
    while((start_pos = str.find(from, start_pos)) != std::string::npos) {
        str.replace(start_pos, from.length(), to);
        start_pos += to.length(); // Handles case where 'to' is a substring of 'from'
    }
    return str;
}


bool Helper::writeBufferToFile(unsigned char *buffer,UINT32 dwBytesToWrite,string path){

    W::DWORD dwBytesWritten = 0;

	W::HANDLE hFile = W::CreateFile(path.c_str(),           // name of the write
									GENERIC_WRITE,          // open for writing
									0,                      // do not share
									NULL,                   // default security
									CREATE_NEW,             // create new file only
									FILE_ATTRIBUTE_NORMAL,  // normal file
									NULL);                  // no attr. template
	
	// ? : trick to avoid warning from differences between W::BOOL and C++ bool
	return W::WriteFile(hFile,           // open file handle
						buffer,			 // start of data to write
						dwBytesToWrite,  // number of bytes to write
						&dwBytesWritten, // number of bytes that were written
						NULL)            // no overlapped structure
						? true : false; 
}


wchar_t Helper::locase_w(wchar_t c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return c + 0x20;
	else
		return c;
}

int Helper::_strcmpi_w(const wchar_t *s1, const wchar_t *s2)
{
	wchar_t c1, c2;

	if (s1 == s2)
		return 0;

	if (s1 == 0)
		return -1;

	if (s2 == 0)
		return 1;

	do {
		c1 = locase_w(*s1);
		c2 = locase_w(*s2);
		s1++;
		s2++;
	} while ((c1 != 0) && (c1 == c2));

	return (int)(c1 - c2);
}

void Helper::toValue(char* value, void* buff) {

	char* buffer = (char*)buff;

	int i, j = 0;
	/* LPTSTR pointer to char that use 2 byte */
	for (i = 0; i < 200; i = i + 2) {
		value[j] = toupper(buffer[i]);
		j++;
		if (buffer[i] == '\0')
			break;
	}

}

size_t Helper::_strlen_a(const char *s) {
	char *s0 = (char *)s;

	if (s == 0)
		return 0;

	while (*s != 0)
		s++;

	return (s - s0);
}

//return the current date and time as a string
std::string Helper::getCurDateAndTime() {
	time_t rawtime;
	struct tm * timeinfo;
	char buffer[80];
	time(&rawtime);
	timeinfo = localtime(&rawtime);
	strftime(buffer, 80, "%Y_%m_%d_%I_%M_%S", timeinfo);
	return string(buffer);
}

