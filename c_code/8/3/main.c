//
//  main.c
//  3
//
//  Created by 崔士强 on 2022/11/24.
//

#include <stdio.h>
int trans(char *p){
    int e,n,dot,exp=0,i,neg;
    float base=0,j;
    for (n=0; (*(p+n))!='\0'; n++) {}
    for (e=0; ((*(p+e))!=69)&&((*(p+e))!=101); e++) {}
    if((*(p+e+1))!=45)
        neg=0;
    else
        neg=1;
    for (i=n-1,j=1; i>e+neg; i--,j*=10) {
        exp+=((*(p+i))-48)*j;
    }
    if(neg)
        exp-=2*exp;
    for (dot=0; (*(p+dot))!=46; dot++) {
        if(dot==n){
            dot=e;
            break;
        }
    }
    if(*p==45)
        neg=1;
    else
        neg=0;
    for (i=dot-1,j=1; i>=neg; i--,j*=10) {
        base+=((*(p+i))-48)*j;
    }
    if(dot<e){
        for (i=dot+1,j=10; i<e; i++,j*=10) {
            base+=((*(p+i))-48)/j;
        }
    }
    if(exp>=0){
        for (i=0; i<exp; i++) {
            base*=10;
        }
    }
    else{
        for (i=0; i<(-exp); i++) {
            base/=10;
        }
    }
    if(neg)
        base-=2*base;
    printf("%f\n",base);
    return 0;
}
int main() {
    char a[100];
    char *p=a;
    printf("请输入一个浮点数\n");
    gets(a);
    trans(p);
    return 0;
}
