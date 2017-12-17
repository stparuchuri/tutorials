#include<stdio.h>
#include<stdlib.h>


const int scale  = 16; // 1/2^16;
//const int FractionMask = ( 0xffffffff >> (32-scale));
//const int WholeMask = ( 0xffffffff ^ FractionMask );

#define DoubleToFixed(x) (x*(double)(1<<scale))
#define FixedToDouble(x) (x/(double)(1<<scale))
#define IntToFixed(x) (x<<scale)
#define FixedToInt(x) (x>>scale)
//#define FractionPart(x) (x & (1
/* #define MUL(x,y) (((long long)x*(long long)y)>>scale) // not good for embedded systems. */
#define MUL(x,y) ((((x)>>8)*((y)>>8))>>0) 
/* here in MUL(x,y) 
   increasing 8 -->decreases range, but increases precision
   decreasing 8 -->decreases precision, but increases range
*/

/* #define DIV(x,y) (((long long)(x)<<16/(y)) //not good for embedded applications */
#define DIV(x,y) ((x)<<7/(y)<<9) 

int main(void){

int f = DoubleToFixed(7.7896);
int g = IntToFixed(7);

printf("the fractional part is %f\n",(FixedToDouble(f))); fflush(stdout);
printf("the fractional part is %f\n",(FixedToInt(g))); fflush(stdout);
f<<=1; //multiply by 2;
f>>=1; // divide by 2;


return 0;
}

