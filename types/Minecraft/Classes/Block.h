#include "Minecraft/Classes/std/basic_string%3Cwchar_t%3E.h"
#include "Minecraft/Classes/SoundType.h"
#include "Minecraft/Classes/Material.h"
#include "Minecraft/Classes/MaterialColor.h"
#include "Minecraft/Classes/Block/BlockStateDefinition.h"
#include "Minecraft/Classes/Block/BlockState.h"
#include "Minecraft/Classes/Texture.h"
struct Block {
    void * * vftable;
    undefined4 field_8;
    undefined field_12;
    undefined field_13;
    undefined field_14;
    undefined field_15;
    basic_string<wchar_t> str_id; // string ID (e.g end_rod)
    int id; // numerical ID (e.g 198)
    char field_52;
    undefined field_53;
    undefined field_54;
    undefined field_55;
    uint lightBlock; // Created by retype action
    bool field_60;
    undefined field_61;
    undefined field_62;
    undefined field_63;
    int lightEmission; // how much light the block emits
    bool field_68;
    bool mipmap;
    undefined field_70;
    bool semiTransparent; // Created by retype action
    float destroyTime;
    float blastResistance; // Created by retype action
    bool field_80;
    bool ticking; // Created by retype action
    undefined field_82;
    undefined field_83;
    undefined8 field_84;
    undefined field_92;
    undefined field_93;
    undefined field_94;
    undefined field_95;
    SoundType * soundType; // Created by retype action
    float field_104;
    undefined field_108;
    undefined field_109;
    undefined field_110;
    undefined field_111;
    Material * material;
    MaterialColor * mapColor;
    float field_128;
    undefined field_132;
    undefined field_133;
    undefined field_134;
    undefined field_135;
    BlockStateDefinition * stateDefinition;
    BlockState * state;
    int nameId;
    int descId;
    Texture * tex;
    undefined4 field_168;
    undefined field_172;
    undefined field_173;
    undefined field_174;
    undefined field_175;
} // PlaceHolder Class Structure