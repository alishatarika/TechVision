#include <stdio.h>
int main()
{
    int price[3];
    printf("Enter price of items ");
    scanf("%d", &price[0]);
    scanf("%d", &price[1]);
    scanf("%d", &price[2]);
    printf("total price of 1 %f \n", price[0]+(0.18*price[0]));
    printf("total price of 2 %f\n", price[1]+(0.18*price[1]));
    printf("total price of 3 %f \n", price[2]+(0.18*price[2]));
    return 0;
}