#define Py_LIMITED_API
#include <Python.h>

#include "calc.h"

static PyObject* calculator_sum(PyObject* self, PyObject* args);

// Functions information
static PyMethodDef CalculatorMethods[] = {
    { "sum", calculator_sum, METH_VARARGS, "Add numbers" },
    { NULL, NULL, 0, NULL } // Sentinel - for end checking
};

// Module information
static PyModuleDef CalculatorModule = {
    PyModuleDef_HEAD_INIT,
    "calculator",                       // name of module
    "Module for arithmetic operations", // module documentation
    -1,                                 // irrelevant
    CalculatorMethods
};

PyMODINIT_FUNC PyInit_calculator()
{
    return PyModule_Create(&CalculatorModule);
}

static PyObject* calculator_sum(PyObject* self, PyObject* args) {
    int lhs, rhs;
    if (!PyArg_ParseTuple(args, "ii", &lhs, &rhs)) {
        return NULL;
    }
    int result = sum(lhs, rhs);
    return PyLong_FromLong(result);
}
