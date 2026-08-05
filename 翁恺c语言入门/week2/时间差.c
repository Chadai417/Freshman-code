#include <stdio.h>
int main()
{
    int hour1,minute1;
    int hour2,minute2;

    scanf("%d %d",&hour1,&minute1);
    scanf("%d %d",&hour2,&minute2);

    int time1 = hour1 *60 + minute1;
    int time2=hour2*60+minute2;
    int time=time2-time1;
    printf("时间差为%d小时%d分钟",time/60,time%60);
    return 0;
}