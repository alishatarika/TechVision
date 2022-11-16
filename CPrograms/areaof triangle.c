#include <stdio.h>
#include<math.h>
int main()

{
    int sidea,sideb,sidec;
    printf("Enter value of sidea ");
    scanf("%d", &sidea);
    printf("Enter value of sideb ");
    scanf("%d", &sideb);
    printf("Enter value of sidec ");
    scanf("%d", &sidec);
    int side;
    side=(sidea+sideb+sidec)/2;
    float area = sqrt(side*(side-sidea)*(side-sideb)*(side-sidec));
    printf(" area of triangle is %f",area);
    return 0;
}