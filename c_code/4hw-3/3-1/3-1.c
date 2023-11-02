//
//  main.c
//  3-1
//
//  Created by 崔士强 on 2022/10/20.
//
#include <math.h>
#include <stdio.h>
int main()
{
    float a,b,c,p,s,i=0;
    scanf("%f%f%f",&a,&b,&c);
    if(a+b>c&&a+c>b&&b+c>a)
    {
        if(a==b&&b==c)
        {
            printf("该三角形是等边三角形\n");
            i=1;
        }
        else if((a==b&&b!=c)||(a==c&&b!=c)||(b==c&&a!=b))
        {
            printf("该三角形是等腰三角形\n");
            i=1;
        }
        if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a)
        {
            printf("该三角形是直角三角形\n");
            i=1;
        }
        if(i==0)
            printf("该三角形是一般三角形\n");
        p=(a+b+c)/2.0;
        s=sqrtf(p*(p-a)*(p-b)*(p-c));
        printf("三角形的面积是%f\n",s);
    }
    else
        printf("不能组成三角形");
    return 0;
}
