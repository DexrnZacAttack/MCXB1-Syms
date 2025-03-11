#include "Minecraft/Classes/std/shared_ptr%3CT%3E.h"
struct shared_ptr<MultiplayerLocalPlayer> : public shared_ptr<T> {
} // ghidra is being annoying and forces me to put it either in Other/std or /std, can't use typedef either otherwise it will just create endless directories to avoid it