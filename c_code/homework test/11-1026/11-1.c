//
//  11-1.c
//  11-1
//
//  Created by 崔士强 on 2022/11/4.
//

#include<stdio.h>
int main() {
    struct person{
        long num;
        char name[20];
        float salary;
    };
    int i,j,k;
    struct person ps[5],temp;
    for(i=0;i<5;i++){
        printf("第%d位员工的编号:",i+1);
        scanf("%ld",&ps[i].num);
        printf("第%d位员工的姓名:",i+1);
        scanf("%s",ps[i].name);
        printf("第%d位员工的工资:",i+1);
        scanf("%f",&ps[i].salary);
    }
    FILE *fp;
    fp=fopen("D:\\114514.txt", "w");
    for(i=0;i<5;i++){
        for(j=0;j<4-i;j++)
            if(ps[j].num>ps[j+1].num) {
                temp=ps[j];
                ps[j]=ps[j+1];
                ps[j+1]=temp;
            }
    }
    fprintf(fp,"按工号升序：\n");
    fprintf(fp,"       no.          name.       salary.\n");
    for(i=0;i<5;i++)
        fprintf(fp,"%8ld%14s%15.2f\n",ps[i].num,ps[i].name,ps[i].salary);
    for(i=0;i<5;i++){
        for(j=0;j<4-i;j++)
            if(ps[j].name[0]>ps[j+1].name[0]) {
                temp=ps[j];
                ps[j]=ps[j+1];
                ps[j+1]=temp;
            }
    }
    fprintf(fp,"按姓名首字母升序：\n");
    fprintf(fp,"       no.          name.       salary.\n");
    for(i=0;i<5;i++)
        fprintf(fp,"%8ld%14s%15.2f\n",ps[i].num,ps[i].name,ps[i].salary);
    fclose(fp);
    return 0;
}
