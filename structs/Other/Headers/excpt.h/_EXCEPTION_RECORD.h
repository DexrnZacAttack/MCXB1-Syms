
struct _EXCEPTION_RECORD {
    Other/Headers/WinDef.h/DWORD ExceptionCode;
    Other/Headers/WinDef.h/DWORD ExceptionFlags;
    Other/Headers/excpt.h/_EXCEPTION_RECORD * ExceptionRecord;
    Other/Headers/winnt.h/PVOID ExceptionAddress;
    Other/Headers/WinDef.h/DWORD NumberParameters;
    Other/Headers/basetsd.h/ULONG_PTR[15] ExceptionInformation;
}