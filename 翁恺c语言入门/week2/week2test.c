#include <stdio.h>
int main()
{
    int a,b,c;
    int n;
    int d;
    printf("请输入一个三位数：");
    scanf("%d",&n);;
    a=n/100;
    b=(n-a*100)/10;
    c=n%10;
    d=a;
    a=c;
    c=d;
    n=a*100+b*10+c;
    printf("%d\n",n);
    return 0;
}