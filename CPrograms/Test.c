#include <stdio.h>
int main()
{
    int n ;
    printf("Enter a number  ");
    scanf("%d", &n);
    
    int i;
    int flag = 0 ;
    for (i = 2; i < n; i++)
     
    {
        if (n % i == 0)
        flag = 1;
        
    }
    if (flag == 1)
    
        printf("Number is nonprime");
        

    else
        printf("Number is prime");

    return 0;
}