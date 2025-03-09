#include "Other/Headers/winnt.h/PRTL_CRITICAL_SECTION_DEBUG.h"
#include "Other/Headers/winnt.h/LONG.h"
#include "Other/Headers/winnt.h/HANDLE.h"
#include "Other/Headers/basetsd.h/ULONG_PTR.h"
struct _RTL_CRITICAL_SECTION {
    PRTL_CRITICAL_SECTION_DEBUG DebugInfo;
    LONG LockCount;
    LONG RecursionCount;
    HANDLE OwningThread;
    HANDLE LockSemaphore;
    ULONG_PTR SpinCount;
}