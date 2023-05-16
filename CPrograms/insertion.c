#include<stdio.h>
 
int main()
{
    int a[100],j,key;
    for(int i=0;i<6;i++)
    {
        scanf("%d",&a[i]);
    }

    for(int i=1;i<6;i++)
    {
        
        key=a[i];
        j=i-1;
        while(j>=0 && a[j]>key)
        {
            a[j+1]=a[j];
            j--;
        }
    
        a[j+1]=key;
    }
        
    for(int i=1;i<=5;i++)
    {
        printf("%d\n",a[i]);
    }

    
    return 0;
    }