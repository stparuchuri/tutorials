#include<stdio.h>
#include<stdlib.h>

int main(void){


int array[10]={5};
for (int i=0; i<10;i++) { printf("%d is the %dth element\n",array[i],i);fflush(stdout); }

return 0;
}

