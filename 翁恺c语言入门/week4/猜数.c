#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int number=rand();
    int count=0;
    int a=0;
    number%=100;
    do{
        scanf("%d",&a);
        if(a>number)
        {
            printf("大了\n");
        }
        else
        {
            printf("小了\n");
        }
        count++;
    }while(a!=number);
    printf("你花了%d次猜对了！",count);
    return 0;
}