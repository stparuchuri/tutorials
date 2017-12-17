/* Goal: to understand the behaviour of typedef and struct together
author: surya
Date: 06/23/2017
*/

#include<stdio.h>

//should use full_structure name
struct structure1 {
int i,j;
};


// can use the structure name as the shorcut/alias
typedef struct str2 {
int i,j;
} str2;

// for linkedlists
typedef struct str3 {
int i,j;
struct str3 *ptr1, *ptr2;
} str3;


int main(void){

struct structure1 a_str1;
str2 a_str2;

printf("%d %d are the values of i,j in a_str1\n",a_str1.i,a_str1.j);fflush(stdout);
printf("%d %d are the values of i,j in a_str2\n",a_str2.i,a_str2.j);fflush(stdout);

return  0;
}
