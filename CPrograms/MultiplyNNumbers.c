
#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int i;
    int multiply = 1;
    for (i = 1; i <= n; i++)
    {
        multiply = multiply * i;
    }
    printf("Multiplication of N numbers is %d", multiply);
    return 0;
}