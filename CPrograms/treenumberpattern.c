#include<stdio.h>
int main()
{

    int n;
    int i,j,k;
    int l=1;
    
    printf("Enter a number ");
    scanf("%d",&n);
    //     1
    //    2 3
    //   4 5 6
    //  7 8 9 10
    for( i = 1; i <= n; i++)
    {
      for(k=n; k>i; k--)
        {
        printf(" ");
        }
        
        for(j=1; j<=i ;j++)
        {
         l++;
        printf(" %d",l);
        }
        

        printf("\n");
        
    }
    return 0;
}