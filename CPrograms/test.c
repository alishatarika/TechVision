#include <stdio.h>
int main()
// n =11
// 1
// 2 3 
// 4 5 6
// 7 8 9 10
//11
{
    int n;
    int i;
    int j;
    int count = 1;
    printf("Enter a number ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)

    {
        for (j = 1; j <= i ; j++)
        {

            printf("%d",count );
            count++;


        } 
        printf(" \n");
    }
    return 0;
}