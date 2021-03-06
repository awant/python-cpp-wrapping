# distutils: language = c++

from array cimport Array

cdef class array:
    cdef Array[int] c_obj

    def __cinit__(self, val):
        if isinstance(val, int):
            self.c_obj.Reserve(val)
        else:
            self.c_obj.Reserve(len(val))
            for elem in val:
                self.c_obj.PushBack(elem)

    def push_back(self, elem):
        if isinstance(elem, int):
            return self.c_obj.PushBack(elem)
        raise RuntimeError("Only int is supported")
    
    def pop_back(self):
        return self.c_obj.PopBack()

    def get_size(self):
        return self.c_obj.GetSize()

    def __getitem__(self, key):
        if isinstance(key, int):
            if (key < 0) or (key >= self.c_obj.GetSize()):
                raise RuntimeError("key is out of bounds")
            return self.c_obj.at(key)
        raise RuntimeError("key should be int")

    def __add__(one, other):
        v1 = <array>one
        v2 = <array>other

        size = v1.c_obj.GetSize()
        arr_sum = array(size)
        for i in range(size):
            arr_sum.c_obj.PushBack(v1.c_obj[i] + v2.c_obj[i])
        return arr_sum

    def __str__(self):
        cdef str represent = "[ "
        cdef int a = 0
        for i in range(self.c_obj.GetSize()):
            a = self.c_obj.at(i)
            represent += str(a) + " "
        represent += "]"
        return represent

