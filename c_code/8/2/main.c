//
//  main.c
//  2
//
//  Created by 崔士强 on 2022/11/24.
//

#include <stdio.h>
float ave[5],max,min,temp;
int i,j,max_num,min_num,sum[5];
int m(int (*p)[4]){
    for (i=0; i<5; i++) {
        sum[i]=0;
        for (j=0; j<3; j++) {
            sum[i]+=(*(p+i))[j];
        }
        if(i==0){
            max=sum[0];
            min=sum[0];
        }
        if(sum[i]>max){
            max=sum[i];
            max_num=i;
        }
        if(sum[i]<min){
            min=sum[i];
            min_num=i;
        }
    }
    printf("学号为%d的同学总分最高\n学号为%d的同学总分最低\n",max_num+1,min_num+1);
    return 0;
}
int sort(int (*p)[4]){
    int (*pa)[4]=NULL,(*pb[5])[4],k=1;
    for (i=0; i<5; i++) {
        pb[i]=p+i;
        sum[i]=0;
        for (j=0; j<3; j++) {
            sum[i]+=(*(p+i))[j];
        }
        ave[i]=sum[i]/3.0;
    }
    while (k!=0) {
        k=0;
        for (i=0; i<4; i++) {
            if((*pb[i])[1]+(*pb[i])[2]+(*pb[i])[3]<(*pb[i+1])[1]+(*pb[i+1])[2]+(*pb[i+1])[3]){
                pa=pb[i];
                pb[i]=pb[i+1];
                pb[i+1]=pa;
                k++;
            }
        }
    }
    printf("平均分降序\n学号\t分数\t\t\t平均分\n");
    for (i=0; i<5; i++) {
        printf("%d\t%d\t%d\t%d\t%.2f\n",(*pb[i])[0],(*pb[i])[1],(*pb[i])[2],(*pb[i])[3],((*pb[i])[1]+(*pb[i])[2]+(*pb[i])[3])/3.0);
    }
    return 0;
}
int main(){
    int score[5][4];
    int (*p)[4]=score;
    for (i=0; i<5; i++) {
        printf("请输入第%d位同学的学号\n",i+1);
        scanf("%d",&score[i][0]);
        printf("请输入第%d位同学的三项成绩，以空格分隔\n",i+1);
        for (j=0; j<3; j++) {
            scanf("%d",&score[i][j+1]);
        }
    }
    m(p);
    sort(p);
    return 0;
}
