#include "char[0].h"
struct TypeDescriptor {
    void * pVFTable;
    void * spare;
    char[0] name;
}