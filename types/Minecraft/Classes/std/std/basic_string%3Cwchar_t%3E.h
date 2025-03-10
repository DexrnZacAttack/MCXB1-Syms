#include "Minecraft/Classes/std/small_string_optimization.h"
struct std::basic_string<wchar_t> {
    small_string_optimization data;
    ulonglong capacity;
    ulonglong size;
}