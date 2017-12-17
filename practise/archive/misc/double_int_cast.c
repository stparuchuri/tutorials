#include<stdio.h>
#include<stdlib.h>

int main(void){

double x1 = 0xffffffff00000000;
int y1 = (int) x1;

printf("x1 is %ld \n",x1);fflush(stdout);
printf("x1 in hex is %x \n",x1);fflush(stdout);

printf("y1 is %d \n",y1);fflush(stdout);
printf("y1 in hex is %x \n",y1);fflush(stdout);

return 0;
}
