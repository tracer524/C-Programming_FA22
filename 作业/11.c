//
//  main.c
//  10
//
//  Created by 崔士强 on 2022/12/8.
//

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
struct stu *CreateListRead(void);
struct stu *SortList(struct stu *head);
struct stu *InsertList(struct stu *head);
struct stu *DeleteList(struct stu *head, int num);
void PrintList(struct stu *head);
void ScreenPrint(struct stu *head);
void Save(struct stu *head);
void Search(struct stu *head, int num);
int Clear(struct stu *head);
int check(struct stu *head);
int flag=0;
int main(){
    struct stu *head=NULL;
    int choice,num;
menu:    printf("====================\n1、学生信息链表的建立\n2、学生信息链表的节点排序\n3、学生信息链表的节点插入\n4、学生信息链表的节点删除\n5、学生信息链表的输出\n6、学生信息链表的查询\n9、清屏\n0、退出\n====================\n请选择功能：");
    scanf("%d",&choice);
    if(flag==0&&(choice==5||choice==6||choice==4||choice==9)){
        printf("链表为空\n");
        goto menu;
    }
    switch (choice) {
        case 1:
            head=CreateList(head);
            break;
        case 2:
            head=SortList(head);
            break;
        case 3:
            head=InsertList(head);
            break;
        case 4:
            printf("删除学生的学号：");
            scanf("%d",&num);
            head=DeleteList(head, num);
            break;
        case 5:
            PrintList(head);
            break;
        case 6:
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
    while (num) {
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
    while (num) {
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
struct stu *CreateListRead(void){
    FILE *fp;
    char a[50];
    struct stu *p, *head=NULL, *s=NULL;
    printf("请输入文件名");
    gets(a);
    if(!(fp=fopen(a, "b"))){
        printf("打开文件失败");
        return NULL;
    }
    while (!feof(fp)) {
        if(head==NULL){
            p=(struct stu *)malloc(sizeof(struct stu));
            fread(p, sizeof(struct stu), 1, fp);
            if(feof(fp)){
                printf("文件为空\n");
                return NULL;
            }
            head=s=p;
        }
        p=(struct stu*)malloc(sizeof(struct stu));
        fread(p, sizeof(struct stu), 1, fp);
        if(feof(fp)){
            s->next=NULL;
            break;
        }
        s->next=p;
        s=p;
        p->next=NULL;
    }
    fclose(fp);
    printf("输入完成\n");
    return head;
}
struct stu *SortList(struct stu *head){
    struct stu a,*p=&a, *q=head, *ap=&a;
    p->next=head;
    while (q->next) {
        if(q->num>q->next->num){
            p->next=q->next;
            q->next=q->next->next;
            p->next->next=q;
            p=p->next;
        }
    }
    head=ap->next;
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
    int choice;
    printf("1、屏幕输出\n2、保存链表至文件\n3、返回主菜单\n请选择功能：");
    scanf("%d",&choice);
    switch (choice) {
        case 1:
            ScreenPrint(head);
            break;
        case 2:
            Save(head);
            break;
        case 0:
            return;
        default:
            printf("无效输入");
    }
}
void ScreenPrint(struct stu *head){
    struct stu *p=head;
    printf("学号\t姓名\t性别\t年龄\t成绩\n");
    while (p) {
        printf("%d\t%s\t%c\t%d\t%.2lf\n",p->num,p->name,p->sex,p->age,p->grade);
        p=p->next;
    }
}
void Save(struct stu *head){
    FILE *fp;
    struct stu *p=head;
    char a[50];
    printf("请输入文件名\n");
    gets(a);
    if(!(fp=fopen(a, "b"))){
        printf("打开文件失败\n");
        return;
    }
    while (p) {
        fprintf(fp, "%d\t%s\t%c\t%d\t%.2lf\n",p->num,p->name,p->sex,p->age,p->grade);
    }
    fclose(fp);
    printf("存储完成\n");
    return;
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
