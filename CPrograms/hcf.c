#include<stdio.h>

int main()
{
int a =8;
int b=6;
int hcf=1;
if(a>b)
{
    int t=a;
    a=b;
    b=t;
}
for(int i =1;i<=b;i++)
{
    if(a%i==0 && b%i==0)
     hcf=i;

}
printf("hcf is %d",hcf);
return 0;}