#include<stdio.h>
int main()
{
  
  
   
  for(int i =5;i>=1;i--)
  {
int count=1;
int y=i;
    for(int r=1;r<=i;r++)
    {
      if(r==5)
      {
        continue;
      }
      
    printf("%d",count);
    count++;
    }
    
    for(int j=1;j<=(2*(5-i))-1;j++){
      printf(" ");
    }
    for(int k=1;k<=i;k++)
    {
      printf("%d",y);
      y--;
    }
    printf("\n");
  }
 
  
    return 0;
}