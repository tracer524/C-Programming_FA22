//
//  5-2.c
//  5-2
//
//  Created by 崔士强 on 2022/11/3.
//

#include <stdio.h>
int main(){
    int a[10],b[5],i,temp,j;
    printf("请输入5个整数放入数组a，以空格分隔\n");
    for (i=0; i<5; i++){
        scanf("%d",&a[i]);
    }
    printf("请输入5个整数放入数组b，以空格分隔\n");
    for (i=0; i<5; i++){
        scanf("%d",&b[i]);
    }
    for (;i!=0;){
        i=0;
        for (j=0; j<4; j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                i++;
            }
        }
    }
    for (i=0; i<5; i++){
        for (j=i+5; j>0; j--) {
            if(b[i]<a[j-1]){
                a[j]=a[j-1];
            }
            else
                break;
        }
        a[j]=b[i];
    }
    for (i=0; i<10; i++) {
        printf("%d\t",a[i]);
    }
    printf("\n");
    for (i=0; i<5; i++) {
        printf("%d\t",b[i]);
    }
    return 0;
}
