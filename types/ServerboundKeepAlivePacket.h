#include "Minecraft/Classes/Packets/Packet.h"
#include "Minecraft/Classes/std/enable_shared_from_this/std%3A%3Aenable_shared_from_this%3Cclass_ServerboundKeepAlivePacket%3E.h"
struct ServerboundKeepAlivePacket : public Packet,  /* inherit */ public std::enable_shared_from_this<class_ServerboundKeepAlivePacket> {
    int id;
} // PlaceHolder Class Structure