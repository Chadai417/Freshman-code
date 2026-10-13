#include <stdio.h>
int main()
{
    int chicken=0, rabbit=0;
    int head=35,foot=94;
    for(chicken=0;chicken<=head;chicken++)
    {
        rabbit=head-chicken;
        if(chicken*2+rabbit*4==foot)
        {
            printf("chicken=%d,rabbit=%d\n",chicken,rabbit);
        }
    }
    return 0;
}