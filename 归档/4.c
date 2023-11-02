//
//  4.c
//  4
//
//  Created by 崔士强 on 2022/10/27.
//

#include <stdio.h>
int main()
{
    int i,j;
    for (i=0; i<9; i++)
    {
        for (j=0; j<i+1; j++)
        {
            printf("%d*%d=%d\t",j+1,i+1,(i+1)*(j+1));
        }
        printf("\n");
    }
    return 0;
}
