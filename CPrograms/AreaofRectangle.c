#include <stdio.h>
int main()
{

    int length;
    int breadth;
    int area;
    printf("Enter the value of length : ");
    scanf("%d", &length);

    printf("Enter the value of breadth : ");
    scanf("%d", &breadth);
    area = length * breadth;
    printf("Area of Rectangle is %d", area);
    return 0;
}