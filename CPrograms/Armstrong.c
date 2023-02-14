#include<stdio.h>
int main()
{
    int n;
    printf("enter three digit number ");
    scanf("%d",&n);
    
    int w=n;
    int i=w%10;
    //153%3=3
    
    int r=w/10;  
    //153/10=15
    int j=r%10;
    //15%10=5
    int k=r/10;
    //r%10=1
    if(n==(k*k*k)+(j*j*j)+(i*i*i)){
        printf("number is armstrong %d",n);
    }
    else 
    {
      printf("Number is not armstrong");
    }
    return 0;
}