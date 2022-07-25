#include <stdio.h>

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);
    if (n % 3 == 0)
    {
        printf("Remainder is 0");
    }
    else if (n % 3 == 1)
    {
        printf("Remainder is 1");
    }
    else
    {
        printf("Remainder is 3");
    }
    return 0;
}
        