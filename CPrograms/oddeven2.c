#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number :");
    scanf("%d", &n);

    if (n % 2 != 0)
    {
        printf("Number is odd");
    }

    else
    {
        printf("Number is even");
    }

    return 0;
}
