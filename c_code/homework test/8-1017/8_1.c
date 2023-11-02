#include <stdio.h>
int main()
{
    int num[10]={3,10,-2,9,103,55,17,-23,64,10},a[10],i,j,n;
    a[0]=num[0];
    for (i=1; i<10; i++)
    {
        for (j=i; j>0; j--)
        {
            if(a[j-1]<num[i])
            {
                a[j]=a[j-1];
            }
            else
                break;
        }
        a[j]=num[i];
    }
    for (i=0; i<10; i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}
