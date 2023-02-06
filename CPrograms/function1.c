#include <stdio.h>
int areaofrectangle(int a, int b);
int areaofsquare(int a);
int main()
{
    int a;
    int b;
    printf("Enter a");
    scanf("%d", &a);
    printf("Enter b");
    scanf("%d", &b);
    printf("%d", areaofrectangle(a, b));
    return 0;
}
int areaofrectangle(int a, int b)
{
    return a * b;
}
int areaofsquare(int a)
{
    return a * a;
}