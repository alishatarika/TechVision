#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
  srand(time(NULL));
  int r = rand() % 20;
  int n;

  for (int i = 1; i <= 5; i++)
  {
    scanf("%d", &n);

    if (n == r)
    {
      printf("you won\n");
    }
    else
    {
      printf("you loss\n");
    }
  }
  printf("number is %d",r);
  return 0;
}