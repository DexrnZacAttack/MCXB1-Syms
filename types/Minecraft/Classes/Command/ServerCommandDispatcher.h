#include "Minecraft/Classes/Command/CommandDispatcher.h"
#include "Minecraft/Classes/Command/Commands/AdminLogCommand.h"
struct ServerCommandDispatcher : public CommandDispatcher,  /* inherit */ public AdminLogCommand {
}