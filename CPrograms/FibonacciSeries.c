#include <stdio.h>

int main()
{
    int n;
    printf("Enter the value of n : ");
    scanf("%d", &n);

    int n1 = 0;
    int n2 = 1;
    int sum;
    
    printf("%d ", n1 );

    for (int i = 0; i <= n; i++)
    {

        n1 = n2;
        n2 = sum;
        sum = n1 + n2;
        printf(" %d " ,sum);
    }
    return 0;
}
