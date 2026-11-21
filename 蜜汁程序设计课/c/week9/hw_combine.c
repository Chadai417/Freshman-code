#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *a;
    int *b;
    int m=0,n=0;
    //输入两个动态数组
    scanf("%d",&m);
    a=(int*)malloc(m*sizeof(int));
    for(int i=0;i<m;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&n);
    b=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        scanf("%d",&b[i]);
    }

    //创建一个输出数组
    int *output;
    int flag=1;
    int index=0;
    output=(int*)malloc((m+n)*sizeof(int));
    //初始化数组
    for(int i=0;i<m+n;i++){
        output[i]=-1;
    }
    for(int i=0;i<m;i++){
        flag=1;
        for(int j=0;j<m+n;j++){
            if(a[i]==output[j]){
                flag=0;//查重
            }
        }
        if(flag==1){
            output[index]=a[i];
            index++;
        }
    }
    for(int i=0;i<n;i++){
        flag=1;
        for(int j=0;j<m+n;j++){
            if(b[i]==output[j]){
                flag=0;//查重
            }
        }
        if(flag==1){
            output[index]=b[i];
            index++;
        }
    }
    //输出
    printf("合并去重后的数组：");
    for(int i=0;i<m+n;i++){
        if(output[i]!=-1){
            printf("%d ",output[i]);
        }
    }
    return 0;
}