#include <stdio.h>

int main()
{
    int number;
    int i;

    printf("Enter the number ");
    scanf("%d", &number);
    int count = 0;
    for (i = 2; i < number; i++)
    {
      
        if (number % i == 0)
        { 
        count++;
        }
        if(count>0)
        {
            printf("number is nonprime \n");
        }

        else
        {
            printf("number is prime \n");
        }
    }
    printf("%d", i);


    return 0;
}