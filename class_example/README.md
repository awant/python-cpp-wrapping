
Example of C++ class usage from Python code (With Cython)
Based mostly on:
https://cython.readthedocs.io/en/latest/src/userguide/wrapping_CPlusPlus.html

build:
```bash
python setup.py build_ext --inplace

# OS X (works for me)
# --inplace flag tells to make lib in current folder
CC="g++" CPPFLAGS="-stdlib=libc++" python setup.py build_ext --inplace
```

