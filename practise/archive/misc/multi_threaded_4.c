/* Goal: Demonstrate the multi_threaded functionality for functions taking arguements using function pointers and no function pointers

@author: Surya Teja Paruchuri
@date: 07/21/2017

*/

#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>

void *fn1(void *d){
printf("function pointer, void * as the argument\n");fflush(stdout);
printf("thread id is: %d\tvalue is: %d\n",pthread_self(),*(int *)d); fflush(stdout);

}

/* void *fn2(int d){
printf("function pointer, with int as argument\n");fflush(stdout);
printf("thread id is: %d\tvalue is: %d\n",pthread_self(),d);fflush(stdout);
} */

void fn3(void *d){
printf("NO function pointer, with void * as agument\n");fflush(stdout);
printf("thread id is: %d\tvalue is :%d\n",pthread_self(),*(int *)d);fflush(stdout);}

/* void fn4(int d){
printf("NO funcion poointer, with int as arguemnt\n");fflush(stdout);
printf("thread id is: %d\tvalue is :%d\n",pthread_self(),d);fflush(stdout);
} */


int main(void){

pthread_t t1,t2,t3,t4;
int d=10;
//pthread_create(&t1,NULL,&fn4,d);
pthread_create(&t2,NULL,&fn3,&d);
//pthread_create(&t3,NULL,fn2,d);
pthread_create(&t4,NULL,fn1,&d);

//pthread_join(&t1,NULL);
pthread_join(&t2,NULL);
//pthread_join(&t3,NULL);
pthread_join(&t4,NULL);

sleep(5);
return 0;
}
