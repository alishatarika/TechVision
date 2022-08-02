#include <stdio.h>

int main()
{
    int number;
    int i;
    int flag = 0;

    printf("Enter a number ");
    scanf("%d", &number);

    
        for (i = 2; i < number; i++) 
        {
        
    
        if (number % i == 0)
        {
            flag = 1;
            break;
        }
        }
        if (flag == 1)
        {
            printf("number is nonprime \n", number);
        }

        else
        {
            printf("number is prime \n", number);
        }
    
    return 0;
     }