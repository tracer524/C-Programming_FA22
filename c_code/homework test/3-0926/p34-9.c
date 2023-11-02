//
//  p34-9.c
//  p34-9
//
//  Created by 崔士强 on 2022/10/12.
//

#include <stdio.h>
int main(){
    int data[5]={1,2,3,4,5};
    int max=data[0],min=data[0],i;
    for (i=1; i<5; i++) {
        if(data[i]>max){
            max=data[i];
        }
        if(data[i]<min){
            min=data[i];
        }
    }
    printf("Maximun value is %d\nMinimun value is %d\n",
           max,min);
    return 0;
}
