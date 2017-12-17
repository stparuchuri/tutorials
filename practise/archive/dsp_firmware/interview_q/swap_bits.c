/*Goal: swap the bits in the user indicated position of a 16 bit number with another number 
author: Surya Teja Paruchuri
date: 07/03/2017
inputs: N/A (user will be prompted)
output: the 16-bit number with the bits swaped from the second number */

#include<stdio.h>
#include<stdlib.h>
#include<inttypes.h>

int main(void){

uint16_t or_no,t_no;
uint8_t p,q;

printf("Enter the original number \n");fflush(stdout);
scanf("%" SCNu16, &or_no);
printf("The 16 bit original number read is :%" PRIu16 "\n",or_no);fflush(stdout);
printf("Enter the tenant number \n");fflush(stdout);
scanf("%" SCNu16, &t_no);
printf("The 16 bit tenant number read is :%" PRIu16 "\n",t_no);fflush(stdout);

printf("enter the LSB position between number 0 and 15\n");fflush(stdout);
scanf("%" SCNu8 "%" SCNu8 ,&p, &q); fflush(stdin);
printf("P: %" PRIu8 " Q: %"PRIu8 "\n", p ,q);fflush(stdout);

/* swaping section */
uint16_t mask = ((1 << p) -1) - ((1<<q)-1);
printf("Mask: %" PRIu16 "\n", mask);fflush(stdout);
or_no = (or_no & (~mask));
mask = mask & t_no;
or_no = mask ^ or_no;
printf(" The reshaped number is : %" PRIu16 "\n",or_no); fflush(stdout);

return 0;
}
