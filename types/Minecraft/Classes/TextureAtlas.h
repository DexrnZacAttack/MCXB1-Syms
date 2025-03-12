// 'NoneType' object has no attribute 'getPathName'
// 'NoneType' object has no attribute 'getPathName'
// 'NoneType' object has no attribute 'getPathName'
// 'NoneType' object has no attribute 'getPathName'
#include "Minecraft/Classes/std/basic_string%3Cwchar_t%3E.h"
#include "Minecraft/Classes/BufferedImage.h"
#include "Minecraft/Classes/TextureAtlasSprite.h"
struct TextureAtlas {
    void * * vftable;
    int field_8;
    undefined field_12;
    undefined field_13;
    undefined field_14;
    undefined field_15;
    basic_string<wchar_t> atlasName; // MC class's TextureAtlas instance has this set to "terrain" by default
    basic_string<wchar_t> atlasPath; // MC class's TextureAtlas instance has this set to "textures/blocks/" by default
    basic_string<wchar_t> field_80;
    bool field_112;
    undefined field_113;
    undefined field_114;
    undefined field_115;
    undefined field_116;
    undefined field_117;
    undefined field_118;
    undefined field_119;
    undefined field_120;
    undefined field_121;
    int field_122;
    undefined field_126;
    undefined field_127;
    pointer field_128;
    undefined field_136;
    undefined field_137;
    undefined field_138;
    undefined field_139;
    undefined field_140;
    undefined field_141;
    undefined field_142;
    undefined field_143;
    pointer field_144;
    pointer field_152;
    pointer field_160;
    longlong field_168; // was 7 during dynanalysis
    longlong field_176; // was 8 during dynanalysis
    BufferedImage * field_184;
    TextureAtlasSprite * missingno; //  lead to (what appeared to be) a TextureAtlasSprite with pointer inside(?) to wchar_t[] "missingno"... wonder if this is the missing texture
    undefined8 field_200;
    undefined8 field_208;
    undefined8 field_216;
    undefined8 field_224;
}