#include <Python.h>


static PyObject *method_fputs(PyObject *self, PyObject *args);


static PyMethodDef MyLibMethods[] = {
    {"fputs", method_fputs, METH_VARARGS, "Wrapper for fputs C function"},
    {NULL, NULL, 0, NULL}
};


static struct PyModuleDef mylibmodule = {
    PyModuleDef_HEAD_INIT,
    "my_lib",  // this name should be the same as in PyMODINIT_FUNC
    "Python interface for C library functions",
    -1,
    MyLibMethods
};

PyMODINIT_FUNC PyInit_my_lib(void) {return PyModule_Create(&mylibmodule);}
