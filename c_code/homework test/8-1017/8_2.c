//
//  8_2.c
//  8-2
//
//  Created by 崔士强 on 2022/10/27.
//

#include <stdio.h>
int main()
{
    FILE *fp;
    fp=fopen("D:\\hw.txt", "w");
    fprintf(fp, "hello world");
    fclose(fp);
    return 0;
}
