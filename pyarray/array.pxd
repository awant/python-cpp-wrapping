

cdef extern from "array.h" namespace "BaseStructures":
    cdef cppclass Array[T]:
        void Reserve(size_t)
        void PushBack(T&)
        void PopBack()
        size_t GetSize()
        T& at(size_t)
        T& operator[](size_t)

