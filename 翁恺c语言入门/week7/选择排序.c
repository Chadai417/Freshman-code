#include <stdio.h>
int max(int a[],int len)
{
    int maxid=0;
    for(int i=0;i<len;i++)
    {
        if (a[i]>a[maxid])
        {
            maxid=i;
        }
    }
    return maxid;
}

int main(void)
{
    int a[]={18,29,1,23,98,67.35};
    int maxid=0;
    int len=sizeof(a)/sizeof(a[0]);
    int t=0;
    while(len>1)
    {
    maxid=max(a,len);
        t=a[maxid];
        a[maxid]=a[len-1];
        a[len-1]=t;
        len--;
    }
    for(int i=0;i<sizeof(a)/sizeof(a[0]);i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}