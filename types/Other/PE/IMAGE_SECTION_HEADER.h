#include "char[8].h"
#include "Other/PE/Misc.h"
#include "Other/PE/SectionFlags.h"
struct IMAGE_SECTION_HEADER {
    char[8] Name;
    Misc Misc;
    ImageBaseOffset32 VirtualAddress;
    dword SizeOfRawData;
    dword PointerToRawData;
    dword PointerToRelocations;
    dword PointerToLinenumbers;
    word NumberOfRelocations;
    word NumberOfLinenumbers;
    SectionFlags Characteristics;
}