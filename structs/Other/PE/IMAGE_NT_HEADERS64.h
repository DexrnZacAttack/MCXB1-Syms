
struct IMAGE_NT_HEADERS64 {
    char[4] Signature;
    Other/PE/IMAGE_FILE_HEADER FileHeader;
    Other/PE/IMAGE_OPTIONAL_HEADER64 OptionalHeader;
}