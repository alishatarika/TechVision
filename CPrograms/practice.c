#include <stdio.h>
int main()
{
    int n;
    int i;
    int j;
    int count=1;
    printf("Enter a number ");
    scanf("%d", &n);
    for(i=1; i<=n ; i++)
    {
     for(j=1; j<=i ; j++)
     {
     printf(" %d" , count);
     count++;
     }
     printf("\n");

    }
    
    return 0;
}