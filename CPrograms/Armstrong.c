#include <stdio.h>
#include<conio.h>
int main()
{
    int n,r,sum,i,t;
    sum=0;
    printf("Enter a three digit number ");
    scanf("%d", &n);
    
    for(i=1;i<=n;i++)
    {
        
        t=i;
        while(i>0)
       {
       r=i%10;
       sum=sum+r*r*r; 
       i=i/10;
       }
    
      if(t==sum)
      {
        printf("%d",t);
      }
      
    }
      
    



    return 0;
}