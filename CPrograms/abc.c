#include <stdio.h>
int main()
{
    int alphabet;
    int n;
    printf("enter a number");
    scanf("%d", &n);
    for (int i = 97; i <= n; i++)
    {
        printf("%c", i);
        printf("\n");
    }
    return 0;
}