#include "char[16].h"
union small_string_optimization {
    char * ptr;
    char[16] string;
}