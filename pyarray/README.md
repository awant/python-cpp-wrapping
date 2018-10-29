
Example of C++ class usage from Python code (With Cython)
Based mostly on:
https://cython.readthedocs.io/en/latest/src/userguide/wrapping_CPlusPlus.html

build:
```bash
python setup.py build_ext --inplace

# OSX (works for me)
CC="g++" CPPFLAGS="-stdlib=libc++" python setup.py build_ext --inplace
```

