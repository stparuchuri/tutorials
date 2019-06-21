/* Goal: demonstrate semaphores using a producer and consumer model

@author: Surya Teja Paruchuri
@date: 07/21/2017
*/

#include<stdio.h>
#include<stdlib.h>
#include<semaphore.h>
#include<pthread.h>

#define N 100

int buffer[N];
sem_t s1;
pthread_mutex_t semaphore_mutex;

/* ------------------- functions declarations ---------------------------*/
void *producer_task(void *data);
void *consumer_task();
void print_array();

/* -------------------------- main function ----------------------------*/
int main(void){

pthread_t t1,t2,t3,c1,c2;
sem_init(&s1,0,N);

print_array();
int d1=1,d2=2,d3=3;

/* producer threads */
if (pthread_create(&t1, NULL,producer_task,(void *)&d1)){
 printf("producerTask creation failed\n");fflush(stdout);
 exit(1);
}
if (pthread_create(&t2, NULL,producer_task,(void *)&d2)){
 printf("producerTask creation failed\n");fflush(stdout);
 exit(1);
}
if (pthread_create(&t3, NULL,producer_task,(void *)&d3)){
 printf("producerTask creation failed\n");fflush(stdout);
 exit(1);
}

/* consumer tasks */
if (pthread_create(&c1, NULL,consumer_task,NULL)){
 printf("consumer Task creation failed\n");fflush(stdout);
 exit(1);
}
if (pthread_create(&c1, NULL,consumer_task,NULL)){
 printf("consumer Task creation failed\n");fflush(stdout);
 exit(1);
}

print_array();

/* joining the threds */
if( ~(pthread_join(t1,NULL) && pthread_join(t2,NULL) && pthread_join(t3,NULL) && pthread_join(c1,NULL) && pthread_join(c2,NULL) )){
printf("Failed joining the threads\n");fflush(stdout);
exit(1);
}

print_array();

return 0;
}


/* ---------------------------- function declarations --------------------- */

void *producer_task(void *data){
int c =0;
while(c<10){
pthread_mutex_lock(&semaphore_mutex);
sem_wait(&s1);
pthread_mutex_unlock(&semaphore_mutex);
int count;
sem_getvalue(&s1,&count);
buffer[count-1] = *((int *)data);
c++;
}
}

void *consumer_task(){
int c=0;
while(c<15){
pthread_mutex_lock(&semaphore_mutex);
int count;
sem_getvalue(&s1,&count);
int data;
if (count>1){
 data=buffer[count-1];
 buffer[count-1] = 0;
 sem_post(&s1);
}
pthread_mutex_unlock(&semaphore_mutex);
if(count>1) { printf("value read by thread id: %d is %d\n",pthread_self(),data); fflush(stdout); }
}
}

void print_array(){
printf("Array:\n\t");fflush(stdout);
for (int i=0;i<N;i++){
printf("%d\t",buffer[i]);fflush(stdout);
}
printf("\n");fflush(stdout);
}
