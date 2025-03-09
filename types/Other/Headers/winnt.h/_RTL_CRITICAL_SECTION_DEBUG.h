#include "Other/Headers/WinDef.h/WORD.h"
#include "Other/Headers/winnt.h/_RTL_CRITICAL_SECTION.h"
#include "Other/Headers/winnt.h/LIST_ENTRY.h"
#include "Other/Headers/WinDef.h/DWORD.h"
struct _RTL_CRITICAL_SECTION_DEBUG {
    WORD Type;
    WORD CreatorBackTraceIndex;
    _RTL_CRITICAL_SECTION * CriticalSection;
    LIST_ENTRY ProcessLocksList;
    DWORD EntryCount;
    DWORD ContentionCount;
    DWORD Flags;
    WORD CreatorBackTraceIndexHigh;
    WORD SpareWORD;
}