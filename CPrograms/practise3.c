#include<stdio.h>
int NumberOfOdds(int a[]);
int main()
{
    int a[]={1,2,3,4,5,6};
int sum = NumberOfOdds(a);
printf("%d",sum);
return 0;
}

int NumberOfOdds(int a[])
{
    int  SumOFOdd=0;
   for(int i=0;i<6;i++)
   {
      if (a[i]%2 != 0)
      {
         SumOFOdd++;
      }

   }
return SumOFOdd;
}