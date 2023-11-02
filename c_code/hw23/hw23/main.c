//
//  main.c
//  hw23
//
//  Created by 崔士强 on 2022/12/20.
//

#include <stdio.h>
#include <stdlib.h>

struct node{
    int num;
    struct node *next;
};
struct node *MergeChart(struct node *head1, struct node *head2);
struct node *MergeNode(struct node *head);
void ScreenPrint(struct node *head);
int main() {
    int num;
    struct node *head1=NULL, *head2=NULL, *p;
    scanf("%d",&num);
    while (num) {
        p=(struct node*)malloc(sizeof(struct node));
        p->num=num;
        p->next=head1;
        head1=p;
        scanf("%d",&num);
    }
    printf("head1 completed\n");
    scanf("%d",&num);
    while (num) {
        p=(struct node*)malloc(sizeof(struct node));
        p->num=num;
        p->next=head2;
        head2=p;
        scanf("%d",&num);
    }
    printf("head2 completed\n");
    p=MergeChart(head1, head2);
    ScreenPrint(p);
    return 0;
}
struct node *MergeChart(struct node *head1, struct node *head2){
    struct node *head=head1, *p, *p1=head1, *p2=head2;
    while (p2) {
        p=p2;
        while (p1->next) {
            if(p2->num>p1->num&&p2->num<p1->next->num){
                p=p2->next;
                p2->next=p1->next;
                p1->next=p2;
                break;
            }
            else{
                p1=p1->next;
            }
        }
        if(!p1->next){
            p=p2->next;
            p2->next=NULL;
            p1->next=p2;
        }
    }
    return head;
}
struct node *MergeNode(struct node *head){
    struct node *p=head, *q;
    while (p->next) {
        if(p->num==p->next->num){
            q=p->next;
            p->next=p->next->next;
            p=p->next;
            free(q);
        }
    }
    return head;
}
void ScreenPrint(struct node *head){
    struct node *p=head;
    while (p) {
        printf("%d\n",p->num);
        p=p->next;
    }
}
