#include <stdio.h>
int main()
{
    const int amount=100;
    int price=0;

    printf("请输入热电塔的价格：");
    scanf("%d",&price);

    int change=amount-price;
    printf("找您%d元",change);
    return 0;
    
    
}