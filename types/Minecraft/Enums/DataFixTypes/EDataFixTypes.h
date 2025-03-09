enum EDataFixTypes : uint32_t {
    Level = 0;
    Player = 1;
    Chunk = 2;
    BlockEntity = 3;
    Entity = 4;
    Item = 5;
    Options = 6;
    Structure = 7;
} // Names are guessed, types based on what calls DataFixerUpper::addFixer