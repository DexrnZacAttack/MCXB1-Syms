#include "Minecraft/Classes/Packets/Packet.h"
#include "Minecraft/Classes/BlockPos.h"
struct ClientboundPlayerSleepPacket : public Packet {
    void * field_24;
    ulonglong field_32;
    undefined4 field_40;
    BlockPos * pos;
    undefined4 field_52;
} // PlaceHolder Class Structure