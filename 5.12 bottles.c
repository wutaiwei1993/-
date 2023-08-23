#include <stdio.h>
#define MAX 100
int main(){
    int count = MAX +1;
    while(--count > 0){
        printf("%3d bottles of spring water on wall,"
        "%3d bottles of spring water!\n",count,count);
        printf("pick one down and pass it around\n");
        printf("%3d bottles of spring water!\n\n",count - 1);
    }

return 0;
}
