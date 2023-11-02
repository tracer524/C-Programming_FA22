//
//  main.c
//  hw21
//
//  Created by 崔士强 on 2022/12/16.
//

#include <stdio.h>
#include <stdlib.h>
struct person{
    int num;
    float salary;
    struct person *next;
};
int Length(struct person *head);
void Search(struct person *head, int num);
struct person *Reverse(struct person *head);
int main() {
    
    return 0;
}
int Length(struct person *head){
    int length=1;
    struct person *p=head;
    while (p->next) {
        length++;
    }
    return length;
}
void Search(struct person *head, int num){
    struct person *p=head;
    int a=0;
    while (p) {
        if(p->num==num)
            printf("工号：%d\t薪资：%f\n",p->num,p->salary);
        a++;
        p=p->next;
    }
    if(!a)
        printf("未查到目标节点\n");
}
struct person *Reverse(struct person *head){
    struct person a=*head,*rhead=&a,*p,*q=head;
    while (q->next) {
        q=q->next;
        p=(struct person*)malloc(sizeof(struct person));
        p->num=q->num;
        p->salary=q->salary;
        p->next=rhead;
        rhead=p;
    }
    return rhead;
}
