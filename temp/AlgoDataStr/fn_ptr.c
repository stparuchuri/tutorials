/* Goal demonstrate function pointers
author:Surya
Date: 06/23/2017
*/


#include<stdio.h>


/* increment1 takes a poiner and returns a value */
int increment1(int *a) { 
(*a)++;
return *a;
}

/* increment2 takes a pointer and returns a pointer */
int * increment2(int *a){
(*a)++;
return a;
}

/* increment3 takes a pointer and returns a value */
int *increment3(int *a){
(*a)++;
return *a;
}

/* increment4 takes a pointer and returns a pointer */
int * *increment4(int *a){
(*a)++;
return a;
}


int main(void){

int i=0;
int *ptr=&i;

int (*fx_ptr1)(int *) = &increment1;
printf("value of i before fn call : %d\n",i); fflush(stdout);
fx_ptr1(&i);
printf("value of i after fn call : %d\n",i); fflush(stdout);

int * (*fx_ptr2)(int *) = &increment2;
printf("value of i before fn call : %d\n",*ptr); fflush(stdout);
ptr = fx_ptr2(ptr);
printf("value of i after fn call : %d\n",*ptr); fflush(stdout);

int (*fx_ptr3)(int *) = increment3;
printf("value of i before fn call : %d\n",i); fflush(stdout);
i=fx_ptr3(&i);
printf("value of i after fn call : %d\n",i); fflush(stdout);

int * (*fx_ptr4)(int *) = increment4;
printf("value of i before fn call : %d\n",*ptr); fflush(stdout);
ptr = fx_ptr4(ptr);
printf("value of i after fn call : %d\n",*ptr); fflush(stdout);

return 0;
}
