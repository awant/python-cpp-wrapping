#define Py_LIMITED_API
#include <Python.h>

static PyObject* raise_exception(PyObject* self, PyObject* args);

// Functions information
static PyMethodDef RaiseExcMethods[] = {
    { "raise_exception", raise_exception, METH_VARARGS, "Raise exception" },
    { NULL, NULL, 0, NULL } // Sentinel
};

// Module information
static PyModuleDef RaiseExcModule = {
    PyModuleDef_HEAD_INIT,
    "raise_exc",                        // name of module
    "Module for raising exception",     // module documentation
    -1,
    RaiseExcMethods
};

PyMODINIT_FUNC PyInit_raise_exc()
{
    return PyModule_Create(&RaiseExcModule);
}

static PyObject* raise_exception(PyObject* self, PyObject* args) {
    PyErr_SetString(PyExc_RuntimeError, "Example runtime exception");
    return NULL;
}

