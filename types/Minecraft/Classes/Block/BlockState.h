#include "Minecraft/Classes/Block/BlockProperties.h"
#include "Minecraft/Classes/Block/BlockBehaviors.h"
struct BlockState : public BlockProperties,  /* inherit */ public BlockBehaviors {
}