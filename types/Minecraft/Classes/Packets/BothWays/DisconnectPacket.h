#include "Minecraft/Classes/Packets/Packet.h"
#include "Minecraft/Classes/std/enable_shared_from_this/std%3A%3Aenable_shared_from_this%3Cclass_DisconnectPacket%3E.h"
#include "Minecraft/Classes/Packets/BothWays/DisconnectPacket/DisconnectPacket%3A%3AeDisconnectReason.h"
struct DisconnectPacket : Packet, std::enable_shared_from_this<class_DisconnectPacket> {
    DisconnectPacket::eDisconnectReason reason;
} // PlaceHolder Class Structure