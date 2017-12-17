#include<stdio.h>
#include<stdlib.h>

const int scale = 15;
#define DoubleToFixed(x) (x * (double)(1 << scale))
#define FixedToDouble(x) (x / (double)(1 << scale))

int main(void){

int SIN_PI_4 = DoubleToFixed(0.7071);
int SIN_PI_3 = DoubleToFixed(0.8660);
int SIN_PI_6 = DoubleToFixed(0.5000);
int SIN_PI_2 = DoubleToFixed(1.0000);

printf("SIN_PI_6 = %f\n",FixedToDouble(SIN_PI_6)); fflush(stdout);
printf("SIN_PI_4 = %f\n",FixedToDouble(SIN_PI_4)); fflush(stdout);
printf("SIN_PI_3 = %f\n",FixedToDouble(SIN_PI_3)); fflush(stdout);
printf("SIN_PI_2 = %f\n",FixedToDouble(SIN_PI_2)); fflush(stdout);

return 0;
}
