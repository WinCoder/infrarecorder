/*
 * InfraRecorder - CD/DVD burning software
 * Copyright (C) 2006-2012 Christian Kindahl
 * 
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once
#include <ckcore/types.hh>

#ifndef _T
#define _T TEXT
#endif

TCHAR *IncludeTrailingBackslash(TCHAR *szPath);
TCHAR *ExcludeTrailingBackslash(TCHAR *szPath);
TCHAR *SubString(const TCHAR *szText,unsigned int uiStart,unsigned int uiLength);

void FormatBytes(TCHAR *szBuffer,unsigned __int64 iBytes);
void FormatBytesEx(TCHAR *szBuffer,unsigned __int64 iBytes);
void FormatInteger(unsigned __int64 uiValue,TCHAR *szBuffer,unsigned uiBufferSize);

int LastDelimiter(const TCHAR *szString,TCHAR cDelimiter);
int FirstDelimiter(const TCHAR *szString,TCHAR cDelimiter);
bool ExtractFilePath(TCHAR *szFileName);
bool ExtractFileName(TCHAR *szFileName);
bool ChangeFileExt(TCHAR *szFileName,const TCHAR *szFileExt);
void ForceSlashDelimiters(TCHAR *szFileName);
int ComparePaths(const TCHAR *szPath1,const TCHAR *szPath2);

void TrimRight(TCHAR *szString);
void TrimRight(ckcore::tstring &Str,const ckcore::tchar * const szCharsToRemove);
void TrimLeft(ckcore::tstring &Str,const ckcore::tchar * const szCharsToRemove);
inline void TrimStr(ckcore::tstring &Str,const ckcore::tchar * const szCharsToRemove)
{
    TrimRight(Str,szCharsToRemove); TrimLeft(Str,szCharsToRemove);
}

char *SkipInteger(char *szString);

void AnsiToUnicode(wchar_t *szTarget,const char *szSource,int iTargetSize);
void UnicodeToAnsi(char *szTarget,const wchar_t *szSource,int iTargetSize);

void GetCygwinFileName(const TCHAR *szFileName,TCHAR *szCygwinFileName);
ckcore::tstring GetCygwinFileName(const TCHAR *szFileName);

void lsnprintf_s(TCHAR *szBuffer,int iBufferLength,const TCHAR *szFormatString,...);

#define lstrncmp wcsncmp
#define lsscanf swscanf
#define lsprintf swprintf
#define lstrncpy _tcsncpy
#define lstrncat wcsncat