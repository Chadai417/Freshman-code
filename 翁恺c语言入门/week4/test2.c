#include <stdio.h>
int main()
{
    int bin=0,dec=0,number=1,b=1;
    scanf("%d",&dec);
    //dec=2;
    while(dec>0)
    {
        if(dec%2==number%2)
        {
            bin+=b;
        }
        b*=2;
        number++;
        dec/=10;
    }
    printf("特征数: %d\n", bin);
    return 0;
}