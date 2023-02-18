#include<stdio.h>
int main()
{
   int n;
   int r;
   printf("enter a number ");
   scanf("%d",&n);
   
   while(r!=0)
   {
    r=n%8;
    printf("%d\n",r);
    n=n/8;
   }
    return 0;
}