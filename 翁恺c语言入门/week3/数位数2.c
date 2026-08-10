#include <stdio.h>
int main()
{
    int x;
    int n=0;
    printf("请输入数字：");
    scanf("%d",&x);
    do
    {
        n++;
        x /=10;
    }while(x>0);
    printf("%d\n",n);
    return 0;
}