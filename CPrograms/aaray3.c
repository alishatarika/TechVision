// to check how increment and decrement take place in pointer
#include<stdio.h>
int main()
{
    int age = 23; // declare variable 
    int *old =&age;

  // we can subtract two pointers
int age1 = 45;
int *young =&age1;
printf("%d",young-old);
  return 0;
}
