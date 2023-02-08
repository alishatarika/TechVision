// to check how increment and decrement take place in pointer
#include<stdio.h>
int main()
{
    int age; // declare variable 
    int *old =&age;
    printf("%d \n",old);
     old++;
  printf("%d",old);
  return 0;
}