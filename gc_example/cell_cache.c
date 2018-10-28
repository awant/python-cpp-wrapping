#define Py_LIMITED_API
#include <Python.h>

static PyObject* cell_save(PyObject* self, PyObject* args);
static PyObject* cell_load(PyObject* self, PyObject* args);

// Functions information
static PyMethodDef CellCacheMethods[] = {
    { "cell_save", cell_save, METH_VARARGS, "Save passed object" },
    { "cell_load", cell_load, METH_VARARGS, "Load saved object" },
    { NULL, NULL, 0, NULL } // Sentinel
};

// Module information
static PyModuleDef CellCacheModule = {
    PyModuleDef_HEAD_INIT,
    "cell_cache",                       // name of module
    "Module to save/load py object",    // module documentation
    -1,
    CellCacheMethods
};

PyMODINIT_FUNC PyInit_cell_cache()
{
    return PyModule_Create(&CellCacheModule);
}

static PyObject* Keep = NULL;

static PyObject* cell_save(PyObject* self, PyObject* args) {
    Py_XDECREF(Keep);
    Keep = NULL;

    Keep = args;
    Py_INCREF(Keep);

    Py_RETURN_NONE;
}

static PyObject* cell_load(PyObject* self, PyObject* args) {
    Py_XINCREF(Keep);
    return Keep;
}
