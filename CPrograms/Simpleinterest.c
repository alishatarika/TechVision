#include <stdio.h>

int main()
{

    int p;
    int t;
    int r;
    int si;
    printf("Enter a value of p ");

    scanf("%d", &p);

    printf("Enter a value of r ");

    scanf("%d", &r);

    printf("Enter a value of t ");
    scanf("%d", &t);

    si = p * r * t / 100;
    printf("%d", si);
    return 0;
}