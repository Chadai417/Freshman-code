#include <stdio.h>

int search(int key,int a[],int len)
{
    int ret=-1;
    for(int i=0;i<len;i++)
    {
        if(key==a[i])
        {
            ret=i;
            break;
        }
    }
    return ret;
}

int main(void)
{
    int a[]={1,3,4,6,7,8};
    int ret=search(3,a,sizeof(a)/sizeof(a[0]));
    printf("Index of the element is: %d\n", ret);
    return 0;
}