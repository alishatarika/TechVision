#include <stdio.h>
int main()

{
    int number;
    printf("Enter a five digit number ");
    scanf("%d", &number);
    while(number !=0)
    {
    int number1 = number % 10;


    printf("%d", number1);
    number = number / 10;
    }
    return 0;
}