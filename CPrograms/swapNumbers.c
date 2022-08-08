#include <stdio.h>

int main()
{
    int a;
    int b;
    int c;
    

    printf("Enter the value of a ");
    scanf("%d", &a);

    printf("Enter the value of b ");

    scanf("%d", &b);
     //a = 2 , b=3 , c=0

    c = a ;
    //a = 2 ,b =3 , c =2
    a = b ;
    // a = 3 ,b = 3 , c = 2
    b = c;
    // a = 3 , b = 2 , c =2
    printf("Value of a is %d " , a);

    printf("Value of b is %d " , b);


    


    return 0;
}