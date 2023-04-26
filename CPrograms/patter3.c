#include <stdio.h>
int main()
{

  // 123456789
  // 1234 6789
  // 123   789
  // 12     89
  // 1       9
  int w=5;
int y;
  for (int i = 5; i >= 1; i--)
  {
    int count = 1;

    for (int r = 1; r <= i; r++)
    {
      if (r == 5)
      {
        continue;
      }

      printf("%d", count);
      count++;
    }

    for (int j = 1; j <= (2 * (5 - i)) - 1; j++)
    {
      printf(" ");
    }
    y=w;
    for(int k=1;k<=i;k++)
    {
      printf("%d",y);
      y++;
    }
    w++;
    printf("\n");
  }

  return 0;
}