#include <stdio.h>
int main()
{
    int i;

    printf("enter value");
    scanf("%d", &i);
    int *ptr = &i;
    int **pptr = &ptr;
    printf("%d", **pptr);
    return 0;
}