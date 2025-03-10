#include "Minecraft/Classes/Packets/Packet.h"
#include "Minecraft/Classes/Difficulty.h"
struct ClientboundChangeDifficultyPacket : public Packet {
    void * field_24;
    ulonglong field_32;
    Difficulty * difficulty;
    bool field_48;
} // PlaceHolder Class Structure