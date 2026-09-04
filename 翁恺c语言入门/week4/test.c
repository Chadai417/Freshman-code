#include <stdio.h>
int main()
{
    int number=0;
    int odd=-1,even=0;
    do{
        scanf("%d",&number);
        if(number%2==0)
            even++;
        else
            odd++;
    }while(number>=0);
    printf("Odd numbers: %d\n", odd);
    printf("Even numbers: %d\n", even);
    return 0; 
}