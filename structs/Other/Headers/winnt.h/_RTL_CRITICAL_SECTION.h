
struct _RTL_CRITICAL_SECTION {
    Other/Headers/winnt.h/PRTL_CRITICAL_SECTION_DEBUG DebugInfo;
    Other/Headers/winnt.h/LONG LockCount;
    Other/Headers/winnt.h/LONG RecursionCount;
    Other/Headers/winnt.h/HANDLE OwningThread;
    Other/Headers/winnt.h/HANDLE LockSemaphore;
    Other/Headers/basetsd.h/ULONG_PTR SpinCount;
}