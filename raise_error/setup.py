from distutils.core import setup, Extension

# the c++ extension module
extension_mod = Extension("raise_exc", ["raise_exc.c"])

setup(name = "raise_exc", ext_modules=[extension_mod])
