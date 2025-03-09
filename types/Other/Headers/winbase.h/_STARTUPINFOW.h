#include "Other/Headers/WinDef.h/DWORD.h"
#include "Other/Headers/winnt.h/LPWSTR.h"
#include "Other/Headers/WinDef.h/WORD.h"
#include "Other/Headers/WinDef.h/LPBYTE.h"
#include "Other/Headers/winnt.h/HANDLE.h"
struct _STARTUPINFOW {
    DWORD cb;
    LPWSTR lpReserved;
    LPWSTR lpDesktop;
    LPWSTR lpTitle;
    DWORD dwX;
    DWORD dwY;
    DWORD dwXSize;
    DWORD dwYSize;
    DWORD dwXCountChars;
    DWORD dwYCountChars;
    DWORD dwFillAttribute;
    DWORD dwFlags;
    WORD wShowWindow;
    WORD cbReserved2;
    LPBYTE lpReserved2;
    HANDLE hStdInput;
    HANDLE hStdOutput;
    HANDLE hStdError;
}