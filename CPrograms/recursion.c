#include<stdio.h>
int factorial(int n);
int main()
{
int n;
int a;
printf("enter a number");
scanf("%d",&n);
printf("%d",factorial(n));
}
int factorial(int n)
{
  if(n==0)
  {
    return 1;
  }
  
 int factorial2=factorial(n-1);
 int factorial1=n*factorial2;
 return factorial1;
}
