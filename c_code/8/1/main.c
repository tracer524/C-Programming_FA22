//
//  main.c
//  1
//
//  Created by 崔士强 on 2022/11/24.
//

#include <stdio.h>
int i;
int sort(int *p){
    int c[10],d[10],*podd=c, *peven=d,num_even=0,num_odd=0,b=1,temp;
    for (i=0; i<10; i++) {
        if((*(p+i))%2==0){
            *(peven+num_even)=*(p+i);
            num_even++;
        }
        else{
            *(podd+num_odd)=*(p+i);
            num_odd++;
        }
    }
    while (b!=0) {
        b=0;
        for (i=0; i<num_odd-1; i++) {
            if((*(podd+i))<(*(podd+i+1))){
                temp=*(podd+i);
                *(podd+i)=*(podd+i+1);
                *(podd+i+1)=temp;
                b++;
            }
        }
    }
    b=1;
    while (b!=0) {
        b=0;
        for (i=0; i<num_even-1; i++) {
            if(*(peven+i)>*(peven+i+1)){
                temp=*(peven+i);
                *(peven+i)=*(peven+i+1);
                *(peven+i+1)=temp;
                b++;
            }
        }
    }
    for (i=0; i<num_odd; i++) {
        *(p+i)=*(podd+i);
    }
    for (i=num_odd; i<10; i++) {
        *(p+i)=*(peven+i-num_odd);
    }
    for (i=0; i<10; i++) {
        printf("%d\t",*(p+i));
    }
    printf("\n");
    return 0;
}
int main() {
    int a[10],*p=a;
    printf("输入十个整数，以空格分隔\n");
    for (i=0; i<10; i++) {
        scanf("%d",&a[i]);
    }
    sort(p);
    return 0;
}
