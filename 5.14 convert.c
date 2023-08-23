//convert.c -- automatic type conversions
#include <stdio.h>
int main(){
    char ch;
    int i;
    float fl;

    fl = i = ch = 'C';
    printf("ch = %c,i = %d,fl = %2.2f\n",ch,i,fl);
    ch++;
    i = fl + 2 * ch;
    fl = 2.0 *ch +i;
    printf("ch = %c,i = %d,fl = %2.2f\n",ch,i,fl);
    ch = 1107;
    printf("ch = %c\n",ch);
    ch = 80.89;
    printf("now ch = %c\n",ch);


return 0;
}
