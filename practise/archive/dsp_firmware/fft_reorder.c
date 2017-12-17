#include<stdio.h>
#define N_WAVE 1024

int main(void){

int ar[1024];

for (int i=0;i<1024;i++) {  ar[i]=i ; }
/* reordering the array */
int m,n,scale,shift,mr,nn,i,l,tr;
m = 10;
n= 1<<10;
if(n>N_WAVE)
 return -1;
mr = 0;
nn=n-1;
scale = 0;
/*decimation in time-reorder data */
for (m=1;m<=nn;++m){
l=n;
do{
 l>>=1;
}while(mr+l>nn);
mr = (mr&(l-1)) + l;

if (mr<=m) continue;

tr = ar[m];
ar[m] = ar[mr];
ar[mr] = tr;
}


for (int j=0;j<1024;j++){
printf("%dth element is %d\n",j,ar[j]); fflush(stdout);}

return 0;
}
