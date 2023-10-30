#include<stdio.h>
 
int main()
{
    int a[100];
    for(int i=0;i<6;i++)
    {                               //4 8 5 3 9
                                      //   n=5
                                      //  pass 1  4 5 3 8 9
                                      // pass 2   4 3 5 8 9
                                      //pass3     3 4 5 8 9      

        scanf("%d",&a[i]);
    }
    for(int j=0;j<5;j++)
    {
        for(int k=0;k<5-j-1;k++)
        if(a[k]>a[k+1])
        { int swap=a[k];
            a[k]=a[k+1];
            a[k+1]=swap;

        }
    }
    printf("sorted array");
    for(int i=5;i>=1;i--)
    {
        printf("%d\n",a[i]);
    }
}