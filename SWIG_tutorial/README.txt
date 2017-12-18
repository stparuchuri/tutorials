# A tutorial on SWIG - to automtically generate a 
# python wrapper for a C/C++ code.
# The tutorial is based on Simon Funke's (of UiO)
# youtube channel
- documented by Surya Paruchuri.

- calling C functions from Python using hardway:
	- float should be converted to doubles, i.e the type conversion has to be done. It is generally done in wrapper code.
	- Python allows us to write wrapper code in C. Every object in python is of type PyObject.
	- 
