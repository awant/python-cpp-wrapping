cdef extern from "rectangle.cpp":
    pass

# Declare the class with cdef
cdef extern from "rectangle.h" namespace "Shapes":
    cdef cppclass Rectangle:
        Rectangle() except +
        Rectangle(int, int, int, int) except +
        #int x0, y0, x1, y1
        int GetArea()
        void Move(int, int)
