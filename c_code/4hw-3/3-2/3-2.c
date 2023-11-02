//
//  main.c
//  3-2
//
//  Created by 崔士强 on 2022/10/20.
//

#include <stdio.h>

int main()
{
    float x,f;
    scanf("%f",&x);
    if(x<0&&x!=3)
        f=x*x+x-6;
    else if (x<10&&x!=2)
        f=x*x-5*x+6;
    else
        f=x*x-x-1;
    printf("f(x)的值是%f\n",f);
    return 0;
}
