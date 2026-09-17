#include <stdio.h>
int search(int a[],int length,int x);
int main(void)
{
    int a[13]={0,1,2,3,4,5,6,7,8,9,10,11,12};
    int x=0;
    int s=0;
    scanf("%d",&x);
    s=search(a,sizeof(a)/sizeof(a[0]),x);
    
    if (s==-1){
        printf("Not found\n");
    }
    else{
        printf("在第%d个位置\n",s);
    }
    return 0;
}

int search(int a[],int length,int x)
{
    int ret=-1;
    for (int i=0;i<length;i++)
    {
        if(a[i]==x)
        {
            ret=i;
            break;
        }
    }
    return ret;
}