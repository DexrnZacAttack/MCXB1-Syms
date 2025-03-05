
struct _UNWIND_HISTORY_TABLE {
    WinDef.h/DWORD Count;
    WinDef.h/BYTE LocalHint;
    WinDef.h/BYTE GlobalHint;
    WinDef.h/BYTE Search;
    WinDef.h/BYTE Once;
    basetsd.h/DWORD64 LowAddress;
    basetsd.h/DWORD64 HighAddress;
    winnt.h/UNWIND_HISTORY_TABLE_ENTRY[12] Entry;
}