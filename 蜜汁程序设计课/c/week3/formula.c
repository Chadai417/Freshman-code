#include <stdio.h>
#include <math.h>

int main()
{
    int a=0,b=0,c=0;
    int delta=0;
    scanf("%d %d %d",&a,&b,&c);
    delta=b*b-4*a*c;
    if(delta>0)
    {
        float x1=(-b+sqrt(delta))/(2*a);
        float x2=(-b-sqrt(delta))/(2*a);
        printf("YES,x1=%.2f x2=%.2f\n",x1,x2);
    }
    else if(delta==0)
    {
        float x=-b/(2*a);
        printf("YES,x1=x2=%.2f\n",x);
    }
    else
    {
        printf("NO!\n");
    }
    return 0;
}