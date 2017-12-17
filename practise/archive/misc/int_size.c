#include<stdio.h>
#include<stdlib.h>

int main(void){

int p=5;
int *ptr = &p;
printf("%p is the first address of ptr\n",ptr);fflush(stdout);
ptr++;
printf("%p is the next pointer \n",ptr);fflush(stdout);

return 0;
}
