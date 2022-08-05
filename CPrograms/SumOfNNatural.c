#include <stdio.h>
//input; enter a number 4 
//output; sum = 10


int main()
{

    int n;
    int sum = 0;
    int i;
    printf("Enter a number ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
         printf(" sum = %d", sum);
    
    return 0;
}