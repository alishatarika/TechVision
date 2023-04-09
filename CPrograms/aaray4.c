#include<stdio.h>
int main()
{ 
    int rows,columns,product[6][10];
    int i,j;
    printf("Enter a table \n   ");
    for(j=1;j<=10;j++)
      
        printf("%4d",j);
        printf("\n");
        printf("-------------------------------\n");
    
    for(i=1;i<=5;i++)
    {
        rows=i;
        printf("%2d|",i);
    
    for(j=1;j<=10;j++){
        columns=j;
        product[i][j]=i*j;
        printf("%4d",product[i][j]);
    }
    printf("\n");
    }
    return 0;
}