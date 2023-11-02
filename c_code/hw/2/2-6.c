//
//  2-6.c
//  2-6
//
//  Created by 崔士强 on 2022/10/13.
//

#include <stdio.h>
int main()
{
    float f=-2.1,g=3,h=4;
    int a=1,b=2,c=3.2;
    int d=a=b=c;
    printf("a=%d,b=%d,c=%d,d=%d\n",a,b,c,d);
    printf("(a*=b/=c+=d)=%d\n",a*=b/=c+=d);
    printf("a=%d,b=%d,c=%d,d=%d\n",a,b,c,d);
    printf("(f*=g-=h+=d)=%f\n",f*=g-=h+=d);
    printf("f=%f,g=%f,h=%f\n",f,g,h);
    return 0;
}
