#include <stdio.h>
int main()
{
    double inch;
    double foot;
    double metre;
    
    printf("请输入英尺和英寸：");
    scanf("%lf %lf",&foot,&inch);
    metre=((foot+inch/12)*0.3048);

    printf("身高是%lf米",metre);
    return 0;
}