#include <stdio.h>
int main (){
    //add_one.c -- incremanting :prefix and postfix
    int ultra = 0,super = 0;

    while(super <5){
        super ++;
        ++ultra;
        printf("super = %d,ultra = %d\n",super,ultra);
    }

    printf("\n---------------------------------------------\n");

    //post_pre.c -- postfix vs prefix
    int a =1,b = 1;
    int a_post ,pre_b;
    a_post = a++;   //value of a++ during assigment phase
    pre_b = ++b;
    printf("a  a_post   b   pre_b\n");
    printf("%d %5d %5d %5d\n\n\n",a,a_post,b,pre_b);

    a = b = 1;
    int q1,q2;
    q1 = 2*++a;
    q2 = 2*b++;
    printf("q1 = %d,a = %d,b = %d,q2 = %d",q1,q2,a,b);

    printf("\n-----------------------------------------------\n");

return 0;
}
