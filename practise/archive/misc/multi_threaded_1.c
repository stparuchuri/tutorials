#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>

int var=0;

void * thread_print(void *arg){
int *ptr = (int *)arg; 
printf("the value read is %d form therad %d\n",(*ptr),pthread_self());fflush(stdout);
(*ptr)++;
}

int main(void){
int data = 0;
//Thread ID;
pthread_t tid1,tid2,tid3;

//create attribtes
// attributes =  NULL for now
pthread_create(&tid1, NULL, thread_print, &var);
pthread_create(&tid2, NULL, thread_print, &var);
pthread_create(&tid3, NULL, thread_print, &var);

pthread_join(tid1,NULL);
pthread_join(tid2,NULL);
pthread_join(tid3,NULL);

pthread_create(&tid1, NULL, thread_print(&var),NULL); /* NOTE: This is not a good method to initialize a thread. Should use the above approach */

return 0;
}

