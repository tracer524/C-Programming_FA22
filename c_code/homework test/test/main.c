//
//  main.c
//  test
//
//  Created by 崔士强 on 2022/12/16.
//
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main() {
    char s[5]="12.4", *p=s;
    int a[5]={1,2,3,4,5}, *q=a;
    printf("%lf\a\n",atof(s));
    fprintf(stdout, "5\a");
    return 0;
}
