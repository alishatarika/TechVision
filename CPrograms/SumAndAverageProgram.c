#include <stdio.h>
int main()
{
    char cont = 'y';
    int n;
    int i = 0 ;
    int sum = 0;
    float average;
    while (cont == 'y')
    {
        printf("Enter a number  ");
        scanf("%d", &n);
        i++;
        
        sum = sum + n;
         average = sum /i ;
        
        
        printf("Do you want to continue (y/n) ");
        scanf(" %c", &cont);
        
    }
    
   
    
    
    printf(" sum of number is %d", sum);
    printf(" average of number is %f" , average);
     
    return 0;
}