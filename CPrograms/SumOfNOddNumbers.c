#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int i;
    int sum = 0;
    for (i = 1; i <= n; i++)
    {
    if (i % 2 != 0)
    sum = sum + i;
    }
    printf("sum of odd numbers is %d", sum);

    return 0;
}