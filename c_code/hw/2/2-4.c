//
//  2-4.c
//  2-4
//
//  Created by 崔士强 on 2022/10/13.
//

#include <stdio.h>
int main()
{
    int i,res;
    scanf("%d",&i);
    res=!i&&i++;
    printf("&&=%d,i=%d\n",res,i);
    res=i==1||i--;
    printf("||=%d,i=%d\n",res,i);
    res=i==1||i==0||res==0;
    printf("res=%d\n",res);
    return 0;
}
