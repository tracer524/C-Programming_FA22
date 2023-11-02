//
//  main.c
//  6
//
//  Created by 崔士强 on 2022/11/10.
//

#include <stdio.h>
int a[100],i,num=10;
int input(int num){
    printf("请输入十个整数，以空格隔开\n");
    for (i=0; i<num; i++) {
        scanf("%d",&a[i]);
    }
    printf("输入完成\n");
    return 0;
}
int print(int a[],int num){
    for (i=0; i<num; i++) {
        printf("%d\t",a[i]);
    }
    printf("\n");
    return 0;
}
int max(int a[],int num){
    int max=a[0];
    for (i=0; i<num; i++) {
        if(a[i]>max)
            max=a[i];
    }
    return max;
}
int min(int a[],int num){
    int min=a[0];
    for (i=0; i<num; i++) {
        if(a[i]<min)
            min=a[i];
    }
    return min;
}
float average(int a[],float num){
    int sum=0;
    float ave;
    for (i=0; i<num; i++) {
        sum+=a[i];
    }
    ave=sum/num;
    return ave;
}
int BubbleSort(int a[],int num){
    int b=1,temp;
    while (b!=0) {
        for (i=0,b=0; i<num-1; i++) {
            if(a[i]>a[i+1]){
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
                b++;
            }
        }
    }
    for (i=0; i<10; i++) {
        printf("%d\t",a[i]);
    }
    printf("\n");
    return 0;
}
int SelectSort(int a[],int num){
    int j,temp;
    for (i=0; i<num-1; i++) {
        for (j=i+1; j<num; j++) {
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for (i=0; i<10; i++) {
        printf("%d\t",a[i]);
    }
    printf("\n");
    return 0;
}
int search(int a[],int num){
    int target,count=0;
    printf("请输入想要查找的元素：");
    scanf("%d",&target);
    for (i=0; i<num; i++) {
        if(a[i]==target){
            printf("第%d个元素是目标元素\n",i+1);
            count++;
        }
        if(count==0){
            printf("该元素不存在\n");
        }
    }
    return 0;
}
int delete(int a[],int num){
    int target,target_num=0,count=0;
    printf("删除的元素是：");
    scanf("%d",&target);
    for (i=0; i<num; i++) {
        if(a[i]==target){
            target_num=i;
            count++;
            break;
        }
    }
    if(count==0){
        printf("无此数值\n");
        goto p;
    }
    while (count!=0) {
        count=0;
        for (i=target_num; i<num; i++) {
            a[i]=a[i+1];
        }
        for (i=0; i<num; i++) {
            if(a[i]==target){
                target_num=i;
                count++;
                break;
            }
        }
    }
    printf("删除完成");
p:  return 0;
}
int check(int a[],int num){
    int count_ascend=0,count_descend=0;
    for (i=0; i<num-1; i++) {
        if(a[i]<=a[i+1])
            count_ascend++;
        if(a[i]>=a[i+1])
            count_descend++;
    }
    if(count_ascend==9&&count_descend==9)
        printf("数组所有数值相等\n");
    else if(count_ascend==9)
        printf("数组为升序\n");
    else if(count_descend==9)
        printf("数组为降序\n");
    else
        printf("数组无序");
    return 0;
}
int main(){
    int choice=1,first_time=1;
    while (choice!=0) {
    menu:        printf("--------menu--------\n1.输入数组数据\n2.显示数组\n3.求最大值和最小值\n4.求平均值\n5.冒泡排序\n6.选择排序\n7.查找指定元素\n8.删除指定元素\n9.判断数组是否有序\n0.退出\n--------------------\n请选择菜单功能:");
        scanf("%d",&choice);
        if(choice!=1&&first_time==1&&choice!=0) {
            printf("请先输入数组数据\n");
            goto menu;
        }
        first_time=0;
        switch (choice) {
            case 1:
                input(10);
                break;
            case 2:
                print(a, 10);
                break;
            case 3:
                printf("最大值是%d\n最小值是%d\n",max(a,10),min(a, 10));
                break;
            case 4:
                printf("平均值是%.3f\n",average(a, 10.0));
                break;
            case 5:
                BubbleSort(a, 10);
                break;
            case 6:
                SelectSort(a, 10);
                break;
            case 7:
                search(a,10);
                break;
            case 8:
                delete(a, 10);
                break;
            case 9:
                check(a, 10);
                break;
            case 0:
                break;
            default:
                printf("无效输入");
                break;
        }
    }
    return 0;
}
