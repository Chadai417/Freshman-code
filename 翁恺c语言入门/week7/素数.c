#include <stdio.h>
#include <math.h>

int isprime(int x,int knowprimes[],int count);

int main(void)
{
    const int number=100;
    int prime[100];
    prime[0]=2;
    int count=0;
    for(int i=2;count<number;i++)
    {
        if(isprime(i,prime,count)!=-1)
        {
            prime[count++]=i;
            //printf("%d ",i);
        }
    }
    int x=0;
    scanf("%d",&x);
    if(isprime(x,prime,count)!=-1)
    {
        printf("%d is prime\n",x);
    }
    else
    {
        printf("%d is not prime\n",x);
    }
    return 0;
}

int isprime(int x,int knowprimes[],int count)
{
    for(count=0;knowprimes[count]<=sqrt(x);count++)
    {
        if(x%knowprimes[count]==0){
            count=-1;
            break;
        }
    }
    return count;
}