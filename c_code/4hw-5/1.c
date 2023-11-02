//
//  1.c
//  1
//
//  Created by 崔士强 on 2022/11/3.
//

#include <stdio.h>
int main()
{
    int a[10],del_num,i;
    printf("请输入10个整数");
    for (i=0; i<10; i++)
    {
        scanf("%d",&a[i]);
    }
    for (i=0; i<10; i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}
