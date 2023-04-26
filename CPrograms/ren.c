#include <stdio.h>

int main() {
   int i, j;
   int w=5;
   int k;
   for (i = 5; i >= 1; i--) 
   {
    k=w;
     for(int j=1;j<=i;j++)
     {
      
        printf("%d",k);
        k++;
     }
     w++;
     printf("\n");
   }

   return 0;
}
