//
//  4.c
//  4
//
//  Created by 崔士强 on 2022/10/13.
//

#include <stdio.h>
int main()
{
    char data[6];
    int i,a=0;
    printf("请输入三个小写字母\n");
    while (a<3)
    {
        for (i=0; i<3; i++)
        {
            data[i]=getchar();
        }
        for (i=0; i<3; i++)
        {
            if(data[i]>96&&data[i]<123)
                a=a+1;
        }
        if(a!=3)
        {
            printf("请重新输入三个小写字母\n");
            a=0;
        }
    }
    for (i=3; i<6; i++)
        data[i]=data[0];
    for (i=0; i<3; i++)
    {
        if(data[i]>data[5])
            data[5]=data[i];
        if(data[i]<data[3])
            data[3]=data[i];
    }
    for (i=0; i<3; i++)
    {
        if(data[i]!=data[3]&&data[i]!=data[5])
            data[4]=data[i];
    }
    for (i=3; i<6; i++)
    {
        putchar(data[i]);
    }
}
