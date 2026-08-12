#include <stdio.h>
int main()
{
    int number;
    int rebmun=0;
    int digit;
    scanf("%d",&number);
    //number=123456;
    while(number>0)
    {
        digit=number%10;
        rebmun=rebmun*10+digit;
        number/=10;
    }
    printf("%d\n", rebmun);
    return 0;
}