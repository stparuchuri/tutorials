/*Goal: Write a sort algorithm for sorting the elements of an array 

@author: Surya
@date:  07/14/2017

Description: 
1. Bubble sort: Time Complexity of the algorithm is : O(N^2) as we have two nested for loops, each running N times
2. 

*/


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/* function rototypes */
void print_array(int *a, int n);
int* bubble_sort(int *b, int n,int *a);


/* main function */
int main(void){

int n;

printf("Enter the number of values in the array\n");fflush(stdout);
scanf("%d",&n);fflush(stdin);

/* randomly generated inputs */
int b[n], *tmp,a[n];
for (int i=0; i<n;i++){
	b[i] = rand()%n;
	printf("%d\t",b[i]);fflush(stdout);
}
printf("\n");fflush(stdout);

/* calling various sorting algorithms */
bubble_sort(&b[0],n,&a[0]);
print_array(&a[0],n);

return 0;
}

/* print_array() function to print the arrays */
void print_array(int *a, int n){
for (int i=0;i<n;i++){
	printf("%d\t",a[i]); fflush(stdout);
}
printf("\n");fflush(stdout);
}

/*bubble sort algorithm: ascending order */
int * bubble_sort(int *b, int n,int *a){
int N=0;
memcpy(a,b,(n*sizeof(int)));
for (int i=0;i<n;i++){
	for (int j=n-1;j>i;j--){
		N++;
		if(a[i] > a[j]) {
			a[j] = a[j] + a[i];
			a[i] = a[j] - a[i];
			a[j] = a[j] - a[i];
		}
	}
}
printf("%d : counter value \n");fflush(stdout);
return (a);
}
