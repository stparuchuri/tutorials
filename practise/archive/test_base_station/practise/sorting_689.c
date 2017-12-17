/* Goal: Practise sorting and complexity analysis in C
	1. bubble sort
@author: Surya Teja Paruchuri
@date: July 17 2017.
*/


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/* -------------helper functions--------------- */
void print_array(int *b, int N){
printf("Array:\n \t");fflush(stdout);
for (int i=0;i<N;i++){
printf("%d\t",b[i]);fflush(stdout);
}
printf("\n");fflush(stdout);
}



void copy_arr(int *b, int N, int *a){
memcpy(a,b, N*sizeof(int));
}



void bubble_sort(int *b, int N, int *a){
printf("Bubble_sort start:\n");fflush(stdout);
for (int i=0;i<N-1;i++){
 for (int j=N-1;j>i;j--){
  if (a[i]>a[j]){
   a[i]=a[i]+a[j];
   a[j]=a[i]-a[j];
   a[i]=a[i]-a[j];
  }
}
}
}



void insertion_sort(int *b,int N, int *a){
int temp = 0,j=0;
for (int i=1;i<N;i++){
 temp = a[i];
 j=i-1;
 while(j>=0){
  if(a[j]<temp) {break;}
  a[j+1] = a[j];
  j--;
 }
 a[j+1] = temp;
}
}



void merge(int *lpointer,int *rpointer,int l_N,int r_N,int N){
int l_buffer[l_N],r_buffer[r_N],i=0,j=0,k=0;
copy_arr(lpointer,l_N,&l_buffer[0]);
copy_arr(rpointer,r_N,&r_buffer[0]);
for (k=0;k<N;k++){
 if (l_buffer[i]>r_buffer[j]){
  lpointer[k] = r_buffer[j];
  if (j<=r_N-1) j++;
  else{ 
   for (;i<l_N;i++) { 
    lpointer[k]=l_buffer[i];
    k++;
   }
   break;
  }
 }
 else{
 lpointer[k] = l_buffer[i];
 if (i<=l_N-1) i++;
 else {
  for (;j<r_N;j++) {
  lpointer[k]=r_buffer[j];
  k++;
  }
 break;
 }
 }
}
}// end of merge();




void merge_sort(int *a, int N){
if (N>2){
  //print_array(&a[0],(N+1)/2);
  merge_sort(&a[0],(N+1)/2);
  //print_array(&a[0],(N+1)/2);
  //print_array(&a[(N+1)/2],N-(N+1)/2);
  merge_sort(&a[(N+1)/2],N-(N+1)/2);
  //print_array(&a[(N+1)/2],N-(N+1)/2);
}
else {
 if ( N ==2 && a[0] > a[1]){
  a[0] = a[1] +a[0];
  a[1] = a[0]-a[1];
  a[0] = a[0]-a[1];
 }
return ;
}
merge(&a[0],&a[(N+1)/2],(N+1)/2,N-(N+1)/2, N);
} // end of merge_sort();



/* ----------------main function--------------- */
int main(void){

int N;
printf("Enter N:\n");fflush(stdout);
scanf("%d",&N);fflush(stdin);

int b[N],a[N];

/* generate N random values */
for (int i=0;i<N;i++){
b[i] = rand(); // generate a random number;
}
printf("Original Array:\n \t");fflush(stdout);
print_array(&b[0],N);

/* --------- sort ---------- */
copy_arr(&b[0],N,&a[0]);
bubble_sort(&b[0],N,&a[0]);
printf("Bubble sort: \n \t");fflush(stdout);
print_array(&a[0],N);
copy_arr(&b[0],N,&a[0]);
insertion_sort(&b[0],N,&a[0]);
printf("Insertion sort: \n \t");fflush(stdout);
print_array(&a[0],N);
copy_arr(&b[0],N,&a[0]);
//print_array(&a[0],N);
merge_sort(&a[0],N);
printf("Merge sort: \n \t");fflush(stdout);
print_array(&a[0],N);
return 0;
}
