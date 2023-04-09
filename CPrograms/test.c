#include<stdio.h>
#include<math.h>
int main()
{
    int n,m,i=1;
    int sum=0;
   
    scanf("%d\n%d",&n,&m);
    do
    {
        sum=sum+pow(i,n);
        i++;
    }
   
    while(i<=m);
    {
       printf("%d",sum);
    }
    return 0;
}
