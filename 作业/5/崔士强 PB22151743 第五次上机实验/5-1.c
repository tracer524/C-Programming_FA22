//
//  5-1.c
//  5-1
//
//  Created by 崔士强 on 2022/11/3.
//

#include <stdio.h>
int main()
{
    int a[10],b[9],del_num,i,j=0;
    printf("请输入10个整数，以空格隔开\n");
    for (i=0; i<10; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("想要删除第几个数据\n");
    scanf("%d",&del_num);
    for (i=0; i<10; i++)
    {
        if(i+1!=del_num)
        {
            b[j++]=a[i];
        }
    }
    printf("删除后的数组是\n");
    for (i=0; i<9; i++)
    {
        printf("%d\t",b[i]);
    }
    return 0;
}
