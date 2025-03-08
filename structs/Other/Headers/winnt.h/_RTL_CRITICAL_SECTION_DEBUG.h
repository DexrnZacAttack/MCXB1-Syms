
struct _RTL_CRITICAL_SECTION_DEBUG {
    Other/Headers/WinDef.h/WORD Type;
    Other/Headers/WinDef.h/WORD CreatorBackTraceIndex;
    Other/Headers/winnt.h/_RTL_CRITICAL_SECTION * CriticalSection;
    Other/Headers/winnt.h/LIST_ENTRY ProcessLocksList;
    Other/Headers/WinDef.h/DWORD EntryCount;
    Other/Headers/WinDef.h/DWORD ContentionCount;
    Other/Headers/WinDef.h/DWORD Flags;
    Other/Headers/WinDef.h/WORD CreatorBackTraceIndexHigh;
    Other/Headers/WinDef.h/WORD SpareWORD;
}