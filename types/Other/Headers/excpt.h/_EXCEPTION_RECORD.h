#include "Other/Headers/WinDef.h/DWORD.h"
#include "Other/Headers/excpt.h/_EXCEPTION_RECORD.h"
#include "Other/Headers/winnt.h/PVOID.h"
#include "Other/Headers/basetsd.h/ULONG_PTR[15].h"
struct _EXCEPTION_RECORD {
    DWORD ExceptionCode;
    DWORD ExceptionFlags;
    _EXCEPTION_RECORD * ExceptionRecord;
    PVOID ExceptionAddress;
    DWORD NumberParameters;
    ULONG_PTR[15] ExceptionInformation;
}