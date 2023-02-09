#include<stdio.h>
int main()
{
    int a;
    int b;
    int calculation;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("Enter the value of b: ");
    scanf("%d",&b);
    printf("Enter the required condition ");
    scanf("%d",&calculation);
    switch(calculation){
    case 1 :printf("sum is %d",a+b);
       break ;
       case 2 :printf("sub is %d",a-b);
       break ;
       case 3 :printf("product is %d",a*b);
       break ;
       case 4 :printf("division is %d",a+b);
       break ;
       case 5 :printf(" remaider is  %d",a%b);
       break ;
       
    }
    return 0;
}