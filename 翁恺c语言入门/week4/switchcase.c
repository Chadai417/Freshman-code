#include <stdio.h>
int main()
{
    int type;
    //type=1;
    scanf("%d",&type);
    switch(type)
    {
        case 1:
        printf("你好");
        break;
        case 2:
        printf("再见");
        break;
    }
    return 0;
}