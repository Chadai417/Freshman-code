#include <stdio.h>
int main()
{
    int num=0;
    scanf("%d",&num);
    int matrix[num][num];
    int inum[num];
    //printf("%d",inum[0]);
    for(int i=0;i<num;i++)
    {
        for(int j=0;j<num;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }

    for(int i=0;i<num;i++)
    {
        for(int j=0;j<num;j++)
        {
            inum[i]=0;
            if (matrix[i][j]<matrix[i][inum[i]])
            {
                inum[i]=j;
            }
        }
    }
    int ret=0;
    for(int i=0;i<num;i++)
    {

        for(int j=0;j<num;j++)
        {
            int ret=0;
            if(matrix[i][inum[i]]<matrix[j][inum[i]])
            {
                ret=-1;
            }
        }
        if(ret==0)
        {
            printf("%d %d",i,inum[i]);
            
            break;
        }
    }
    if(ret==-1)
    {
        printf("no");
    }
    return 0;
}