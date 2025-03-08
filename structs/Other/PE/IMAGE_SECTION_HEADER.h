
struct IMAGE_SECTION_HEADER {
    char[8] Name;
    Other/PE/Misc Misc;
    ImageBaseOffset32 VirtualAddress;
    dword SizeOfRawData;
    dword PointerToRawData;
    dword PointerToRelocations;
    dword PointerToLinenumbers;
    word NumberOfRelocations;
    word NumberOfLinenumbers;
    Other/PE/SectionFlags Characteristics;
}