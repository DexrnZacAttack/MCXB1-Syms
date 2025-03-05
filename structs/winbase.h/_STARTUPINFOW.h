
struct _STARTUPINFOW {
    WinDef.h/DWORD cb;
    winnt.h/LPWSTR lpReserved;
    winnt.h/LPWSTR lpDesktop;
    winnt.h/LPWSTR lpTitle;
    WinDef.h/DWORD dwX;
    WinDef.h/DWORD dwY;
    WinDef.h/DWORD dwXSize;
    WinDef.h/DWORD dwYSize;
    WinDef.h/DWORD dwXCountChars;
    WinDef.h/DWORD dwYCountChars;
    WinDef.h/DWORD dwFillAttribute;
    WinDef.h/DWORD dwFlags;
    WinDef.h/WORD wShowWindow;
    WinDef.h/WORD cbReserved2;
    WinDef.h/LPBYTE lpReserved2;
    winnt.h/HANDLE hStdInput;
    winnt.h/HANDLE hStdOutput;
    winnt.h/HANDLE hStdError;
}