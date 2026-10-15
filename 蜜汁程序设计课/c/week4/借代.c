#include <stdio.h>
int main()
{
    float loan=300000;
    float rate_year=0.03;
    float payPerMonth=3000.0;
    int month=0;
    while(loan>0&& loan> payPerMonth)
    {
        loan=loan-(payPerMonth-loan*(0.03/12));
        month++;
    }
    printf("the total months are %d\n",month+1);
    printf("the last month you should pay %f\n",loan);
    return 0;
}