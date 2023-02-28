#include<stdio.h>
int main()
{
    int i,m,j;
    int count=0;
    int n[15];
     int b[14];
    for(i=0;i<=5;i++)
    {
        scanf("%d",&n[i]);
          b[5-i]=n[i];
          

    }
   
  
for(j=0;j<=5;j++)
{
    printf("%d\n",b[j]);
}

}