#include "char[4].h"
#include "Other/PE/IMAGE_FILE_HEADER.h"
#include "Other/PE/IMAGE_OPTIONAL_HEADER64.h"
struct IMAGE_NT_HEADERS64 {
    char[4] Signature;
    IMAGE_FILE_HEADER FileHeader;
    IMAGE_OPTIONAL_HEADER64 OptionalHeader;
}