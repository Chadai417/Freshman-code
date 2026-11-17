#include <stdio.h>
#define size 5

int main()
{
    int datas[size];
    for(int i=0;i<size;i++){
        datas[i]=i*2;
    }
    for(int i=0;i<size;i++){
        printf("data address is %p\n",&datas[i]);
    }
    return 0;
}