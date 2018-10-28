from distutils.core import setup, Extension

# the c++ extension module
extension_mod = Extension("cell_cache", ["cell_cache.c"])

setup(name = "cell_cache", ext_modules=[extension_mod])
