#include <stdio.h>

int main()
{
    int n;
    int r;
    int i = 2;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n>1)
    {
        if (n % i == 0)
        {
            printf("%d ", i);
            n = n / i;
            printf("\n");
        }
        else
        {
            i++;
        }
    }

    return 0;
}
