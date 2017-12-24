#makefile for SWIG example2:
all: ex2.h ex2.c ex2.i ex2.o ex2_wrap.o _swig_ex2.so

clean:
	rm -f *.o *.so

ex2.o: ex2.h ex2.c
	gcc -fPIC -LPytho3.5 -c ex2.c

ex2_wrap.o: ex2_wrap.c
	gcc -fPIC -I/usr/include/python3.5 -LPython3.5 -c ex2_wrap.c

ex2_wrap.c: ex2.i ex2.h
	swig -python ex2.i

_swig_ex2.so: ex2.h ex2.c ex2.i ex2.o ex2_wrap.o
	gcc -shared -fPIC ex2_wrap.o ex2.o -o _swig_ex2.so
