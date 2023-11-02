//
//  main.c
//  homework test
//
//  Created by 崔士强 on 2022/10/12.
//

#include <stdio.h>
int main() {
    float data[4];
    float sum=0,ave;
    int i,n=0;
    for (i=0; i<4; i++)
    {
        scanf("%f",&data[i]);
        if(data[i]>0)
        {
            sum=sum+data[i];
            n=n+1;
        }
    }
    if (n==0) {
        printf("No positive number entered");
    } else {
        ave=sum/n;
        printf("The average is %.2f\n",ave);
    }
    return 0;
}
