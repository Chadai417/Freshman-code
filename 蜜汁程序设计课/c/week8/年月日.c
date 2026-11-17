#include <stdio.h>
int main(){
    int year,month,date;
    int std_days[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int days=0;
    scanf("%d %d %d",&year,&month,&date);
    for(int i=0;i<month-1;i++){
        days+=std_days[i];
    }
    if(((year%4==0 && year%100!=0)||(year%400==0))&&(month>2)){
        days++;
    }
    days+=date;
    printf("%d",days);
    return 0;
}