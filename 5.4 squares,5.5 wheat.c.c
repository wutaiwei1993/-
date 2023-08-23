#include <stdio.h>
#define SQUARES 64
int main(){
    //squares.c -- prouduces a table of first 20 squares
    int num = 1;

    while(num<21){
        printf("%4d %6d\n",num,num*num);
        num = num +1;
    }
    printf("\n-------------------------------------------\n");
    //wheat.c -- exponentail growth
    const double CROP = 2E16; //world wheat prouduction in wheat grains
    double  current,total;
    int count=1;

    printf("square     grains     total     ");
    printf("   fraction of \n");
    printf("           added      grains    ");
    printf("   world total\n");
    total = current = 1;
    printf("%4d %13.2e %12.2e %12.2e\n",count,current,total,total/CROP);
    while(count < SQUARES){
        count = count +1;
        current = 2.0*current;      //double grains on next square
        total = current +total;
        printf("%4d %13.2e %12.2e %12.2e\n",count,current,total,total/CROP);
    }
    printf("That's all.\n");


return 0;
}
