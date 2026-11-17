#include <stdio.h>
#define V 13
#define N 3
int main(){
    char votes[V]={'A','A','A','C','C','B','B','C','C','C','B','C','C'};
    char champion;
    int count=0;
    for(int i=0;i<V;i++)
    {
        if (champion!=votes[i])
        {
            if(count==0){
                champion=votes[i];
            }
            else{
                count--;
            }
        }
        if(champion==votes[i]){
            count++;
        }
    }
    printf("%c",champion);
    return 0;
}