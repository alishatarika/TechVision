#include<stdio.h>
int main()
{
    int n;
    int c=1;
    
    printf("enter a number");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=n;j>i;j--){
            printf(" ");}
            for(int k= 1; k<=i;k++)
        {
        
            printf(" %d ",c);
            c++;
            
            
            
        }
        
        printf("\n");
        
    }
    return 0;
}