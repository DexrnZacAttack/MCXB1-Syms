
struct _RTL_CRITICAL_SECTION_DEBUG {
    WinDef.h/WORD Type;
    WinDef.h/WORD CreatorBackTraceIndex;
    winnt.h/_RTL_CRITICAL_SECTION * CriticalSection;
    winnt.h/LIST_ENTRY ProcessLocksList;
    WinDef.h/DWORD EntryCount;
    WinDef.h/DWORD ContentionCount;
    WinDef.h/DWORD Flags;
    WinDef.h/WORD CreatorBackTraceIndexHigh;
    WinDef.h/WORD SpareWORD;
}