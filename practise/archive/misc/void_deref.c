#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
int reg_no, price, date;
} n;

int main(){
void *ptr;
ptr = (void*)malloc(sizeof(n));
ptr->reg_no = 1;
printf("The value in reg_no is %d \n",(ptr->reg_no));fflush(stdout);
return 0;
}
