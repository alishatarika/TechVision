#include<stdio.h>
void square(int n);
int main()
{
    int number;
    
    printf("enter a number ");
    scanf("%d",&number);
    square(number);
    printf("number is %d",number);
    return 0;

}
void square (int n)
{
    n=n*n;
    printf("square is %d",n);
}