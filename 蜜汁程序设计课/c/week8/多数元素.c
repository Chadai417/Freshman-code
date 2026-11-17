#include <stdio.h>
#define V 13
#define N 3
int main(){
    char votes[V]={'A','A','A','C','C','B','B','C','C','C','B','C','C'};
    int counts[N]={};
    for(int i=0;i<V;i++)
    {
        if(votes[i]=='A')
        {
            counts[0]++;
        }
        if(votes[i]=='B')
        {
            counts[1]++;
        }
        else
        {
            counts[2]++;
        }
    }
    int flag=-1;
    for(int i=0;i<N;i++)
    {
        if(counts[i]>(V/2)){
            printf("%c",(65+i));
            flag=1;
        }
    }
    if(flag==-1){
        printf("%d",flag);
    }
    return 0;
}