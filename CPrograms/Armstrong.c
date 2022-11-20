#include <stdio.h>

int main()
{
    int sum;
    int n;
    int t=n;
    int r;
    printf("Enter a three digit number ");
    scanf("%d", &n);
    while (n>0)
    {
        r=n%10;
        sum=sum+(r*r*r);
        n=n/10;
    }
    if (t==sum)
    {
        printf("Number is armstrong");
    }
    else
    {
      printf("Number is not armstrong");
    }
    return 0;
}