//addemup.c -- five kinds of statements
#include <stdio.h>
int main(){
    int count,sum;  //declaration statement(宣告敘述)
    count = 0;       //assignment statement(分配敘述,指定敘述)
    sum = 0;        //ditto(同上)
    while(count++ < 20){    //while
        sum = sum + count;  //statement
    }
    printf("sum = %d\n",sum);//function statement)(函數敘述)

return 0;           //return statement
}
