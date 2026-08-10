#include <stdio.h>
int main()
{
    int n;
    int number;
    scanf("%d",&n);
    //n=2;
    number=1;
    //for(int i=2;i<=n;i++)
    for(n;n>=1;n--)
    {
        number*=n;
    }
    printf("%d\n",number);
}