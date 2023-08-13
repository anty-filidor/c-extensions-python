#include <Python.h>


static PyObject *method_fputs(PyObject *self, PyObject *args);
static PyObject *method_process_file(PyObject* self, PyObject* args);


static PyMethodDef MyLibMethods[] = {
    {"fputs", method_fputs, METH_VARARGS, "Wrapper for fputs C function"},
    {
        "process_file", method_process_file, METH_VARARGS, 
        "Process a file and return a list of lists."
    },
    {NULL, NULL, 0, NULL}  // Sentinel
};


static struct PyModuleDef mylibmodule = {
    PyModuleDef_HEAD_INIT,
    "my_lib",       // Module name
    NULL,           // Module docstring
    -1,             // Module state
    MyLibMethods    // Module methods
};


PyMODINIT_FUNC PyInit_my_lib(void) {return PyModule_Create(&mylibmodule);}
