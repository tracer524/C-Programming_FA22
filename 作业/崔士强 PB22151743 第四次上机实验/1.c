//
//  1.c
//  1
//
//  Created by 崔士强 on 2022/10/27.
//

#include <stdio.h>
int main()
{
    int a[3]={1,1,2},n,i;
    printf("请输入个数\n");
    scanf("%d",&n);
    for (i=0; i<n; i++)
    {
        if(i>2)
        {
            a[i%3]=a[(i-1)%3]+a[(i-2)%3];
        }
        printf("%d\t",a[i%3]);
        if((i+1)%4==0&&i!=0)
        {
            printf("\n");
        }
    }
}
