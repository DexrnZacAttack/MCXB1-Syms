#include "Other/Headers/crtdefs.h/size_t.h"
#include "char[10].h"
struct basic_string {
    char * ptr;
    size_t len;
    char[10] buf;
}