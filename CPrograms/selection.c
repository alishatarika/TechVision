#include<stdio.h>
 
int main()
{
    int a[100],position,swap;
    for(int i=1;i<6;i++)
    {
        //5 8 6 2 9
        scanf("%d",&a[i]);
    }
    for(int c=1;c<5;c++)
    {
        //c=1
        //position=1
        
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