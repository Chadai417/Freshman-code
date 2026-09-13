#include <stdio.h>
int main(){
    int n=0,m=0;
    scanf("%d %d",&n,&m);
    int zhishu[200];
    int count=1;
    int sum=0;
    for(int i=2;i<=200;i++){
        int j;
        for(j=2;j<=i;j++){
            if(i%j==0){
                break;
            }
        }
        if(j==i){
            zhishu[count]=i;
            count++;
        }
    }
    for(int a=n;a<=m;a++){
        sum+=zhishu[a];
    }
    printf("%d\n",sum);
    return 0;
}