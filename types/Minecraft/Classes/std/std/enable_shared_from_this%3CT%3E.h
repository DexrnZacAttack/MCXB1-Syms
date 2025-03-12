struct std::enable_shared_from_this<T> {
    void * * vftable; // vftable to T
    void * instance; // instance of T
}