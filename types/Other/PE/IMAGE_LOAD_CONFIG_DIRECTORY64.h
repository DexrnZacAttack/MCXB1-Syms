// 'NoneType' object has no attribute 'getPathName'
// 'NoneType' object has no attribute 'getPathName'
// 'NoneType' object has no attribute 'getPathName'
// 'NoneType' object has no attribute 'getPathName'
// 'NoneType' object has no attribute 'getPathName'
// 'NoneType' object has no attribute 'getPathName'
// 'NoneType' object has no attribute 'getPathName'
#include "Other/PE/IMAGE_GUARD_FLAGS.h"
struct IMAGE_LOAD_CONFIG_DIRECTORY64 {
    dword Size;
    dword TimeDateStamp;
    word MajorVersion;
    word MinorVersion;
    dword GlobalFlagsClear;
    dword GlobalFlagsSet;
    dword CriticalSectionDefaultTimeout;
    qword DeCommitFreeBlockThreshold;
    qword DeCommitTotalFreeThreshold;
    pointer64 LockPrefixTable;
    qword MaximumAllocationSize;
    qword VirtualMemoryThreshold;
    qword ProcessAffinityMask;
    dword ProcessHeapFlags;
    word CsdVersion;
    word DependentLoadFlags;
    pointer64 EditList;
    pointer64 SecurityCookie;
    pointer64 SEHandlerTable;
    qword SEHandlerCount;
    pointer64 GuardCFCCheckFunctionPointer;
    pointer64 GuardCFDispatchFunctionPointer;
    pointer64 GuardCFFunctionTable;
    qword GuardCFFunctionCount;
    IMAGE_GUARD_FLAGS GuardFlags;
}