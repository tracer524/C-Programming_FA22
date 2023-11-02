//
//  1-3.c
//  1-3
//
//  Created by 崔士强 on 2022/9/29.
//

#include <stdio.h>
#include <math.h>
int main()
{
    double a,b,c,s,area;
    printf("input a:");
    scanf("%lf",&a);
    printf("input b:");
    scanf("%lf",&b);
    printf("input c:");
    scanf("%lf",&c);
    s=(a+b+c)/2.0;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    
    
    if (a+b<=c||b+c<=a||a+c<=b) {
        printf("不能构成三角形");
         } else {
            printf("a=%6.2f,b=%6.2f,c=%6.2f\n",a,b,c);
            printf("s=%-8.2f,b=%-8.2f\n",s,area);
        }
                
}
