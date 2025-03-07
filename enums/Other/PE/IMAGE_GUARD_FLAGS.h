enum IMAGE_GUARD_FLAGS : uint32_t {
    IMAGE_GUARD_CF_INSTRUMENTED = 256;
    IMAGE_GUARD_CFW_INSTRUMENTED = 512;
    IMAGE_GUARD_CF_FUNCTION_TABLE_PRESENT = 1024;
    IMAGE_GUARD_SECURITY_COOKIE_UNUSED = 2048;
    IMAGE_GUARD_PROTECT_DELAYLOAD_IAT = 4096;
    IMAGE_GUARD_DELAYLOAD_IAT_IN_ITS_OWN_SECTION = 8192;
    IMAGE_GUARD_CF_EXPORT_SUPPRESSION_INFO_PRESENT = 16384;
    IMAGE_GUARD_CF_ENABLE_EXPORT_SUPPRESSION = 32768;
    IMAGE_GUARD_CF_LONGJUMP_TABLE_PRESENT = 65536;
    IMAGE_GUARD_RF_INSTRUMENTED = 131072;
    IMAGE_GUARD_RF_ENABLE = 262144;
    IMAGE_GUARD_RF_STRICT = 524288;
    IMAGE_GUARD_CF_FUNCTION_TABLE_SIZE_MASK_1 = 268435456;
    IMAGE_GUARD_CF_FUNCTION_TABLE_SIZE_MASK_2 = 536870912;
    IMAGE_GUARD_CF_FUNCTION_TABLE_SIZE_MASK_4 = 1073741824;
    IMAGE_GUARD_CF_FUNCTION_TABLE_SIZE_MASK_8 = 2147483648;
}