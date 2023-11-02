//
//  main.c
//  7_3
//
//  Created by 崔士强 on 2022/11/17.
//

#include <stdio.h>
int b[32],i;
int bin(int a){
    for (i=0; a!=0; i++) {
        b[i]=a%2;
        a=(a-b[i])/2;
    }
    for (i--; i>=0; i--) {
        printf("%d",b[i]);
    }
    printf("\n");
    return 0;
}
int oct(int a){
    for (i=0; a!=0; i++) {
        b[i]=a%8;
        a=(a-b[i])/8;
    }
    for (i--; i>=0; i--) {
        printf("%d",b[i]);
    }
    printf("\n");
    return 0;
}
int hex(int a){
    for (i=0; a!=0; i++) {
        b[i]=a%16;
        a=(a-b[i])/16;
    }
    for (i--; i>=0; i--) {
        switch (b[i]) {
            case 10:
                printf("A");
                break;
            case 11:
                printf("B");
                break;
            case 12:
                printf("C");
                break;
            case 13:
                printf("D");
                break;
            case 14:
                printf("E");
                break;
            case 15:
                printf("F");
                break;
            default:
                printf("%d",b[i]);
                break;
        }
    }
    printf("\n");
    return 0;
}
int main(){
    int a,b;
    printf("请输入一个十进制数：");
    scanf("%d",&a);
a:  printf("请输入要转换的进制（2或8或16）：");
    scanf("%d",&b);
    switch (b) {
        case 2:
            bin(a);
            break;
        case 8:
            oct(a);
            break;
        case 16:
            hex(a);
            break;
        default:
            printf("无效输入\n");
            goto a;
    }
    return 0;
}
