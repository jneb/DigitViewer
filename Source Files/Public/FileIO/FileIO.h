/* FileIO.h - File IO
 * 
 * Author           : Alexander J. Yee
 * Date Created     : 01/24/2015
 * Last Modified    : 01/24/2015
 * 
 */

#pragma once
#ifndef _ymp_FileIO_H
#define _ymp_FileIO_H
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
//  Dependencies
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
#ifdef _WIN32
#include "FileIO_WinAPI.h"
#else
#include "FileIO_Default.h"
#endif
namespace ymp{
namespace FileIO{
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
//  Headers
void    CompileOptions      ();
void    MakeDirectory       (const wchar_t* path);
void    RenameFile          (const wchar_t* oldname, const wchar_t* newname);
ufL_t   GetFileSize         (const wchar_t* path);
bool    FileExists          (const wchar_t* path);
void    RemoveFile          (const wchar_t* path);
bool    DirectoryIsWritable (const wchar_t* directory);
int     GetLastErrorCode    ();
void    PrintLastError      ();
extern  upL_t   SetFileLengthFailures;
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
}
}
#endif
