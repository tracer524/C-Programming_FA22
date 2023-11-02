//
//  main.c
//  3-3
//
//  Created by 崔士强 on 2022/10/20.
//

#include <stdio.h>

int main()
{
    char a=40;
    while (a!=42)
    {
        printf("请输入一个小写字母\n");
        a=getchar();
        getchar();
        while ((a<97||a>122)&&a!=42)
        {
            printf("请重新输入\n");
            a=getchar();
            getchar();
        }
        if(a>96&&a<123)
        {
            a-=32;
            printf("%c\n",a);
        }
    }
    return 0;
}
