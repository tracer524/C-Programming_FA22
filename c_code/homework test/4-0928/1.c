//
//  1.c
//  1
//
//  Created by 崔士强 on 2022/10/12.
//

#include <stdio.h>
int main(){
    int data[5];
    int max,min,i;
    for (i=0; i<5; i++) {
        printf("请输入第%d个数据\n",i+1);
        scanf("%d",&data[i]);
        while (data[i]<0) {
            printf("请重新输入第%d个数据\n",i+1);
            scanf("%d",&data[i]);
        }
    }
    max=data[0];
    min=data[0];
    for (i=1; i<5; i++) {
        if(data[i]>max){
            max=data[i];
        }
        if(data[i]<min){
            min=data[i];
        }
    }
    printf("最大值是%d\n最小值是%d\n",max,min);
    return 0;
}
