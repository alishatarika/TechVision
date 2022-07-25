#include <stdio.h>

int main()
{
    int number;

    printf("Enter a number"); /// output
    scanf("%d", &number);     // input

    if ( 500 < number )
    {

        printf("Enter a number greater than 500 ");
    }

    else if (400 < number )
    {
        printf("Enter a number greater than 400 ");
    }

    else if (300< number )
    {

        printf("Enter a number greater than 300 ");
    }

    else if (200< number )
    {

        printf("Enter a number greater than 200 ");
    }

    else if(100<number){
        printf("Enter a number greater than 100");
    }
    else {

                printf("Enter a number less than 100");
    }

    return 0;
}