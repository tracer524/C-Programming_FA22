//
//  7-3.c
//  7-3
//
//  Created by 崔士强 on 2022/10/17.
//

#include <stdio.h>
int main()
{
    int data[9];
    int a,s=0,i,j,b=0;
    for (data[0]=1; data[0]<10; data[0]++)
    {
        for (data[1]=0; data[1]<10; data[1]++)
        {
            for (data[2]=0; data[2]<10; data[2]++)
            {
                for (data[3]=0; data[3]<10; data[3]++)
                {
                    for (data[4]=0; data[4]<10; data[4]++)
                    {
                        for (data[5]=0; data[5]<10; data[5]++)
                        {
                            for (data[6]=0; data[6]<10; data[6]++)
                            {
                                for (data[7]=0; data[7]<10; data[7]++)
                                {
                                    for (data[8]=0; data[8]<10; data[8]++)
                                    {
                                        a=((10*data[0]+data[1])*(100*data[2]+10*data[3]+data[4])==(1000*data[5]+100*data[6]+10*data[7]+data[8]));
                                        for (i=0; i<9; i++)
                                        {
                                            for (j=0; j<9; j++)
                                            {
                                                if(i!=j&&data[i]==data[j])
                                                {
                                                        b=b+1;
                                                }
                                            }
                                        }
                                        if(b==0&&a==1)
                                                s+=1;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    printf("%d\n",a);
    printf("%d\n",s);
    return 0;
}
