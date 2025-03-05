enum _EXCEPTION_DISPOSITION : uint32_t {
    ExceptionContinueExecution = 0;
    ExceptionContinueSearch = 1;
    ExceptionNestedException = 2;
    ExceptionCollidedUnwind = 3;
}