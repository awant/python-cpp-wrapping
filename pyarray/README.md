
Full example of C++ class usage from Python code (with Cython)

build:
```bash
python setup.py build_ext --inplace

# OSX (works for me)
CC="g++" CPPFLAGS="-stdlib=libc++" python setup.py build_ext --inplace
```

check performance (compairing with list and numpy array):
```bash
python test_array.py
```

Example output:
```bash
list time:	0.01004
numpy time:	0.00064
pyarray time:	0.00045
[ 1 2 3 ]
+
[ 1 3 7 ]
=
[ 2 5 10 ]
```
