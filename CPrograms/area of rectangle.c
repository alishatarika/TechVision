#include <stdio.h>
int main()
{
    /*l denotes length , b  denotes breadth and a denotes area of rectangle */
    int l;
    int b;
    int a;
    printf("Enter the value of l : ");
    scanf("%d", &l);

    printf("Enter the value of b : ");
    scanf("%d", &b);
    a = l * b;
    printf("%d", a);
    return 0;
}