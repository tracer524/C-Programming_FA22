//
//  1-2.c
//  1
//
//  Created by 崔士强 on 2022/9/29.
//

#include <stdio.h>
int main()
{
    int a,b,c,max;
    printf("Enter a:");
    scanf("%d",&a);
    printf("Enter b:");
    scanf("%d",&b);
    printf("Enter c:");
    scanf("%d",&c);
    max=a;
    if(max<b)        max=b;
    if(max<c)        max=c;
    printf("%d\n",max);
}
