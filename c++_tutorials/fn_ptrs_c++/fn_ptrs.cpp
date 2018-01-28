/* Goal: Demonstrate funtion pointers in c++ using g++; dilineate same with C syntax;
 @author: Surya Paruchuri
 @date: Jan 27 2018.
 Remarks:
 Unlike in C, in C++ (atleast for g++), we cannot use paranthesis in declaration as follows:
	<return_type> (*fn_name) //-----1
	<return_type>* (*fn_name) //-----2
But can use it as 
	<return_type> (fn_name)  //-----3
	<return_type>* (<fn_name>) //-----4
as by default 1,2 throw a compiletime error.
If paranthesis are removed, compiler shall consider 1,2 as <return_type>**, irrespective of a spacing between two astericks (<return_type>* *<fn_name>). In short, in C++ <fn_name> appears to be a pointer directly.

Another important note is while declaring function pointeres in main, observe the paranthesis around pointer name. It is again mandatory, else compiler misreads and throws compile time error.
And lastly, unlike in C (gcc), in C++ (g++) assigning a function pointer a function requires the use of just function name,i.e,  doesn't require an & infront of the function name.
(For user's quick refernce, in C using gcc, if declaration is of type 1 or 2 we don't use & while defining the fn_ptr and if it of type 3 or 4 we use an & in defiing corresponding fun_ptr) 
*/

#include<iostream>


using namespace std;

//funcion (i.e fn_ptr) with pass by valuev
void (fn1)(int a){
std::cout << "fn1" << a << std::endl;
}

//funciton (i.e fn_ptr) with pass by reference
void fn2(int *a){
std::cout << "fn2" << *a << std::endl;
}

/* ++++ -In C using gcc, these declarations are read differently*/

//funtion (i.e, fn_ptr) with normal args, returning a void* ++++
void *fn3(int a){
std::cout << "fn3" << a << std::endl;
}

//funciton (i.e, fn_ptr) with pass by ref, reutning a void* ++++
void *fn4(int *a){
std::cout << "fn4" << *a << std::endl;
}

// function (i.e, fn ptr) pass by val returning an >>" int** "<<
/*int* *fn5(int *a){
return a;
}*/

int main(void){

int a;

// fn_ptr to fn1;
void (*fn1_ptr)(int) = fn1;

// fn_ptr to fn2;
void (*fn2_ptr)(int *) = fn2;

// fn_ptr3  to fn3;
//>>> doesn't work void (*fn3_ptr)(int) = fn3;<<<<
//>>> doesn't either as fn3 is itself a pointer here void *(fn3_ptr)(int) = fn3;
// So only valid way to use fn3 is as follows, which is as simple as  function return a void * here.
void *ret_ptr = fn3(a);


return 0;
}
