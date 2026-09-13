#include <stdio.h>
int main()
{
    const char *py[10]={"ling\0","yi\0","er\0","san\0","si\0","wu\0","liu\0","qi\0","ba\0","jiu\0"};

    int number=0;
    //number=-123;
    scanf("%d",&number);
    //负数处理
    if (number<0)
    {
        printf("fu ");
        number=-number;
    }
    //数位数
   int digit=1;
    int n=number;
    n /=10;
    while(n>0)
    {
        digit*=10;
        n /=10;
    }
    //输出拼音
    n=number;
    int t=0;
    while(digit>0)
    {
        t=n%digit;
        n/=digit;
        printf("%s ",py[n]);
        n=t;
        digit/=10;
    }
    return 0;
}