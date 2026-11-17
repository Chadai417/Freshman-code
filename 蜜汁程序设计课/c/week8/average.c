#include <stdio.h>
#define SIZE 10

int main(){
    int numbers[SIZE];
    int sum=0;
    for(int i=0;i<SIZE;i++){
        scanf("%d",&numbers[i]);
        sum+=numbers[i];
    }
    int average=0;
    average=sum/SIZE;
    printf("%d",average);
    return 0;
}