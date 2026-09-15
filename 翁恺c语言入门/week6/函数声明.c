#include <stdio.h>
void sum(int,int);
int main(){
    sum(1,30);
    return 0;
}

void sum(int a,int b){
    int sum=0;
    for(int i=a;i<=b;i++){
        sum+=i;
    }
    printf("%d\n",sum);
}