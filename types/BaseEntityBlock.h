#include "Minecraft/Classes/Block.h"
#include "Minecraft/Classes/Block/EntityBlock.h"
struct BaseEntityBlock : public Block,  /* inherit */ public EntityBlock {
}