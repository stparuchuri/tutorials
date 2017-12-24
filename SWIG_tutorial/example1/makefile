#makefile for SWIG example1
all: _swig_ex1.so ex1.o ex1_wrap.c 

clean:
	rm -rf *.o ex1_wrap.c example1.py *.so

ex1_wrap.c: ex1.h
	swig -python ex1.i

ex1.o: ex1.c ex1.h ex1_wrap.c
	gcc -fPIC -I/usr/include/python3.5 -LPython3.5 -c ex1.c ex1_wrap.c

ex1_wrap.o:
	echo ""

_swig_ex1.so: ex1.o ex1.h ex1_wrap.o
	gcc -shared -fPIC ex1.o ex1_wrap.o -o _swig_ex1.so
