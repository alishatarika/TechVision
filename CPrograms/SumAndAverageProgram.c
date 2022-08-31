#include<stdio.h>
int main()
{
char cont = 'y';
int n;
int sum =0;

while(cont == 'y')
{
printf("Enter a number  ");
scanf("%d", &n);
 
printf("Do you want to continue (y/n) ");
scanf(" %c" , &cont);

}


}