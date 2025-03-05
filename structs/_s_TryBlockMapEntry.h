
struct _s_TryBlockMapEntry {
    ehdata.h/__ehstate_t tryLow;
    ehdata.h/__ehstate_t tryHigh;
    ehdata.h/__ehstate_t catchHigh;
    int nCatches;
    ImageBaseOffset32 dispHandlerArray;
}