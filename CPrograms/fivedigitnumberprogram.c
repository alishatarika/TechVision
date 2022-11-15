//if a five digit number is input through the keyboard,write a program to calculate the sum of its digits
#include<stdio.h>
int main()
{
 int number;
 int remainder;
 printf("Enter a five digit number ");
scanf("%d", &number);

int sum = 0;
remainder =number%10;
sum=sum+remainder;
number=number/10;
remainder =number%10;
sum=sum+remainder;
number=number/10;
remainder =number%10;
sum=sum+remainder;
number=number/10;
remainder =number%10;
sum=sum+remainder;
number=number/10;
remainder =number%10;
sum=sum+remainder;
number=number/10;

printf("%d",sum);



return 0;
}
