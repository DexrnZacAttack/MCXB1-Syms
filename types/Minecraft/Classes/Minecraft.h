#include "Minecraft/Classes/DataFixerUpper.h"
#include "Minecraft/Classes/Timer.h"
#include "Minecraft/Classes/LevelRenderer.h"
#include "Other/std/shared_ptr%3CMultiplayerLocalPlayer%3E[4].h"
#include "Minecraft/Classes/ParticleEngine.h"
#include "Minecraft/Classes/User.h"
#include "Minecraft/Classes/std/basic_string%3Cwchar_t%3E.h"
#include "Minecraft/Classes/Textures.h"
#include "Minecraft/Classes/Font.h"
#include "Minecraft/Classes/ProgressRenderer.h"
#include "Minecraft/Classes/EntityRenderDispatcher.h"
#include "Minecraft/Classes/ItemInHandRenderer.h"
#include "Minecraft/Classes/BlockColors.h"
#include "Minecraft/Classes/ItemColors.h"
#include "Minecraft/Classes/TextureAtlas.h"
#include "Minecraft/Classes/ItemRenderer.h"
#include "Minecraft/Classes/Gui.h"
#include "Minecraft/Classes/Options.h"
#include "Minecraft/Classes/SoundEngine.h"
#include "Minecraft/Classes/TexturePackRepository.h"
#include "Minecraft/Classes/File.h"
#include "Minecraft/Classes/McRegionLevelStorageSource.h"
#include "Minecraft/Classes/FrameTimer.h"
#include "Minecraft/Classes/ClientMasterGameMode.h"
struct Minecraft {
    DataFixerUpper * dfu; // DataFuckerUpper
    undefined8 field_8;
    void * field_16;
    void * field_24;
    int width;
    int height;
    int width2; // dynamic analysis shows this is set the same as width
    int height2; // dynamic analysis shows this is set the same as height
    Timer * timer;
    void * field_56;
    undefined8 field_64;
    undefined8 field_72;
    LevelRenderer * levelRenderer;
    undefined8 field_88;
    longlong * field_96;
    void * field_104;
    undefined4 field_112;
    undefined field_116;
    undefined field_117;
    undefined field_118;
    undefined field_119;
    shared_ptr<MultiplayerLocalPlayer>[4] localPlayers;
    void * field_184;
    undefined field_192;
    undefined field_193;
    undefined field_194;
    undefined field_195;
    undefined field_196;
    undefined field_197;
    undefined field_198;
    undefined field_199;
    undefined field_200;
    undefined field_201;
    undefined field_202;
    undefined field_203;
    undefined field_204;
    undefined field_205;
    undefined field_206;
    undefined field_207;
    undefined field_208;
    undefined field_209;
    undefined field_210;
    undefined field_211;
    undefined field_212;
    undefined field_213;
    undefined field_214;
    undefined field_215;
    undefined4 field_216;
    undefined4 field_220;
    void * field_224;
    void * field_232;
    void * field_240;
    void * field_248;
    void * field_256;
    void * field_264;
    void * field_272;
    void * field_280;
    void * field_288;
    undefined8 field_296;
    undefined field_304;
    undefined field_305;
    undefined field_306;
    undefined field_307;
    undefined field_308;
    undefined field_309;
    undefined field_310;
    undefined field_311;
    undefined field_312;
    undefined field_313;
    undefined field_314;
    undefined field_315;
    undefined field_316;
    undefined field_317;
    undefined field_318;
    undefined field_319;
    undefined field_320;
    undefined field_321;
    undefined field_322;
    undefined field_323;
    undefined field_324;
    undefined field_325;
    undefined field_326;
    undefined field_327;
    int field_328;
    int field_332;
    undefined8 field_336;
    longlong * field_344;
    undefined8 field_352;
    undefined8 field_360;
    ParticleEngine * particleEngine;
    User * user;
    basic_string<wchar_t> website;
    undefined8 field_416;
    void * field_424;
    Textures * textures;
    Font * defaultFont;
    Font * alternateFont;
    undefined8 field_456;
    ProgressRenderer * progressRenderer;
    void * field_472;
    EntityRenderDispatcher * entityRenderDispatcher;
    ItemInHandRenderer * itemInHandRenderer;
    BlockColors * blockColors;
    ItemColors * itemColors;
    TextureAtlas * textureAtlas; // Created by retype action
    ItemRenderer * itemRenderer;
    void * field_528;
    undefined8 field_536;
    undefined8 field_544;
    undefined4 field_552;
    undefined4 field_556;
    Gui * gui;
    void * field_568;
    void * field_576;
    Options * options;
    undefined8 field_592;
    SoundEngine * soundEngine;
    undefined8 field_608;
    TexturePackRepository * texturePackRepository;
    File saves;
    McRegionLevelStorageSource * mcRegionLevelStorageSource;
    void * field_664;
    void * field_672;
    void * field_680;
    void * field_688;
    basic_string<wchar_t> field_696;
    undefined4 field_728;
    undefined1 field_732;
    undefined field_733;
    undefined field_734;
    undefined field_735;
    basic_string<wchar_t> field_736;
    longlong field_768;
    undefined4 field_776;
    undefined4 field_780;
    FrameTimer * frameTimer;
    void * field_792;
    longlong field_800;
    longlong field_808;
    undefined field_816;
    undefined field_817;
    undefined field_818;
    undefined field_819;
    undefined field_820;
    undefined field_821;
    undefined field_822;
    undefined field_823;
    undefined field_824;
    undefined field_825;
    undefined field_826;
    undefined field_827;
    undefined field_828;
    undefined field_829;
    undefined field_830;
    undefined field_831;
    undefined field_832;
    undefined field_833;
    undefined field_834;
    undefined field_835;
    undefined field_836;
    undefined field_837;
    undefined field_838;
    undefined field_839;
    void * field_840;
    undefined8 field_848;
    undefined8 field_856;
    undefined8 field_864;
    undefined8 field_872;
    undefined8 field_880;
    undefined8 field_888;
    undefined8 field_896;
    undefined8 miniGame;
    ClientMasterGameMode * clientMasterGameMode;
    void * field_920;
    undefined8 field_928;
    void * field_936;
    undefined8 field_944;
}