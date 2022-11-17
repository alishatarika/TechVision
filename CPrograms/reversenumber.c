#include <stdio.h>
int main()

{
    int number;
    printf("Enter a five digit number ");
    scanf("%d", &number);

    int number1 = number % 10;
    printf("%d", number1);
    number1 = number / 10;
    printf("%d", number1 % 10);
    int number2 = number1 / 10;
    printf("%d", number2 % 10);
    int number3 = number2 / 10;
    printf("%d", number3 % 10);
    int number4 = number3 / 10;
    printf("%d", number4 % 10);

    return 0;
}