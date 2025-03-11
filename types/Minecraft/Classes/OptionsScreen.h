#include "Minecraft/Classes/Screen.h"
#include "Minecraft/Classes/std/basic_string%3Cwchar_t%3E.h"
#include "Minecraft/Classes/Options.h"
struct OptionsScreen : public Screen {
    Screen * lastScreen;
    basic_string<wchar_t> title;
    Options * options;
} // PlaceHolder Class Structure