//running.c -- A useful program for runners
#include <stdio.h>
const int S_PER_M = 60;     //seconds in a minute
const int S_PER_H = 3600;   //seconds in a hour
const double M_PER_K = 0.62137;//miles in a  kilometer

int main(){
    double distk,distm; //distance run in km and in miles
    double rate;        //average speed in mph
    int min,sec;        //minutes and seconds of running time
    int time;           //running time in seconds only
    double mtime;       //time in seconds for one mile
    int mmin,msec;      //minute and seconds for one mile

    printf("This program converts your time for a metric(д╜ию) race.\n");
    printf("to a time for running amile and to your average\n");
    printf("speed in miles per hour.\n");
    printf("Please enter,in kilometers,the distance run.\n");
    scanf("%lf",&distk);
    printf("Next enter the time in minutes and seconds.\n");
//  scanf("%d%d",&min,&sec);
//  printf("%d %d",min,sec);
    printf("Begin by entering the minutes.\n");
    scanf("%d",&min);
    printf("Now enter the seconds.\n");
    scanf("%d",&sec);
//  converts time to pure seconds
    time = min *S_PER_M + sec;
//  convers kilometer to miles
    distm = distk * M_PER_K;
//  mph = miles per sec * seconds per hour
    rate = distm/time * S_PER_H;
//  time/distance = time /distm
    mtime = (double)time / distm; //we declared the type of variable "time" is integer.
    mmin = (int) mtime /S_PER_M;    //find whole minutes
    msec = (int) mtime % S_PER_M;   //find remaining seconds
    printf("You ran %1.2f kilometers(%1.2f miles) in %d minutes %d seconds.\n",
    distk,distm,min,sec);
    printf("The pace corresponds to running a mile in %d min,",mmin);
    printf("%d sec.\nYour average speed was %1.2f mph.\n",msec,rate);

return 0;
}
