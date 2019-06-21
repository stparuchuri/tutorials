/*Goal: write a switch-case program.
author: surya
date: 06/23/2017
*/

#include<stdio.h>

int main(void){

int i;
printf("enter the value to be stored in i\n");fflush(stdout);
scanf("%d",&i);fflush(stdin);
switch(i){
case 1:{
printf("value enter is 1\n");fflush(stdout);
break;}
case 2:{
printf("value enter is 2\n");fflush(stdout);
break;}
case 3:{
printf("value enter is 3\n");fflush(stdout);
break;}
default:{
printf("default case \n");fflush(stdout);
break;}
}
return 0;
}
