#include <stdio.h>
int divide(int,int);
int main(){
    int a=0,b=0;
    int digit=1;
    scanf("%d/%d",&a,&b);
    //输出整数部分
    printf("%d.",a/b);
    //输出小数部分
    for(digit=1;digit<=199;digit++){
        a=divide(a,b);
        if(a%b==0){
            break;
        }
    }
    return 0;
}

int divide(int a,int b){
    a*=10;
    printf("%d",a/b);
    a%=b;
    a*=10;
    return a;
}