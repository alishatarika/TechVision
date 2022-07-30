#include <stdio.h>

int main()
{
    int number;
    printf("Enter the number");
    scanf("%d", &number);

    if (number < 2)
    {
        printf("number is neither prime or non prime");
    }

    else if (number = 2)
    {
        printf("number is prime");
    }

    else if (number % 2 == 0 )
    {
        printf("number is nonprime");
    }
    else
    {
        printf("number is prime");
    }

    return 0;
}