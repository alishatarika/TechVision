#include <stdio.h>

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);
    if (n % 3 == 0)
    {
        printf("Number is divisible by 3");
    }
    else if (n % 3 == 1)
    {
        printf("Number is not divisible by 3");
    }
    else
    {
        printf("Number is  not divisible by 3");
    }
    return 0;
}