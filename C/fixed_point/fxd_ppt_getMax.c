#include<stdio.h>
#include<stdlib.h>


const int scale = 12; // Q19.12 format.
#define DoubleToFixed(x) (x*(double)(1<<scale))
#define FixedToDouble(x) (x/((double)(1<<scale)))

/* since the q19.12 format is used, the product is of q38.25 format.
Thus we can mitigate this by converting the q19.12 format to q25.6 format
and the result of two q25.6 number's product is q50.12 */

#define MUL(x,y) (((x)>>4)*((y)>>4)>>4)

double D_GetMax(double *);
int I_GetMax(int *);

int main(void){

double d_ar[10] = {3.45,3.456,4.23,12.33,0.034,1.4,2.4,1.2,6.7,3.0};
int i_ar[10];

for(int i=0;i<10;i++){
i_ar[i] = DoubleToFixed(d_ar[i]);
}
for(int i=0;i<10;i++){
printf("%d th element in fixed point is %f\n",i,FixedToDouble(i_ar[i])); fflush(stdout);
}

/* calculate the max in double format */
double d_max = D_GetMax(d_ar);
printf("%f is the max value per d_max\n",d_max);fflush(stdout);
/*calcuate the max in fxd_ppt format */
int i_max = I_GetMax(i_ar);
printf("%f is the maxvalue per i_max\n",FixedToDouble(i_max));fflush(stdout);

/* product using double */
double d_product = d_ar[0];
for(int i=1;i<3;i++){ d_product *= d_ar[i]; }
printf("%f is the product per d_max\n",d_product);fflush(stdout);

/* product using fixed point */
int i_product=DoubleToFixed(1);
for(int i=0;i<3;i++){
i_product =  MUL(i_product,i_ar[i]);
}
printf("%f is the product per i_max\n",FixedToDouble(i_product));fflush(stdout);

return 0;
}


/* double max function definition */
double D_GetMax(double *d_ar){
double max = d_ar[0];
for (int i=1;i<10;i++){
if (max<d_ar[i]){
max = d_ar[i];
}
}
return (max);
}


/* fxd_ppt max function */
int I_GetMax(int *i_ar){
int max =i_ar[0];
for (int i=1;i<10;i++){
if (max<i_ar[i]){
max = i_ar[i];
}
}
return (max);
}

