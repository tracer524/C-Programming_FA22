//
//  5-3.c
//  5-3
//
//  Created by 崔士强 on 2022/11/3.
//

#include <stdio.h>
int input(char *a){
    int i=0;
    char c;
    c=getchar();
    while(c!='\n'){
        a[i]=c;
        i++;
        c=getchar();
    };
    return i;
}
int main(){
    int k=0,num1,num2,min;
    char s[100],t[100];
    num1=input(s);
    num2=input(t);
    while(!(s[k]=='\0'&&t[k]=='\0')){
        if(s[k]>t[k]){printf("s is bigger");goto end;}
        if(s[k]<t[k]){printf("t is bigger");goto end;}
        k++;
    };
    printf("s equals t");
end:   return 0;
}
