#include <stdio.h>
int main()
{
    int book=0;
    int MINOR=3;
    printf("请输入您今年读过的书本数：");
    scanf("%d",&book);
    printf("您今年已经读了%d本书了\n",book);
    if (book>=MINOR)
        printf("您的阅读习惯真好！");
    else
        printf("您距离目标还差%d本书,",MINOR-book);
    printf("书是人类进步的阶梯，请您继续读下去！");
    return 0;
}