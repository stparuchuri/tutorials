/****************************************************************
* Definition of the functions declared in the header file
* @author: Surya Paruchuri
* @date: December 23 2017.
* (c) Surya Paruchuri
*****************************************************************/
#include<stdio.h>
#include"ex2.h"

void printSum(int a, int b){ printf("The sum of %d and %d is : %d\n",a,b,a+b); }

void storeSum(int a, int b, int* result){ *result = a+b; return; }
