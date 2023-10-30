#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);

    // Assume n is prime initially
      for(int j=2;j<=n;j++){
      int isPrime = 1; 
    for (int i = 2; i <j; i++) {
    
        if (j % i == 0) {
            isPrime = 0;
            break; 
        }
        
        }
        if(isPrime != 0)
        {
            printf("%d",j);
        }
    }
     


    return 0;
}
