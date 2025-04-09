#include "Minecraft/Classes/Packets/Packet.h"
#include "Minecraft/Classes/std/std%3A%3Aenable_shared_from_this%3CT%3E.h"
#include "Minecraft/Classes/std/basic_string%3Cwchar_t%3E.h"
struct ServerboundPreLoginPacket : public Packet,  /* inherit */ public std::enable_shared_from_this<T> {
    ushort unk;
    undefined field_42;
    undefined field_43;
    undefined field_44;
    undefined field_45;
    undefined field_46;
    undefined field_47;
    basic_string<wchar_t> playerName;
} // PlaceHolder Class Structure