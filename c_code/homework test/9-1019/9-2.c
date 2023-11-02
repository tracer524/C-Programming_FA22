//
//  9-2.c
//  9-2
//
//  Created by 崔士强 on 2022/10/27.
//

#include <stdio.h>
int main()
{
    char a[20],b[20];
    int i,j;
    printf("请输入第一个字符串（长度小于20）\n");
    scanf("%s",a);
    printf("请输入第二个字符串（长度小于20）\n");
    scanf("%s",b);
    for (i=0; a[i]!='\0'; i++)
    {
    }
    for (j=0; b[j]!='\0'; j++)
    {
    }
    if(i>j)
        printf("%s",a);
    else if (j>i)
        printf("%s",b);
    else
        printf("%s\n%s",a,b);
    return 0;
}
