//
//  1-4.c
//  1-4
//
//  Created by 崔士强 on 2022/9/29.
//

#include <stdio.h>
int main(){
    int i,a=1;
    for (i=0; i<10; i++) {
        a=a*(i+1);
    }
    printf("10!=%d\n",a);
}
