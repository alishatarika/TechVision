#include<stdio.h>
 
int main()
{
    int a[100];
    for(int i=1;i<6;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int j=1;j<=4;j++)
    {
        for(int k=1;k<=3;k++)
        if(a[k]>a[k+1])
        { int swap=a[k];
            a[k]=a[k+1];
            a[k+1]=swap;

        }
    }
    for(int i=1;i<=5;i++)
    {
        printf("%d\n",a[i]);
    }
}