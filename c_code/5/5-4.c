//
//  5-4.c
//  5-4
//
//  Created by 崔士强 on 2022/11/3.
//

#include <stdio.h>
int main(){
    int a[3][3],b[3][2],c[3][2],i,j,k,s=0,temp;
    for (i=0; i<3; i++) {
        for (j=0; j<3; j++) {
            printf("请输入矩阵a第%d行第%d列的数据",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    for (i=0; i<3; i++) {
        for (j=0; j<2; j++) {
            printf("请输入矩阵b第%d行第%d列的数据",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
    }
    for (i=0; i<3; i++) {
        for (j=0; j<i; j++) {
            temp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
        }
    }
    printf("a矩阵转置后的矩阵是\n");
    for (i=0; i<3; i++) {
        for (j=0; j<3; j++) {
            printf("%d\t",a[i][j]);
            if(j==2)
                printf("\n");
        }
    }
    for (i=0; i<3; i++) {
        for (j=0; j<2; j++) {
            for (k=0; k<3; k++) {
                s+=a[i][k]*b[k][j];
            }
            c[i][j]=s;
            s=0;
        }
    }
    printf("矩阵a、b相乘的结果是\n");
    for (i=0; i<3; i++) {
        for (j=0; j<2; j++) {
            printf("%d\t",c[i][j]);
            if(j==1)
                printf("\n");
        }
    }
    return 0;
}
