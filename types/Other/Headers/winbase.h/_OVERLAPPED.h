#include "Other/Headers/basetsd.h/ULONG_PTR.h"
#include "Other/Headers/winbase.h/_union_540.h"
#include "Other/Headers/winnt.h/HANDLE.h"
struct _OVERLAPPED {
    ULONG_PTR Internal;
    ULONG_PTR InternalHigh;
    _union_540 u;
    HANDLE hEvent;
}