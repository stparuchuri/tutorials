/* Goal demonstrate the functioning of references in C
@author:	Surya Teja Paruchuri
@date:		August 15 2017
*/


/* 
RULE1: Reference variables as standalone are available only in C++
RULE2: References ARE IMMUTABLE !!! */

#include<stdio.h>
#include<stdlib.h>

void print_array(int )

int main(){

int x1=2;
int &r1 = x1; // no need to used &x1 here;
printf("x1: %d\tvalue using reference: %d\n",x1,r1);fflush(stdout);

int x2[]={10,21,32,43,54,65,76};
int &r2= x2[0];
printf("references and arrays\n");fflush(stdout);
printf("array's first element-x2[0]: %d, and using reference- where reference points to first element: %d\n",x2[0],r2);fflush(stdout);

r2++;
printf("after r2++\n");fflush(stdout);
printf("array's first element-x2[0]: %d, and using reference -where reference points to first element: %d\n",x2[0],r2);fflush(stdout);

/* also check if the we can extract address contained in a ref.
 and passing array to a function and accessing the array in function.
*/


return 0;
}
