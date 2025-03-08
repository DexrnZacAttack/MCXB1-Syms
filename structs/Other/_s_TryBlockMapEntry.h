
struct _s_TryBlockMapEntry {
    Other/Headers/ehdata.h/__ehstate_t tryLow;
    Other/Headers/ehdata.h/__ehstate_t tryHigh;
    Other/Headers/ehdata.h/__ehstate_t catchHigh;
    int nCatches;
    ImageBaseOffset32 dispHandlerArray;
}