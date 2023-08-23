//rules.c -- precedence test
#include <stdio.h>

int main(){
    int top,score;

    top = score = -(2+5)*6 + (4+3*(2+3));
    printf("top = %d,score = %d\n",top,score);

    printf("\n----------------------------------------------------\n");

//sizeof.c -- use sizeof operator
//uses c99 %z modifier -- try %u or %lu if you lack %zd
    int n = 0 ;
    size_t intsize;

    intsize = sizeof(int);
    printf("n = %d,n has %zd bytes;all ints have %zd bytes.\n",n,sizeof n ,intsize);

    printf("\n----------------------------------------------------\n");


return 0;
}
