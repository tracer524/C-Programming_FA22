//
//  3.c
//  3
//
//  Created by 崔士强 on 2022/10/27.
//

#include <stdio.h>
int main()
{
    int i,j;
    for (i=0; i<6; i++)
    {
        for (j=0; j<=7-i; j++)
        {
            printf(" ");
        }
        for (j=0; j<2*i+1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
