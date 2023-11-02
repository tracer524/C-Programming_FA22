//
//  10-1.c
//  10-1
//
//  Created by 崔士强 on 2022/11/4.
//

#include <stdio.h>
int main(){
    struct student{
        int num;
        char name[20];
        float score;
    };
    struct student st[10],temp;
    int i,a;
    float ave,s=0;
    for (i=0; i<10; i++) {
        printf("请输入第%d个学生的学号\n",i+1);
        scanf("%d",&st[i].num);
        printf("请输入第%d个学生的姓名\n",i+1);
        scanf("%s",&st[i].name);
        printf("请输入第%d个学生的分数\n",i+1);
        scanf("%f",&st[i].score);
    }
    for (i=0; i<10; i++) {
        printf("%10d%20s%10.1f\n",st[i].num,st[i].name,st[i].score);
    }
    for (a=1;a!=0; ) {
        a=0;
        for (i=0; i<9; i++) {
            if(st[i].score>st[i+1].score){
                temp=st[i];
                st[i]=st[i+1];
                st[i+1]=temp;
                a++;
            }
        }
    }
    printf("最高分学生：\n学号：%d\t姓名：%s\t分数：%.1f\n",st[9].num,st[9].name,st[9].score);
    printf("最低分学生：\n学号：%d\t姓名：%s\t分数：%.1f\n",st[0].num,st[0].name,st[0].score);
    for (i=0; i<10; i++) {
        s+=st[i].score;
    }
    ave=s/10;
    printf("平均分：%.2f",ave);
    return 0;
}
