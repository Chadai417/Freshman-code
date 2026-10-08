#include <stdio.h>
#include <stdbool.h>

void main()
{
    int year=2008;
    int a=year%400==0 || (year %4==0)&&(year%100!=0);
    printf("a=%d\n",a);
    bool b = year%400==0 || (year %4==0)&&(year%100!=0);
    printf("b=%d\n",b);
}