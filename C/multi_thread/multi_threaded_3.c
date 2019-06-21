/* Goal: can join be used to make a thread wait untill another is finished.

@author: Surya
@date: 07/11/2017
*/

#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>

int count = 0;
pthread_mutex_t mutex1;

void *low_pri_thread(){
int i=0;
for (i=0;i<20;i++){
printf("Executing the low priority thread: %d\n",pthread_self());fflush(stdout);
pthread_mutex_lock(&mutex1);
count++;
pthread_mutex_unlock(&mutex1);
}
}

void *hi_pri_thread(){
pthread_t tid1;
for (int j=0; j<5;j++){
printf("Before: Executing the parent priority thread: %d\n",pthread_self());fflush(stdout);
}
int r1 = pthread_create(&tid1,NULL,low_pri_thread,NULL);
for (int j=0; j<15;j++){
printf("After: Executing the parent priority thread: %d\n",pthread_self());fflush(stdout);
}
pthread_join(tid1,NULL);
if(count == 20){
printf("-------Execution of parent priority thread complete %d------------\n",pthread_self());fflush(stdout);
}
}

int main(){

pthread_t tid2;
int r2 = pthread_create(&tid2,NULL,hi_pri_thread,NULL);
pthread_join(tid2,NULL);
return 0;
}
