#include<stdio.h>
int main()
{
    int n,c; //number of rows
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        c=1; // initialize c to 1 for every row
        for(int j=1;j<=(n-i);j++)
        {
            printf(" ");
        }
        for(int k=0;k<=i;k++)
        {
            printf("%3d",c);
            c = c * (i-k) / (k+1); // calculate next binomial coefficient
        }
        printf("\n");
    }
    return 0;
}
