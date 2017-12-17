/*Goal: For loop with pre-increment and post increment
author: Surya
Date: 06/23/2017
*/

#include<stdio.h>

int main(void){

for(int i=0;i<5;i++){
printf("value now is %d\t",i);fflush(stdout);
}
printf("\n");fflush(stdout);
for(int i=0;i<5;++i){
printf("value now is %d\t",i);fflush(stdout);
}
printf("\n");fflush(stdout);
return 0;
}
