#include "Other/Headers/WinDef.h/DWORD.h"
#include "Other/Headers/WinDef.h/FILETIME.h"
#include "Other/Headers/winnt.h/WCHAR[260].h"
#include "Other/Headers/winnt.h/WCHAR[14].h"
struct _WIN32_FIND_DATAW {
    DWORD dwFileAttributes;
    FILETIME ftCreationTime;
    FILETIME ftLastAccessTime;
    FILETIME ftLastWriteTime;
    DWORD nFileSizeHigh;
    DWORD nFileSizeLow;
    DWORD dwReserved0;
    DWORD dwReserved1;
    WCHAR[260] cFileName;
    WCHAR[14] cAlternateFileName;
}