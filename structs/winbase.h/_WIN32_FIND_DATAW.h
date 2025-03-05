
struct _WIN32_FIND_DATAW {
    WinDef.h/DWORD dwFileAttributes;
    WinDef.h/FILETIME ftCreationTime;
    WinDef.h/FILETIME ftLastAccessTime;
    WinDef.h/FILETIME ftLastWriteTime;
    WinDef.h/DWORD nFileSizeHigh;
    WinDef.h/DWORD nFileSizeLow;
    WinDef.h/DWORD dwReserved0;
    WinDef.h/DWORD dwReserved1;
    winnt.h/WCHAR[260] cFileName;
    winnt.h/WCHAR[14] cAlternateFileName;
}