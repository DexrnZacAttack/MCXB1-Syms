#include "Minecraft/Classes/FileHeader.h"
#include "Minecraft/Classes/std/std%3A%3Abasic_string%3Cwchar_t%3E.h"
#include "Other/Headers/winnt.h/_RTL_CRITICAL_SECTION.h"
struct ConsoleSaveFileCommon {
    void * * vftable;
    FileHeader header; // Created by retype action
    std::basic_string<wchar_t> filename; // Created by retype action
    _RTL_CRITICAL_SECTION saveAccess;
    void * * field_128;
} // PlaceHolder Class Structure