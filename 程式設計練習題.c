#include <stdio.h>
double cube(double c);
double Temperature(double f);
int main(){
    //1.請撰寫一程式，將以分鐘為單位，轉成以小時和分鐘來表示。
    // 請使用#define or const來產生表示60的符號常數;並使用while迴圈
    // 讓使用者可以反覆的輸入新的數值，直到輸入的數值等於零或是小於零。
 /*   const int mts = 60;
    int input,min,sec;
    printf("please enter the time in seconds.\n");
    scanf("%d",&input);
    while(input > 0){
        min = input/mts;
        sec = input%mts;
        printf("The %d seconds equal %d minute(s) and %d second(s)\n",
        input,min,sec);
        printf("Please enter the new values of time in seconds.\n");
        scanf("%d",&input);
    }

    //請撰寫一個程式，要求輸入一個整數，並輸出從(包含)數值本身到數值加上
    //10(包含)的整數。請以空白符號、跳格符號或換行符號來分隔每個輸出值。
    int i,end;
    printf("Please enter the integer.\n");
    scanf("%d",&i);
    end = i+10;
    while(i <= end){
        printf("%d ",i);
        i++;
    }
    //3.請撰寫一程式，要求使用者輸入天數，並將此數值轉換成幾星期又幾天。
    // 例如:將18天轉換成2個星期又4天，並用以下的形式輸出其結果:
    //18 days are 2 weeks,4 days.
    //此外，使用while回圈，讓使用者可以反覆的輸入新的天數，並在使用者輸入
    //非正的數值時，停止迴圈動作。

    int totalday,week,day;
    printf("Please enter the number of days.\n");
    scanf("%d",&totalday);
    while(totalday > 0){
        week = totalday/7;
        day = totalday%7;
        printf("%d days are %d weeks,%d days.\n",totalday,week,day);
        printf("Please enter the number of days.\n");
        scanf("%d",&totalday);
    }

    //4.請撰寫一程式，要求使用者輸入以公分為單位的的身高，
    //  然後顯示此身高有多少英尺和多少因吋。
    //程式可讓使用者可以反覆輸入新的身高，
    //直到輸入的數值等於或是小於0。
    // 1 foot = 12 inches,1 inch = 2.54centermeter
    double centermeter,inch,tinch;
    int feet;
    printf("Enter a height in centermeters:");
    scanf("%lf",&centermeter);
    while(centermeter > 0){
        tinch = (centermeter / 2.54);
        feet = tinch/12;
        inch = tinch - feet*12;
        printf("%.1f cm = %d feet,%.1f inches\n",centermeter,feet,inch);
        printf("Enter a height in centermeters:(<= 0 to quit):");
        scanf("%lf",&centermeter);
    }
    printf("bye!");

    printf("\n----------------------------------------------------------\n");

    //5.原本的addemup.c程式(範例5.13)可找出1到20之整數的和。
    //請將此程式修改為具有互動功能的形式，
    //也就是說，讓使用者輸入最後要加到哪個整數為止
    int end;
    printf("Please enter the end of summed.\n");
    scanf("%d",&end);
    printf("1 plus to %d is %d \n",end,(1+end)*end/2);

    printf("\n----------------------------------------------------------\n");

    //6.請將上一題的程式再做修改，讓他計算這些整數的平方總和
    int max,sum = 0,i= 1;
    printf("Please enter the maximum value.\n");
    scanf("%d",&max);
    while(i <= max){
        sum += i*i;
        i++;
    }
    printf("sum of squares is %d.",sum);

    int sum1 = max*(max + 1)*(2*max+1)/6;

    if(sum ==  sum1){   //check
        printf("sucess!\n");

    }
    else{
        printf("fail\n");
    }

    //請撰寫一程式，輸入一個double型態的數字，並輸出此數字的三次方。
    //請撰寫出一個用來計算三次方，並輸出計算結果的函數，並在main()裡，
    //將輸入的值傳給此函數。
    double c;
    printf("Please enter the number you want to cube.");
    scanf("%lf",&c);
    printf("%lf",cube(c));
    printf("\n\n");



    //8.請撰寫一程式，顯示運用模數(modulus)的運算的結果
    //  使用者先輸入一整數當作模數運算的第二個運算元，他將不會改變
    //  接著使用者輸入第一個運算元，然後計算其運算的結果。
    //  程式將繼續進行，直到輸入的數值等於或小於0為止。

    int a,b;
    printf("This program computes moduli.\n");
    printf("Enter an integer to serve as  the second operand:");
    scanf("%d",&b);
    printf("Now enter the first operand:");
    scanf("%d",&a);
    while(a > 0){
        printf("%d %% %d is %d\n",a,b,a%b);
        printf("Enter next number for first operand (<= 0 quit):");
        scanf("%d",&a);
    }
    printf("Done!");*/

    //請撰寫一程式，讓使用者輸入華氏溫度，程式已double型態來看待此數值
    //，並將她一參數的方式傳給你所設計的Temperature()函式，
    //這個函式必須能夠計算出相同溫度的攝氏溫度和克爾文溫度，
    //並將三個溫度都標示出來，且精確度到小數點後的第二位。
    //Temperature()函式必須使用const來產生表示轉換公式裡的三個符號常數，
    //而main()函數避暑用一個迴圈，允許使用者反覆地輸入新溫度。
    //當輸入的值為q，或其他非數字的數值，則停止回簽繼續執行。
    //使用scanf()函數時，將回傳讀取的個數，若讀取一個數字，則回傳1，
    //若輸入q，則回傳將不是1。我們必須利用==相等運算子，
    //來比較scanf()函數的回傳值
    double f;

    printf("please enter the temperature.(F):");
    while(scanf("%lf",&f) == 1 ){
        printf("Celsius = %.2lf,Kevin = %.2lf\n",Temperature(f),Temperature(f) + 273.16);
        printf("Please enter next temperature.");
    }

return 0;
}

double cube(double c){
    double cube;
    cube = c*c*c;
    return cube;
}

double Temperature(double f){
    const double a = 5.0/9.0,b = 32.0;
    double celsius;
    celsius = a * (f - b);
    return celsius;
}
