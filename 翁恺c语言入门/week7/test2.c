#include <stdio.h>

int main(void)
{
    //int a[100][100]={{0},{0}};
    int n=4;
    //scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            //scanf("%d",&a[i][j]);
        }
    }
    int a[100][100]={{1,4,1,0},{7,8,6,7},{4,3,1,8},{1,6,2,9}};

    int maxidi[4];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if (a[i][j]>a[maxidi[i]][j])
            {
                maxidi[i]=j;
            }
        }
    }

    int ret=0;
    for(int i=0;i<n;i++)
    {
        ret=0;
        for(int j=0;j<n;j++)
        {
            if(a[i][maxidi[i]]>a[i][j])
            {
                ret=-1;
            }
        }
        if(ret==0)
        {
            printf("%d %d",i,maxidi[i]);
            break;
        }
    }
    return 0;
}