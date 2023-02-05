#include <stdio.h>

int main()
{
    int number;

    printf("Enter a number"); /// output
    scanf("%d", &number);     // input

    if (500 < number)
    printf("Enter a number greater than 500 ");
    
    else 
    printf("w");
    return 0;
}