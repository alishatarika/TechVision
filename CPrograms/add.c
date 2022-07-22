#include<stdio.h>

int add(int a, int b)
{
    return a + b;
}


int main()
{
    int a;
    int b;
    printf("Enter a : ");
    scanf("%d", &a);

    printf("Enter b : ");
    scanf("%d", &b);

    printf("Result : %d\n", add(a, b));
    return 0;
}

