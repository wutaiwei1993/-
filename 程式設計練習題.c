#include <stdio.h>
double cube(double c);
double Temperature(double f);
int main(){
    //1.�м��g�@�{���A�N�H���������A�ন�H�p�ɩM�����Ӫ�ܡC
    // �Шϥ�#define or const�Ӳ��ͪ��60���Ÿ��`��;�èϥ�while�j��
    // ���ϥΪ̥i�H���Ъ���J�s���ƭȡA�����J���ƭȵ���s�άO�p��s�C
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

    //�м��g�@�ӵ{���A�n�D��J�@�Ӿ�ơA�ÿ�X�q(�]�t)�ƭȥ�����ƭȥ[�W
    //10(�]�t)����ơC�ХH�ťղŸ��B����Ÿ��δ���Ÿ��Ӥ��j�C�ӿ�X�ȡC
    int i,end;
    printf("Please enter the integer.\n");
    scanf("%d",&i);
    end = i+10;
    while(i <= end){
        printf("%d ",i);
        i++;
    }
    //3.�м��g�@�{���A�n�D�ϥΪ̿�J�ѼơA�ñN���ƭ��ഫ���X�P���S�X�ѡC
    // �Ҧp:�N18���ഫ��2�ӬP���S4�ѡA�åΥH�U���Φ���X�䵲�G:
    //18 days are 2 weeks,4 days.
    //���~�A�ϥ�while�^��A���ϥΪ̥i�H���Ъ���J�s���ѼơA�æb�ϥΪ̿�J
    //�D�����ƭȮɡA����j��ʧ@�C

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

    //4.�м��g�@�{���A�n�D�ϥΪ̿�J�H��������쪺�������A
    //  �M����ܦ��������h�֭^�ةM�h�֦]�T�C
    //�{���i���ϥΪ̥i�H���п�J�s�������A
    //�����J���ƭȵ���άO�p��0�C
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

    //5.�쥻��addemup.c�{��(�d��5.13)�i��X1��20����ƪ��M�C
    //�бN���{���קאּ�㦳���ʥ\�઺�Φ��A
    //�]�N�O���A���ϥΪ̿�J�̫�n�[����Ӿ�Ƭ���
    int end;
    printf("Please enter the end of summed.\n");
    scanf("%d",&end);
    printf("1 plus to %d is %d \n",end,(1+end)*end/2);

    printf("\n----------------------------------------------------------\n");

    //6.�бN�W�@�D���{���A���ק�A���L�p��o�Ǿ�ƪ������`�M
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

    //�м��g�@�{���A��J�@��double���A���Ʀr�A�ÿ�X���Ʀr���T����C
    //�м��g�X�@�ӥΨӭp��T����A�ÿ�X�p�⵲�G����ơA�æbmain()�̡A
    //�N��J���ȶǵ�����ơC
    double c;
    printf("Please enter the number you want to cube.");
    scanf("%lf",&c);
    printf("%lf",cube(c));
    printf("\n\n");



    //8.�м��g�@�{���A��ܹB�μҼ�(modulus)���B�⪺���G
    //  �ϥΪ̥���J�@��Ʒ�@�ҼƹB�⪺�ĤG�ӹB�⤸�A�L�N���|����
    //  ���ۨϥΪ̿�J�Ĥ@�ӹB�⤸�A�M��p���B�⪺���G�C
    //  �{���N�~��i��A�����J���ƭȵ���Τp��0����C

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

    //�м��g�@�{���A���ϥΪ̿�J�ؤ�ūסA�{���wdouble���A�Ӭݫݦ��ƭ�
    //�A�ñN�o�@�Ѽƪ��覡�ǵ��A�ҳ]�p��Temperature()�禡�A
    //�o�Ө禡��������p��X�ۦP�ūת����ūשM�J����ūסA
    //�ñN�T�ӷū׳��ХܥX�ӡA�B��T�ר�p���I�᪺�ĤG��C
    //Temperature()�禡�����ϥ�const�Ӳ��ͪ���ഫ�����̪��T�ӲŸ��`�ơA
    //��main()����״��Τ@�Ӱj��A���\�ϥΪ̤��Цa��J�s�ūסC
    //���J���Ȭ�q�A�Ψ�L�D�Ʀr���ƭȡA�h����^ñ�~�����C
    //�ϥ�scanf()��ƮɡA�N�^��Ū�����ӼơA�YŪ���@�ӼƦr�A�h�^��1�A
    //�Y��Jq�A�h�^�ǱN���O1�C�ڭ̥����Q��==�۵��B��l�A
    //�Ӥ��scanf()��ƪ��^�ǭ�
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
