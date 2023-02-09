#include<stdio.h>

void add();

int main()
{
   int n;
   int calculation;
   printf("How many numbers of calculations you want to perform? ");
   scanf("%d",&n);
   printf("Enter 1 for addition");
   printf("Enter 2 for subtraction");
   printf("Enter 3 for multiplication");
   printf("Enter 4 for division");
   printf("Enter 5 for remainder");
   printf("Enter 6 for square of number");
   printf("Enter 7 for cube of a number");
   scanf("%d",&n);
   switch(calculation)
   {
    case 1: add();
    break;

   }
   void add(){
    int sum=0;
    for(int i =0;i<=n;i++)
    {
      scanf("%d",&i);
      sum = sum+i;

    }
    printf("%d",sum);
    
   }
    return 0;
}