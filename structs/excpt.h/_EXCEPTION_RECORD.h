
struct _EXCEPTION_RECORD {
    WinDef.h/DWORD ExceptionCode;
    WinDef.h/DWORD ExceptionFlags;
    excpt.h/_EXCEPTION_RECORD * ExceptionRecord;
    winnt.h/PVOID ExceptionAddress;
    WinDef.h/DWORD NumberParameters;
    basetsd.h/ULONG_PTR[15] ExceptionInformation;
}