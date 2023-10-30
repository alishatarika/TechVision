#include<stdio.h>
 
int main()
{
    int a[100],j,key;
    for(int i=0;i<6;i++)
    {
        scanf("%d",&a[i]);
    }
                                                    //6 4 8 2 5
                                                    //  i=1  key =4 j=0 6>4 T 4 6 8 2 5 
    for(int i=1;i<6;i++)                            //  i=2 key =8  j=1 6>8  4 6 8 2 5
                                                    //  i=3 key =2  j=2 8>2  4 6 8 8 5  j=1 6>2  4 6 6 8 5  j=0  4>2  4 4 6 8 5  2 4 6 8 5
                                                    //  i=4 key =8  j=3  6>8  j=2  6>8  j=1   4>8  j=0 2>8  
                                                    //  i=5  key=5  j=4  8>5  2 4 6 8 8 j=3 8>5 2 4 6 8 8 j=2 6>5 2 4 6 6 8 j=1 4>5 j=0 2>5 2 4 5 6 8
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