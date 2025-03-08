
struct _WIN32_FIND_DATAW {
    Other/Headers/WinDef.h/DWORD dwFileAttributes;
    Other/Headers/WinDef.h/FILETIME ftCreationTime;
    Other/Headers/WinDef.h/FILETIME ftLastAccessTime;
    Other/Headers/WinDef.h/FILETIME ftLastWriteTime;
    Other/Headers/WinDef.h/DWORD nFileSizeHigh;
    Other/Headers/WinDef.h/DWORD nFileSizeLow;
    Other/Headers/WinDef.h/DWORD dwReserved0;
    Other/Headers/WinDef.h/DWORD dwReserved1;
    Other/Headers/winnt.h/WCHAR[260] cFileName;
    Other/Headers/winnt.h/WCHAR[14] cAlternateFileName;
}