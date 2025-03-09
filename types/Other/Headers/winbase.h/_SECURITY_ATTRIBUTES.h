#include "Other/Headers/WinDef.h/DWORD.h"
#include "Other/Headers/WinDef.h/LPVOID.h"
#include "Other/Headers/WinDef.h/BOOL.h"
struct _SECURITY_ATTRIBUTES {
    DWORD nLength;
    LPVOID lpSecurityDescriptor;
    BOOL bInheritHandle;
}