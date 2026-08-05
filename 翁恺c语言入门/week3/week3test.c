#include <stdio.h>
int main(){

    int bjt;
    int utc;
    scanf("%d",&bjt);
    utc=bjt-800;
    if( utc<0){
        utc+=2400;
    }
    printf("UTC时间是：%d\n", utc);
    return 0;
}