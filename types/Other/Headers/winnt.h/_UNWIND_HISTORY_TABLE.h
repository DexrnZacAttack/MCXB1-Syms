#include "Other/Headers/WinDef.h/DWORD.h"
#include "Other/Headers/WinDef.h/BYTE.h"
#include "Other/Headers/basetsd.h/DWORD64.h"
#include "Other/Headers/winnt.h/UNWIND_HISTORY_TABLE_ENTRY[12].h"
struct _UNWIND_HISTORY_TABLE {
    DWORD Count;
    BYTE LocalHint;
    BYTE GlobalHint;
    BYTE Search;
    BYTE Once;
    DWORD64 LowAddress;
    DWORD64 HighAddress;
    UNWIND_HISTORY_TABLE_ENTRY[12] Entry;
}