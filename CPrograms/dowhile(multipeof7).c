#include <stdio.h>
int main()
{
    int n;
    do
    {
        printf("enter number : ");
        scanf("%d", &n);
        printf("%d\n", n);
        if ("%d", n % 7 == 0)
        {
            break;
        }
    } while ( 1);

    printf("t");
    return 0;
}