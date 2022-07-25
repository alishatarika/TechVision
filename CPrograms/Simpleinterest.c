#include <stdio.h>

int main()
{

    int p;
    int t;
    float r, si;
    printf("Enter a value of p ");

    scanf("%d", &p);

    printf("Enter a value of r ");

    scanf("%f", &r);

    printf("Enter a value of t ");
    scanf("%d", &t);

    si = p * r * t / 100;
    printf("%f", si);
    return 0;
}