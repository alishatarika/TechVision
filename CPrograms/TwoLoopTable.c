#include <stdio.h>

int main()
{
    int n;
    int i;
    int j;
    printf("Enter a number :");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("Table for %d \n ", i);
        for (j = 1; j <= 10; j++)
        printf("%d x %d = %d \n ", i, j, i * j);
    }

    return 0;
}