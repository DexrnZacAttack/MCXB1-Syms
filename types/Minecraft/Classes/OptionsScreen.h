#include "Minecraft/Classes/Screen.h"
#include "Minecraft/Classes/std/std%3A%3Abasic_string%3Cwchar_t%3E.h"
#include "Minecraft/Classes/Options.h"
struct OptionsScreen : Screen {
    Screen * lastScreen;
    std::basic_string<wchar_t> title;
    Options * options;
} // PlaceHolder Class Structure