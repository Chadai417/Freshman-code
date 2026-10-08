#include <stdio.h>

int main() {
    char february;
    int days;
    int name[100];
    //scanf("%s %c", name, &february);

    char i,j;
    printf("i:");
    scanf("%c",&i);
    fflush(stdin); //清空输入缓冲区
    printf("i=%c\n",i);
    printf("j:");
    scanf("%c",&j);
    printf("j=%c\n",j);
    //回车：一键两字节\r \n
    return 0;
}