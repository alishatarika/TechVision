#include<stdio.h>
 
int main()
{
    int a[100],position,swap;
    for(int i=1;i<6;i++)
    {
      
        scanf("%d",&a[i]);   // 5 8 2 4 1 
                            // c=1  p=1 d=2 5>8 d=3 5>2  2 8 5 4 1 d=4 5>4 2 8 4 5 1 d=5  5>1 1 8 4 5 2
                            //c=2  p=2 d=3  8>4  1 4 8 5 2 d=4 8>5  1 4 5 8 2 d=5 8>2  1 2 4 5 8
    }                           
    for(int c=1;c<5;c++)
    {
      
      position=c;
      for(int d=c+1;d<6;d++)
      {
        if(a[position]>a[d])
        position=d;
      }
      if(position!=c)
      {
         swap=a[c];
         a[c]=a[position];
         a[position]=swap;
      }
    }

     for(int i=1;i<=5;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}