#include <stdio.h>
int main()
{
    int n,r;
    scanf("%d", &n);
     if (n >= 100)
        {
            r= n / 100;
            printf("notes for 100 %d \n", r);
            n= n % 100;
        }

        if (n >= 50)
        {
            r= n / 50;
            printf("notes for 50 %d \n", r);
            n = n % 50;
        }
        if (n >= 10)
        {
            r = n / 10;
            printf("notes for 10 %d \n", r);
            n = n % 10;
        }
        if (n >= 5)
        {
            r = n / 5;
            printf("notes for 5 %d \n", r);
            n = n % 5;
        }
        if (n >= 2)
        {
            r= n / 2;
            printf("notes for 2 %d \n", r);
            n = n % 2;
        }

        printf("notes for 1 %d \n", n);
    
}