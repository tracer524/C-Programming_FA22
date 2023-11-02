//
//  main.c
//  7_2
//
//  Created by 崔士强 on 2022/11/17.
//

#include <stdio.h>
int i;
int longest_word(char a[]){
    char *p=a,*q[1000];
    int j,k,length[1000]={0},max;
    for (i=0,j=0; *(p+i)!='\0'; i++) {
        if((*(p+i)>64&&*(p+i)<91)||(*(p+i)>96&&*(p+i)<123)){//当前字符是字母
            length[j]++;
            if(*(p+i+1)<65||(*(p+i+1)>90&&*(p+i+1)<97)||*(p+i+1)>122){ //后面一个不是字母
                q[j]=p+i+1-length[j];//q[j]指向该词开头
                j++;
                length[j]=0;
            }
        }
    }
    max=length[0];
    for (i=0; i<j; i++) {
        if(length[i]>max)
            max=length[i];
    }
    for (i=0; i<=j; i++) {
        if(length[i]==max){
            for (k=0; k<length[i]; k++) {
                printf("%c",*(q[i]+k));
            }
            printf("\n");
        }
    }
    return 0;
}
int main(){
    char a[1000];
    printf("请输入内容\n");
    gets(a);
    longest_word(a);
    return 0;
}
