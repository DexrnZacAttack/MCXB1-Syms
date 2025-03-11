#include "Minecraft/Classes/std/small_string_optimization.h"
struct basic_string<char> {
    small_string_optimization data;
    ulonglong size;
    ulonglong capacity;
}