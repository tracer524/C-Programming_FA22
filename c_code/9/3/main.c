//
//  main.c
//  3
//
//  Created by 崔士强 on 2022/12/1.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[]) {
    int a[argc-1],i,j,temp,sum=0;
    float ave;
    for (i=1; i<argc; i++) {
        a[i-1]=atof(argv[i]);
        sum+=a[i-1];
    }
    printf("sum:%d, ",sum);
    ave=sum/(argc-1)*1.0;
    printf("average:%f, ",ave);
    for (i=0; i<argc-2; i++) {
        for (j=0; j<argc-2; j++) {
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("sort:");
    for (i=0; i<argc-1; i++) {
        printf("%d\t",a[i]);
    }
    return 0;
}
