#include<stdio.h>
    struct Time
    {
        int hour;
        int min;
        int sec;
    };
struct Time startTime,stopTime,diff;
int main()
{
    scanf("%d%d%d",&startTime.hour,&startTime.min,&startTime.sec);
    scanf("%d%d%d",&stopTime.hour,&stopTime.min,&stopTime.sec);
    if(startTime.sec>stopTime.sec)
    {
        --startTime.min;
        startTime.sec+=60;
    }
    diff.sec=startTime.sec-stopTime.sec;
    if(startTime.min>stopTime.min)
    {
        --startTime.hour;
        startTime.min+=60;
    }
    diff.min=startTime.min-stopTime.min;
    if(startTime.hour<stopTime.hour)
    {
        diff.hour=stopTime.hour-startTime.hour;
    }
    printf("%d %d %d",diff.hour,diff.min,diff.sec);
}
