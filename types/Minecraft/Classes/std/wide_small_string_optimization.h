#include "wchar_t[8].h"
union wide_small_string_optimization {
    wchar_t * stringPtr;
    wchar_t[8] sso;
}