#include "Other/PE/IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct.h"
union IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion {
    IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct;
    dword Name;
    word Id;
}