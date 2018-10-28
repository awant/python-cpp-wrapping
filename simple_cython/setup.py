from distutils.core import setup, Extension

# the c++ extension module
extension_mod = Extension("calculator", ["calculator.c"])

setup(name = "calculator", ext_modules=[extension_mod])
