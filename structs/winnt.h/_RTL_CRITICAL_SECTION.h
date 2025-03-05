
struct _RTL_CRITICAL_SECTION {
    winnt.h/PRTL_CRITICAL_SECTION_DEBUG DebugInfo;
    winnt.h/LONG LockCount;
    winnt.h/LONG RecursionCount;
    winnt.h/HANDLE OwningThread;
    winnt.h/HANDLE LockSemaphore;
    basetsd.h/ULONG_PTR SpinCount;
}