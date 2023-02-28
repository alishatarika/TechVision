#include <stdio.h>
int main()
{
    int marks[100];
    printf("Enter the marks of physics ");
    scanf("%d", &marks[0]);
    printf("Enter the marks of hindi ");
    scanf("%d", &marks[1]);
    printf("Enter the marks of english ");
    scanf("%d", &marks[2]);
    printf("Enter the marks of maths ");
    scanf("%d", &marks[3]);
    printf("%d,%d,%d,%d", marks[0], marks[1], marks[2], marks[3]);

    return 0;
}