#include <stdio.h> 
/**
 * Enter a number : 4
 * 4 * 1 = 4
 * 4 * 2 = 8
 * 4 * 3 = 12
 *
 * */

int multiple(int a, int b)
{
    return a * b;
}

void printTableText(int index, int table)
{
    printf(" %d * %d = %d \n", table, index, multiple(table, index));
}

int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);

    printTableText(1, n);
    printTableText(2, n);
    printTableText(3, n);
    printTableText(4, n);
    printTableText(5, n);
    printTableText(6, n);
    printTableText(7, n);
    printTableText(8, n);
    printTableText(9, n);
    printTableText(10, n);

    return 0;
}
