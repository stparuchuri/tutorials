/******************************************************************
* .i File for the Example2 of SWIG tutorial to generate wrapper
* @author: Surya Paruchuri
* @date: December 23 2017.
* (c) Surya Paruchuri
*******************************************************************/

%module swig_ex2
%{
#include"ex2.h"
%}

%include"typemaps.i"

void printSum(int a, int b);
void storeSum(int a, int b, int* OUTPUT);
