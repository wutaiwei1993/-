//addemup.c -- five kinds of statements
#include <stdio.h>
int main(){
    int count,sum;  //declaration statement(�ŧi�ԭz)
    count = 0;       //assignment statement(���t�ԭz,���w�ԭz)
    sum = 0;        //ditto(�P�W)
    while(count++ < 20){    //while
        sum = sum + count;  //statement
    }
    printf("sum = %d\n",sum);//function statement)(��Ʊԭz)

return 0;           //return statement
}
