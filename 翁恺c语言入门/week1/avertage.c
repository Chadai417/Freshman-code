#include <stdio.h>
int main()
{
    int a,b;
    double c;
    printf("请输入两个整数：");
    scanf("%d %d",&a,&b);
    c=(a+b)/2.0;
    printf("%d和%d的平均数是%lf",a,b,c);
    return 0;
}