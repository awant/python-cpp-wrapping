# python-cpp-wrapping

A few examples how to call C/C++ code from Python (Raw and with Cython)

| folder           | Description                                                           |
| -----------------|-----------------------------------------------------------------------|
| simple_example   | implementation of `sum(a, b)` function and passing from C to Python   |
| gc_example       | pointers management on example of saving/loading number               |
| raise_error      | example of how to raise error from C                                  |
| simple_cython    | the same as simple_example, but with cython                           |
| class_example    | example how to use C++ classes from Python                            |
| pyarray          | implementation and usage C++ classes from Python with tests           |

Performance compairing (elementwise sum of two big arrays) in pyarray:

| array implementation | score   |
|----------------------|---------|
| list                 | 0.01004 |
| numpy                | 0.00064 |
| pyarray              | 0.00045 |
