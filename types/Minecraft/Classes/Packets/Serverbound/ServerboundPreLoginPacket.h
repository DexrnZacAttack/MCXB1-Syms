#include "Minecraft/Classes/Packets/Packet.h"
#include "Minecraft/Classes/std/std%3A%3Abasic_string%3Cwchar_t%3E.h"
struct ServerboundPreLoginPacket : public Packet {
    void * field_24;
    ulonglong field_32;
    ushort unk;
    undefined field_42;
    undefined field_43;
    undefined field_44;
    undefined field_45;
    undefined field_46;
    undefined field_47;
    std::basic_string<wchar_t> playerName;
} // PlaceHolder Class Structure