//
//  main.c
//  1
//
//  Created by 崔士强 on 2022/12/1.
//
#include <stdlib.h>
#include <stdio.h>
int n,i;
int input(int *p){
    printf("输入数据，以空格分隔\n");
    for (i=0; i<n; i++) {
        scanf("%d",p+i);
    }
    return 0;
}
int output(int *p){
    for (i=0; i<n; i++) {
        printf("%d\t",*(p+i));
    }
    return 0;
}
int main() {
    int *p;
    printf("输入数组长度：");
    scanf("%d",&n);
    p=(int *)malloc(n*sizeof(int));
    if(p == NULL)
        printf("空间不足");
    input(p);
    output(p);
    return 0;
}
