//
//  main.c
//  12-1031
//
//  Created by 崔士强 on 2022/11/8.
//

#include <stdio.h>
int x,y,i;
int lcm(int a,int b){
    for (i=0; ; i++) {
        if(i+1>a&&i+1>b&&(i+1)%a==0&&(i+1)%b==0)
            break;
    }
    return i+1;
}
int gcd(int a,int b){
    for (i=0; ; i++) {
        if((a%(i+1)==0&&b%(i+1)==0)||i+1==a||i+1==b)
            break;
    }
    if(i+1==a||i+1==b)
        i=0;
    return i+1;
}
int main() {
    printf("请输入两个整数，以空格间隔\n");
    scanf("%d%d",&x,&y);
    printf("最大公因数为%d\n最小公倍数为%d\n",gcd(x, y),lcm(x, y));
    return 0;
}
