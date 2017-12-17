/* Goal: To practise the fixed point operations in c:
         1. read different datatypes from user, and print them.
	 2. read and write multiple data types in a sigle printf and ssanf statement.

@author: Surya Teja Paruchuri
@date: 07/13/2017
*/

#include<stdio.h>
#include<stdlib.h>
#include<inttypes.h>

int main(void){

/* section 1: Read different types of data and print them. */
uint16_t n1;
printf("Enter a number to be stored in unint16_t: \n"); fflush(stdout);
scanf("%" SCNu16,&n1);
printf("The entered uint16_t bit number: %" PRIu16 "\n",n1);fflush(stdout);
/* here no new line is being created */

/* section 2: Read multiple values from a single statement
return 0;
}
