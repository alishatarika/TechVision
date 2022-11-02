#include <stdio.h>
int main()
// 0 1 1 2 3 5 8
{
    int n;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        printf("Enter a number");
        scanf("%d", &n);
         sum = sum + n;
         printf("%d",sum);
    }
    
    return 0;
}