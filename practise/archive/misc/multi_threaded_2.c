/*goal: simple multi-threaded program example - to check if pthread_create immediately starts running the thread.
ans: All threads start to run as soon as they are created.
author: Surya Teja Paruchuri
date: 07/12/2017
*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>

int c = 0;
pthread_mutex_t mutex1;
void *print_thread(){
int i=0;
for(i=0;i<10;i++){
pthread_mutex_lock(&mutex1);
printf("c: %d Executing thread: %d\n",c,pthread_self()); fflush(stdout);
pthread_mutex_unlock(&mutex1);
}
pthread_mutex_lock(&mutex1);
c++;
pthread_mutex_unlock(&mutex1);
}

int main(){

pthread_t tid1,tid2,tid3;
int r1 = pthread_create(&tid1,NULL,print_thread,NULL);
int r2 = pthread_create(&tid2,NULL,print_thread,NULL);
sleep(10);
int r3 = pthread_create(&tid3,NULL,print_thread,NULL);
pthread_join(tid1,NULL);
pthread_join(tid2,NULL);
pthread_join(tid3,NULL);

return 0;
}
