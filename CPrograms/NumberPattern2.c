#include <stdio.h>
int main()
{
    int n;
    int k = 1;
    printf("Enter a number");
    scanf("%d", &n);
    // 1
    // 23
    // 456
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {


            printf("%d", k++);
        }
            printf("\n");
            
        }
        return 0;
    }
