
#include <Python.h>

static PyObject *c_helloworld(PyObject *self, PyObject *args)
{
	printf("Hello, world\n");
	return Py_None;
}

static PyMethodDef myMethods[] = {
	{ "helloworld", c_helloworld, METH_NOARGS, "Prints Hello World" },
	{ NULL }
};

static struct PyModuleDef mymodule = {
	PyModuleDef_HEAD_INIT,
	"mymodule",
	"Python3 C API Module",
	-1,
	myMethods
};

PyMODINIT_FUNC PyInit_mymodule(void)
{
	return PyModule_Create(&mymodule);
}
