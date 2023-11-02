//
//  main.c
//  7_2
//
//  Created by 崔士强 on 2022/11/17.
//

#include <stdio.h>
int longest_word(char a[]){
    int i,j,length[1000],max,count;
    for (i=0,j=0; a[i]!='\0'; i++) {
        if((a[i]>64&&a[i]<91)||(a[i]>96&&a[i]<123)){
            length[j]++;
            if(a[i+1]<65||(a[i+1]>90&&a[i+1]<97)||a[i+1]>122)
                j++;
        }
    }
    max=length[0];
    for (i=0; length[i]!='\0'; i++) {
        if(length[i]>max)
            max=length[i];
    }
    for (i=0,count=0; a[i]!='\0'; i++) {
        if((a[i]>64&&a[i]<91)||(a[i]>96&&a[i]<123)){
            count++;
            if(count==max){
                for (j=i-max+1; j==i; j++) {
                    printf("%c",a[j]);
                }
            }
        }
        if(a[i]<65||(a[i]>90&&a[i]<97)||a[i]>122)
            count=0;
    }
    return 0;
}
int main(){
    char a[1000];
    scanf("%s",a);
    longest_word(a);
    return 0;
}
