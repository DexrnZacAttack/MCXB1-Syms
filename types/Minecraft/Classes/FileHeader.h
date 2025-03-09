#include "Minecraft/Enums/ESavePlatform.h"
#include "Minecraft/Enums/ByteOrder.h"
struct FileHeader {
    wchar_t * * fileName;
    undefined8 unk5;
    undefined8 unk6;
    ESavePlatform platform;
    ByteOrder endian;
    short unk2;
    short version;
    undefined4 unk3;
    undefined4 * unk4;
} // PlaceHolder Class Structure