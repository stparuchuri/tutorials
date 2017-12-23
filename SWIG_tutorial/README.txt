###################################################################
# A tutorial on SWIG - to automtically generate a 
# python wrapper for a C/C++ code.
# The tutorial is based on Simon Funke's (of UiO)
# youtube channel video. 

# documented by Surya Paruchuri.
###################################################################

-------> SWIG Tutorial <------
& 2 ways to wrap a C/C++ code to generate python bindings: Hardway and automatic wrapper generators such as SWIG.

& Hardway:
	&& var1 = 1.2 creates a float variable in python.
	&& Wrapper code: converts the python types to c.
	&& Every Python object is represented by a C struct PyObject.
	&& wrapper code - a c function- that extracts the float in PyObject and converts it to double.
	&& Examples: 
		&&& include "Python.h"
		&&& include "<c\_funciton>.h"
		&&& static PyObject *\_wrapper\_function1(PyObject *self, PyObject *args)\{
		&&& /* First arg is always the function itself. The second arg is the tuple of all the args passed to the functions. Wrapper for a C function prototype as: "double hw1(double, double, double *)" */
		&&& PyObject *resultObject;
		&&& double r1, r2, result;
		&&& PyArg\_ParseTuple(args,(char *)"dd:hw1",\&r1,\&r2);
		&&& hw1(r1,r2,\&result);
		&&& resultObject = PyFloat\_FromDouble(result);
		&&& return resultObject;
		&&& \}
	&& The wrapper function and hw1 functions must be compiled and linked to a shared library. This can be loaded into python as module (which are typically called extensions.)
	&& example compilation steps with bash for compiling to a shared library:
		&&& gcc -Isrc -fPIC \$(pkg-config --cflags --libs python3) -c <space separated source files list : src\/hw.c hw\_wrap.c>
		&&& gcc -shared -fPIC -o <hw.so hw.o hw\_wrap.o>
& SWIG (Simplified Wrapper and Interface Generation) way:
	&& Steps:
		&&& First make a SWIG interface file.
		&&& Then run SWIG to generate a wrapper code.
		&&& Finally compile and link the C code and wrapper code
	&& Example:
		&&& hw.h has the function prototypes.
		&&& hw.i -The interface file:
			&&&& \%module \textless module name \textgreater \{
			&&&& \%\{
			&&&& /* Everything in this block will be copied in the wrapper file	. We include the C header file necessary to compile the interface */
			&&&& \# include "\textless file.h \textgreater"
			&&&& \%\}
			&&&& /* list of all functions to be interfaced */
			&&&& void hw1(double r1, double r2, double *s);
			&&&& void hw2(double r1, double r1);
			&&&& /* Or Use 
			&&&& \%include "src/hw.h"
			&&&& to automatically include all functions
			&&&& */ 

		&&& the functions listed inside module or included using \# include are the one actually compiled to shared library.
		&&& Generating the python: SWIG -python -I\textless include directory = src\textgreater  hw.i
		&&& SWIG generates a wrapped code: hw\_wrap.c
	&& Compile and link:
		&&& gcc -Isrc -fPIC -I/usr/include/python3.5m -I/usr/in/clude/x86 64-linux-gnu/python3.5m -lpython3.5m -c src/hw.c hw.wrap.c
		&&& gcc -shared -fPIC -o \_hw.so hw.o hw\_wrap.o
	&& Note the \_ in \_hw.so is required.
	&& can write a build script to automate this process.
	&& May also use distutils to directly compile and generate from python.
	&& careful wit pointers:
		&&& /* add \%include "typemaps.i" to the .i file.
		&&& Then change the function prototype to: void hw1(double r1, double r2,double *OUTPUT);
