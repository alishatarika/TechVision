#include <stdio.h>
int main()
{
    int a;
    int b;
    printf("a ");
    scanf("%d", &a);
    printf("b ");
    scanf("%d", &b);
    {
        if (b > a)
            printf("%d", a);
             else 
              printf("%d", b);
    }
    return 0;
}