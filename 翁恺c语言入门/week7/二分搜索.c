#include <stdio.h>
int search(int key,int a[],int len)
{
    int ret=-1;
    int left=a[0],right=a[len-1];
    int mid=0;
    while(left<=right)
    {
        mid=(left+right)/2;
        if(a[mid]==key)
        {
            ret=mid;
            break;
        }
        else if(a[mid]<key)
        {
            left=mid+1;
        }
        else
        {
            right=mid-1;
        }
    }
    return ret;
}

int main(void)
{
    int a[]={1,3,4,6,7,8};
    int ret=search(5,a,sizeof(a)/sizeof(a[0]));
    printf("Index of the element is: %d\n", ret);
    return 0;
}