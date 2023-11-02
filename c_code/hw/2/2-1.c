//
//  2-1.c
//  2-1
//
//  Created by 崔士强 on 2022/10/12.
#include <stdio.h>
int main()
{
    char c;
    unsigned short s;
    double d;
    printf("Input one char:");
    c=getchar();
    printf("ASCII:%d\n",c);
    printf("Input one short:");
    scanf("%d",&s);
    printf("unsigned short:%u\n",s);
    printf("Input one real:");
    scanf("%f",&d);
    printf("double:%g\n",d);
    return 0;
}
