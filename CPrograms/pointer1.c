#include <stdio.h>
int main()
{
    int i;

    printf("enter value");
    scanf("%d", &i);
    int *ptr = &i;
   
    printf("%d", ptr);
    ptr++;
    printf("%d", ptr);
    return 0;
}