#include<stdio.h>
#include<math.h>

int main(){

double t = 0.0, t_s = (1/200000), sin_value;
for (t=0;t<=0.0001;t=t+t_s){
printf("%15.10f \t",sin(2*M_PI*t));fflush(stdout);
}
return 0;
}
