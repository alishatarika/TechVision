#include <stdio.h>

int main()
{
    int number;

    printf("Enter a number"); /// output
    scanf("%d", &number);     // input

    if ( 100 < number & 200> number )
    {

        printf("Enter a number greater than 100 ");
    }

    else if (200 < number & 300> number)
    {
        printf("Enter a number greater than 200 ");
    }

    else if (300< number & 400> number )
    {

        printf("Enter a number greater than 300 ");
    }

    else if (400< number & 500>number )
    {

        printf("Enter a number greater than 400 ");
    }

    else
    {

                printf("Enter a number greater than 500");
    }

    return 0;
}