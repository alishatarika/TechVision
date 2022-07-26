#include <stdio.h>

int main()
{

    int radius;
    int area;

    printf("Enter value of radius: ");
    scanf("%d", &radius);

    area = 3.14 * radius * radius;
    printf("%d", area);

    return 0;
}