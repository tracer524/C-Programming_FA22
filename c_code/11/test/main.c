//
//  main.c
//  test
//
//  Created by 崔士强 on 2022/12/16.
//

#include <stdio.h>

int main() {
    FILE *fp;
    fp=fopen("test.txt", "w");
    fprintf(fp, "Hello World!");
    return 0;
}
