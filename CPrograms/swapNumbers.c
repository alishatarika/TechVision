#include <stdio.h>

int main()
{
    int a;
    int b;
    int c;

    printf("Enter the value of a ");
    scanf("%d" , &a);

    printf("Enter the value of b ");

    scanf("%d" , &b);
      
    c = a;
    printf("b = %d " ,c);
    c = b;
    printf("a = %d " ,c);

    


    return 0;
}