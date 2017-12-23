#makefile for SWIG example1
all: ex1.so ex1.o ex1_wrap.c *.so

clean:
	rm -rf *.o ex1_wrap.c example1.py

ex1_wrap.c: ex1.h
	swig -python ex1.i

ex1.o: ex1.c ex1.h ex1_wrap.c
	gcc -fPIC -I/usr/include/python3.5m -lpython3.5m -c ex1.c ex1_wrap.c

ex1_wrap.o:
	

ex1.so: ex1.o ex1.h ex1_wrap.o
	gcc -shared -fPIC -o _ex1.so ex1.o ex1_wrap.o
