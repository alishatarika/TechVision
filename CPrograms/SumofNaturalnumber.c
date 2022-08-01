#include <stdio.h>

int main()
{

    int n;
    int sum = 0;
    int i;

    printf("Enter a number to find the sum of numbers ");
    scanf("%d" , &n);

    for (i = 0; i <= n; i++)
    sum = sum+i;
       {
    printf("Sum of natural numbers is %d",sum);
        }
    return 0;
}