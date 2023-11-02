//
//  1-5.c
//  1-5
//
//  Created by 崔士强 on 2022/9/29.
//

#include <stdio.h>
int main(){
    double R,H,V;
    printf("Enter R:");
    scanf("%lf",&R);
    printf("Enter H:");
    scanf("%lf",&H);
    V=3.1415*R*R*H;
    printf("V=%.3lf\n",V);
}
