#include <stdio.h>

int main()
{
    int factorial = 1;
    int num;
    int i;
    printf("Enter a number to find its factorial :");
    scanf("%d" , &num);

    
    for(i=1;i<=num ;i++)
     factorial =factorial * i;
    
    printf("%d=%d \n", num , factorial);

    return 0;
}