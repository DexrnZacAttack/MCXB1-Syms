
struct ConsoleSaveFileCommon {
    void * * vftable;
    Types/Classes/FileHeader header; // Created by retype action
    Types/Classes/std/std::basic_string<wchar_t> filename; // Created by retype action
    winnt.h/_RTL_CRITICAL_SECTION saveAccess;
    void * * field_128;
} // PlaceHolder Class Structure