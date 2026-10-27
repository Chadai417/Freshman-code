#include <stdio.h>
int main()
{
    int a0=0,a1=0,b0=0,b1=0;
    int sum0=0,sum1=0,carry0=0,carry1=0;
    int output=0;
    scanf("%d %d %d %d",&a0,&a1,&b0,&b1);
    sum0=a0^b0;
    sum1=a1^b1;
    carry0=a0&&b0;
    carry1=a1&&b1;
    output=sum0+(sum1+carry0)*10+carry1*100;
    printf("%d%d+%d%d=%d",a0,a1,b0,b1,output);
    return 0;
}