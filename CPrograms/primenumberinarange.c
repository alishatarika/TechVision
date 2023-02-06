#include<stdio.h>

int main()
{
 
 int n;
 int i ;
 printf("Enter a  highest number");
 scanf("%d",&n);
 printf("Enter a  lowest number");
 scanf("%d",&i);
for (int j=i ;j<=n;j++)
{
  if(j%2==0)
  printf("%d\n",j);
  
}
 return 0;

}