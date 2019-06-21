/* Goal: Pointer dereferencing and increment operations.
author: surya
date: 06/24/2017.
*/

#include<stdio.h>

int main(void){

int a[5]={10,20,30,40,50};
int *p=&a;
printf("(*p)++: %d\n",(*p)++);fflush(stdout);
printf("*(p++): %d\n",*(p++));fflush(stdout);
printf("*(++p): %d\n",*(++p));fflush(stdout);
printf("*p++: %d\n",*p++);fflush(stdout);

return 0;
}

