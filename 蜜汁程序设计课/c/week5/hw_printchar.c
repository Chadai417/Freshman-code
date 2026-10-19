#include <stdio.h>
int main(){
    int line;
    printf("please input the line:(1-26)");
    scanf("%d", &line);
    if(line < 1 || line > 26){
        printf("input error");
        return 0;
    }
    else{
        for (int i = 1; i <= line; i++) {
            for(int k = 1; k <= line - i; k++) {
                    printf(" ");
                }
            for (int j = 1; j <= i*2-1; j++) {
                printf("%c", 64 + i);
            }
            printf("\n");
        }
    }
    return 0;
}