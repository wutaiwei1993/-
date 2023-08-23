#include <stdio.h>
#define ADJUST 7.31
int main(){
    //shoes1.c-- convert a shoe size to inches
    const double SCALE  = 0.333;
    double shoe,foot;

    shoe = 9.0;
    foot = SCALE *  shoe + ADJUST;
    printf("Shoe size (men's)   foot length\n");
    printf("%10.1f %15.2f inches\n",shoe,foot);
    printf("\n-----------------------------------------\n");

    //shoes2.c -- calculate foot lengths for several sizes
    shoe = 3.0;
    while(shoe++ < 18.5){ //starting the while loop
                        //start of block
    foot = SCALE * shoe + ADJUST;
    printf("%10.1f %15.2 inches\n",shoe,foot);
   // shoe = shoe +1.0;
    }       //end of  block
    printf("If the shoe fits,wear it.\n");

return 0;
}
