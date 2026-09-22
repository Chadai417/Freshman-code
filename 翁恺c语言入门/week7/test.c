#include <stdio.h>
int main(void)
{
    int a[100]={0};
    int b[100]={0};
    int x,y;
    int counta=0,countb=0;

    scanf("%d %d",&x,&y);
    counta=x;
    a[x]=y;
    while(x!=0)
    {
        scanf("%d %d",&x,&y);
        a[x]=y;
        //printf("%d %d %d\n",x,y,counta);
    };

    scanf("%d %d",&x,&y);
    countb=x;
    b[x]=y;
    while(x!=0)
    {
        scanf("%d %d",&x,&y);
        b[x]=y;
    };

    int c[100];
    int countc=0;
    if (counta>=countb)
    {
        countc=counta;
    }else{
        countc=countb;
    }

    for(int i=countc;i>0;i--)
    {
        c[i]=a[i]+b[i];
        if (c[i]!=0)
        {
            printf("%dx%d+",c[i],i);
        }
    }
    c[0]=a[0]+b[0];
    printf("%d",c[0]);
    return 0;
}