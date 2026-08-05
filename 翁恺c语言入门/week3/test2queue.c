#include <stdio.h>
int main()
{
    int number=0;
    int dao=1;
    scanf("%d",&number);
    while(dao<=number)
    {
        printf("%d ",dao);
        dao+=2;
    }
    return 0;
}