#include <stdio.h>
/* r denotes radius and a denotes area of circle*/
int main()
{

    int r;
    int a;

    printf("Enter value of r: ");
    scanf("%d", &r);

    a = 3.14 * r * r;
    printf("%d", a);

    return 0;
}