//
//  main.c
//  10
//
//  Created by 崔士强 on 2022/12/8.
//
//编写学生信息链表，学生链表节点如下：
//struct stu{
//​int num;
//​char name[16];
//​char sex;
//​int age;
//​double grade;
//​struct stu *next;
//​};
//要求实现链表菜单：
//1、学生信息链表的建立
//2、学生信息链表的节点插入
//3、学生信息链表的节点删除
//4、学生信息链表的输出
//5、学生信息链表的查询
//9、清屏
//0、退出
//说明：
//1. 菜单项1（链表建立）下面再实现子菜单：“1、头插法建立   2、尾插法建立   0、返回主菜单”；
//2. 插入时应先判断链表是否有序；
//3. 节点的查询按照学号（num）来完成。

#include <stdio.h>
#include <stdlib.h>
struct stu{
    int num;
    char name[16];
    char sex;
    int age;
    double grade;
    struct stu *next;
};
struct stu *CreateList(struct stu *head);
struct stu *CreateListF(void);
struct stu *CreateListR(void);
struct stu *InsertList(struct stu *head);
struct stu *DeleteList(struct stu *head, int num);
void PrintList(struct stu *head);
void Search(struct stu *head, int num);
int Clear(struct stu *head);
int check(struct stu *head);
int flag=0;
int main(){
    struct stu *head=NULL;
    int choice,num;
menu:    printf("====================\n1、学生信息链表的建立\n2、学生信息链表的节点插入\n3、学生信息链表的节点删除\n4、学生信息链表的输出\n5、学生信息链表的查询\n9、清屏\n0、退出\n====================\n请选择功能：");
    scanf("%d",&choice);
    if(flag==0&&(choice==4||choice==5||choice==3||choice==9)){
        printf("链表为空\n");
        goto menu;
    }
    switch (choice) {
        case 1:
            head=CreateList(head);
            break;
        case 2:
            head=InsertList(head);
            break;
        case 3:
            printf("删除学生的学号：");
            scanf("%d",&num);
            head=DeleteList(head, num);
            break;
        case 4:
            PrintList(head);
            break;
        case 5:
            printf("查询学生的学号：");
            scanf("%d",&num);
            Search(head, num);
            break;
        case 9:
            Clear(head);
            break;
        case 0:
            return 0;
        default:
            printf("无效输入\n");
            break;
    }
    goto menu;
}
struct stu *CreateList(struct stu *head){
    int choice;
ch: printf("1、头插法建立\n2、尾插法建立\n0、返回主菜单\n");
    scanf("%d",&choice);
    switch (choice) {
        case 1:
            head=CreateListF();
            return head;
        case 2:
            head=CreateListR();
            return head;
        case 0:
            return head;
        default:
            printf("无效输入\n");
            goto ch;
    }
}
struct stu *CreateListF(void){
    int num;
    struct stu *head=NULL,*p;
    printf("请输入学号，输入0结束：");
    scanf("%d",&num);
    while (num!=0) {
        p=(struct stu*)malloc(sizeof(struct stu));
        p->num=num;
        p->next=head;
        head=p;
        printf("请输入姓名：");
        scanf("%s",p->name);
        printf("请输入性别，f为男，m为女：");
        scanf("%s",&p->sex);
        printf("请输入年龄：");
        scanf("%d",&p->age);
        printf("请输入成绩：");
        scanf("%lf",&p->grade);
        printf("请输入学号，输入0结束：");
        scanf("%d",&num);
        flag=1;
    }
    printf("输入完成\n");
    return head;
}
struct stu *CreateListR(void){
    struct stu *head=NULL,*rear=NULL,*p;
    int num;
    printf("请输入学号，输入0结束：");
    scanf("%d",&num);
    while (num!=0) {
        p=(struct stu*)malloc(sizeof(struct stu));
        p->next=NULL;
        p->num=num;
        if(!head)
            head=p;
        else
            rear->next=p;
        rear=p;
        printf("请输入姓名：");
        scanf("%s",p->name);
        printf("请输入性别，f为男，m为女：");
        scanf("%s",&p->sex);
        printf("请输入年龄：");
        scanf("%d",&p->age);
        printf("请输入成绩：");
        scanf("%lf",&p->grade);
        printf("请输入学号，输入0结束：");
        scanf("%d",&num);
        flag=1;
    }
    printf("输入完成\n");
    return head;
}
struct stu *InsertList(struct stu *head){
    struct stu *p=head,*q;
    if(check(head)==0){
        printf("链表无序\n");
        return head;
    }
    flag=1;
    q=(struct stu*)malloc(sizeof(struct stu));
    printf("请输入学号：");
    scanf("%d",&q->num);
    printf("请输入姓名：");
    scanf("%s",q->name);
    printf("请输入性别，f为男，m为女：");
    scanf("%s",&q->sex);
    printf("请输入年龄：");
    scanf("%d",&q->age);
    printf("请输入成绩：");
    scanf("%lf",&q->grade);
    if(!head){
        head=q;
        return head;
    }
    if(head->num>q->num){
        q->next=head;
        head=q;
        return head;
    }
    while (p->next&&p->next->num<q->num) {
        p=p->next;
    }
    q->next=p->next;
    p->next=q;
    return head;
}
struct stu *DeleteList(struct stu *head, int num){
    struct stu *p=head, *q=head;
    if(head&&head->num==num){
        p=head;
        head=p->next;
        free(p);
        return head;
    }
    while (p&&p->num!=num) {
        q=p;
        p=p->next;
    }
    if(p){
        q->next=p->next;
        free(p);
        return head;
    }
    printf("找不到目标节点\n");
    return head;
}
void PrintList(struct stu *head){
    struct stu *p=head;
    printf("学号\t姓名\t性别\t年龄\t成绩\n");
    while (p) {
        printf("%d\t%s\t%c\t%d\t%.2lf\n",p->num,p->name,p->sex,p->age,p->grade);
        p=p->next;
    }
}
void Search(struct stu *head, int num){
    struct stu *p=head;
    int a=0;
    while (p) {
        if(p->num==num)
            printf("学号：%d\t姓名：%s\t性别：%c\t年龄：%d\t成绩：%.2lf\n",p->num,p->name,p->sex,p->age,p->grade);
        a++;
        p=p->next;
    }
    if(!a)
        printf("未查到目标节点\n");
}
int Clear(struct stu *head){
    struct stu *p=head->next,*q=head->next;
    if(head->next==NULL){
        head=NULL;
        flag=0;
        return 0;
    }
    while (p->next) {
        q=p->next;
        free(p);
        p=q;
    }
    free(p);
    head=NULL;
    flag=0;
    return 0;
}
int check(struct stu *head){
    struct stu *p=head;
    int a,b,m=0,count=0;
    if(head==NULL||head->next==NULL)
        return 1;
    while (p->next!=NULL) {
        a=p->num;
        p=p->next;
        b=p->num;
        if(a<=b)
            m++;
        count++;
    }
    if(m<count)
        return 0;
    return 1;
}
