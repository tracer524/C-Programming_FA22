//
//  main.c
//  2
//
//  Created by 崔士强 on 2022/12/1.
//

#include <stdio.h>
#include <stdlib.h>
int n,i,j;
struct student
{
    int num;
    int age;
    float score;
};
int input(struct student *p){
    for (i=0; i<n; i++) {
        printf("请输入第%d位学生的学号：",i+1);
        scanf("%d",&(p+i)->num);
        printf("请输入第%d位学生的年龄：",i+1);
        scanf("%d",&(p+i)->age);
        printf("请输入第%d位学生的成绩：",i+1);
        scanf("%f",&(p+i)->score);
    }
    return 0;
}
int sort(struct student *p){
    struct student temp;
    for (i=0; i<n-1; i++) {
        for (j=0; j<n-1; j++) {
            if((p+j)->score<(p+j+1)->score){
                temp=*(p+j);
                *(p+j)=*(p+j+1);
                *(p+j+1)=temp;
            }
        }
    }
    return 0;
}
int output(struct student *p){
    printf("学号\t年龄\t成绩\n");
    for (i=0; i<n; i++) {
        printf("%d\t%d\t%.2f\n",(p+i)->num,(p+i)->age,(p+i)->score);
    }
    return 0;
}
int main() {
    struct student *p;
    printf("输入数组长度：");
    scanf("%d",&n);
    p=(struct student *)malloc(n*sizeof(struct student));
    input(p);
    sort(p);
    output(p);
    return 0;
}
