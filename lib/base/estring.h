#ifndef __E_STRING__
#define __E_STRING__

#include <string>
#include <stdarg.h>
#include <stdio.h>
#include "eerror.h"

std::string buildShortName( const std::string &str );

int strnicmp(const char*, const char*, int);

std::string getNum(int num, int base=10);

std::string GB18030ToUTF8(const char *szIn, int len,int *pconvertedLen=0);
std::string Big5ToUTF8(const char *szIn, int len,int *pconvertedLen=0);

std::string convertDVBUTF8(const unsigned char *data, int len, int table=-1, int tsidonid=1,int *pconvertedLen=0);
std::string convertLatin1UTF8(const std::string &string);
int isUTF8(const std::string &string);
unsigned int truncateUTF8(std::string &s, unsigned int newsize);

std::string removeDVBChars(const std::string &s);
void makeUpper(std::string &s);
std::string replace_all(const std::string &in, const std::string &entity, const std::string &symbol,int table=-1);

inline std::string convertDVBUTF8(const std::string &string, int table=-1, int tsidonid=1,int *pconvertedLen=0)
{
	return convertDVBUTF8((const unsigned char*)string.c_str(), string.length(), table, tsidonid,pconvertedLen);
}

std::string urlDecode(const std::string &s);

#endif // __E_STRING__
