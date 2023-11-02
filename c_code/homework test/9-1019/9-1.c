//
//  9-1.c
//  9-1
//
//  Created by 崔士强 on 2022/10/27.
//

#include <stdio.h>
int main()
{
    int a[5][5],i,j,temp;
    for (i=0; i<5; i++)
    {
        for (j=0; j<5; j++)
        {
            printf("请输入第%d行第%d列的数据:",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    printf("输入的矩阵为\n");
    for (i=0; i<5; i++)
    {
        for (j=0; j<5; j++)
        {
            if(j==4)
                printf("%6d\n",a[i][j]);
            else
                printf("%6d\t",a[i][j]);
        }
    }
    for (i=1; i<5; i++)
    {
        for (j=0; j<i; j++)
        {
            temp=a[j][i];
            a[j][i]=a[i][j];
            a[i][j]=temp;
        }
    }
    printf("转置后的矩阵为\n");
    for (i=0; i<5; i++)
    {
        for (j=0; j<5; j++)
        {
            if(j==4)
                printf("%6d\n",a[i][j]);
            else
                printf("%6d\t",a[i][j]);
        }
    }
    return 0;
}
