#include <stdio.h>
int sum(int a,int b){
    int sum=0;
    for(int i=a;i<=b;i++){
        sum+=i;
    }
    return sum;
}
int main(){
    int a=0,b=0;
    scanf("%d %d",&a,&b);
    printf("%d\n",sum(a,b));
    return 0;

}