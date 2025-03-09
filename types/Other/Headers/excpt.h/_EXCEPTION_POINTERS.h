#include "Other/Headers/winnt.h/PEXCEPTION_RECORD.h"
#include "Other/Headers/winnt.h/PCONTEXT.h"
struct _EXCEPTION_POINTERS {
    PEXCEPTION_RECORD ExceptionRecord;
    PCONTEXT ContextRecord;
}