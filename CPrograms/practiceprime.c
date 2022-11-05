#include<stdio.h>
int main()
{
int n;
printf("Enter a number ");
scanf("%d" ,&n);
for(int i=3; i<=n ;i++)
{
if( n%2==0)
printf("the number is nonprime");
else
printf("the number is prime");
break;
}
return 0;
}