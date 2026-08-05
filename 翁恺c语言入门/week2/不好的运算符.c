#include <stdio.h>
int main()
{
    int a=5;
    int b;
    int c=(b=a+2)-(a=2);
    printf("%d",c);
    return 0;
}