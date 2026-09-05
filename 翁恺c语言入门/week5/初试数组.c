#include <stdio.h>
int main(){
    int x=0;
    int sum=0,cum=0;
    int number[100];
    scanf("%d",&x);
    while(x!=-1){
        number[cum]=x;
        cum++;
        sum+=x;
        scanf("%d",&x);
    }
    int i;
    for(i=0;i<cum;i++){
        if (number[i]>sum/cum){
            printf("%d\n",number[i]);
        }
    }
    return 0;
}