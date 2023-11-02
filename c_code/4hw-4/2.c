//
//  2.c
//  2
//
//  Created by 崔士强 on 2022/10/27.
//

#include <stdio.h>
struct student
{
    int num;
    float score[3];
    float average;
};
int main()
{
    struct student st[5];
    int i;
    for (i=0; i<5; i++)
    {
        printf("请输入第%d个学生的学号",i+1);
        scanf("%d",&st[i].num);
        printf("请输入第%d个学生的三门成绩，用空格隔开\n",i+1);
        scanf("%f%f%f",&st[i].score[0],&st[i].score[1],&st[i].score[2]);
        st[i].average=(st[i].score[0]+st[i].score[1]+st[i].score[2])/3;
    }
    for (i=0; i<5; i++)
    {
        printf("第%d个学生的学号是%d，成绩为%8.2f%8.2f%8.2f，平均成绩为%.2f\n",i+1,st[i].num,st[i].score[0],st[i].score[1],st[i].score[2],st[i].average);
    }
    return 0;
}
