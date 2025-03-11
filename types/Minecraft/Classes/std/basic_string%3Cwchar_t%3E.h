#include "Minecraft/Classes/std/wide_small_string_optimization.h"
struct basic_string<wchar_t> {
    wide_small_string_optimization data;
    ulonglong capacity;
    ulonglong size;
}