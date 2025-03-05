
struct IMAGE_NT_HEADERS64 {
    char[4] Signature;
    PE/IMAGE_FILE_HEADER FileHeader;
    PE/IMAGE_OPTIONAL_HEADER64 OptionalHeader;
}