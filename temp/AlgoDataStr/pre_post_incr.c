/* Goal: disntinguish between pre- and post- increment
author: surya
date:06/23/2017
*/

#include<stdio.h>

int main(void){

int i=0, j=0;
printf("original values: %d %d \n",i,j);fflush(stdout);
printf("first increment step: %d %d\n",i++,++j);fflush(stdout);
printf("New values: %d %d \n",i,j);fflush(stdout);
if(i++==2){
printf("post-increment incremented and then did compare \n");fflush(stdout);
}
if(++j == 2){
printf("pre-increment incremented and then did compare \n");fflush(stdout);
}
return 0;
}
