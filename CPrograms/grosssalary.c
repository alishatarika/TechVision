// question1(a) -Ramesh s basic salary ----
#include <stdio.h>
int main()
{
    int salary;
    printf("Enter a salary of ramesh ");
    scanf("%d", &salary);
    float dailyallowance = (400/100)*salary;
    printf(" \n daily allowance is %f", dailyallowance);
    float houserent;

    houserent = (20/100)*salary;
    printf(" \n house rent is %f", houserent);
    int grosssalary = salary +dailyallowance +houserent;
    printf(" \n gross salary is %d", grosssalary);
    return 0;
}