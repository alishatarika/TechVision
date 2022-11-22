#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number ");
    scanf("%d",&n);
    //     1
    //    2 3
    //   4 5 6
    //  7 8 9 10
    for(int i=1;i<=n;i++)
    {
        for (int j=n;j>i;j--)
        {
        
        printf(" ");
        }
        
        for(int k=1;k<=i;k++)
        printf("%d",i);
        printf("\n");
        
    }
    return 0;
}