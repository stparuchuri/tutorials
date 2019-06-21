/* Goal: highlight the matching/excluding characters in scanf 
author: surya
date:06/23/2017
*/

#include<stdio.h>


int main(void){

int a,b,c,d,e,f;
printf("enter two space separated integers\n"); fflush(stdout);
scanf("%d %d",&a,&b); fflush(stdin);
printf("value of a and b entered are: %d %d\n",a,b); fflush(stdout);
printf("enter two intergers with _ separation. This will be read without space in scanf\n"); fflush(stdout);
scanf("%d_%d",e,f); fflush(stdin);
printf("the values entered for e,f are: %d %d",e,f);fflush(stdout);
printf("enter two intergers with space. This will be read without space in scanf\n"); fflush(stdout);
scanf("%d%d",c,d); fflush(stdin);
printf("the values entered for c,d are: %d %d",c,d);fflush(stdout);
printf("the values of c,d are read by scanf, but not the way it should. So programdoesn't display anything for c and c\n");fflush(stdout);

return 0;
}

