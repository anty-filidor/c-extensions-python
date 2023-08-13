#include "myLib.h"
#include <stdio.h>


static PyObject *method_fputs(PyObject *self, PyObject *args) {

    char *str, *filename = NULL;
    int bytes_copied = -1;

    // Parse arguments
    if(!PyArg_ParseTuple(args, "ss", &str, &filename)) {return NULL;}

    FILE *fp = fopen(filename, "w");
    bytes_copied = fputs(str, fp);
    fclose(fp);

    return PyLong_FromLong(bytes_copied);
}


static PyObject *method_process_file(PyObject* self, PyObject* args) {
    const char *filename;

    // Parse arguments
    if (!PyArg_ParseTuple(args, "s", &filename)) {return NULL;}
    printf("imported filename as %s", filename);

    // Open and process the file, extracting integers into a 2D C array
    // a placeholder for the function

    // Example data (replace this with your actual processing logic)
    int data[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    // Create the Python list of lists
    PyObject* result_list = PyList_New(0);
    for (size_t i = 0; i < sizeof(data) / sizeof(data[0]); i++) {
        PyObject* inner_list = PyList_New(0);
        for (size_t j = 0; j < sizeof(data[i]) / sizeof(data[i][0]); j++) {
            PyObject* int_obj = PyLong_FromLong(data[i][j]);
            PyList_Append(inner_list, int_obj);
            Py_DECREF(int_obj);
        }
        PyList_Append(result_list, inner_list);
        Py_DECREF(inner_list);
    }

    return result_list;
}
