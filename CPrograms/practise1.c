#include <stdio.h>
int numberOfPrime(int a[]);
int main()
{  
    int a[] = {2, 3, 7, 8, 5, 9,21};
    int sum = numberOfPrime(a);
    printf("%d", sum);
    return 0;
}
int numberOfPrime(int a[])
{

    int prime = 0;
        int j=0;
    for (int i = 0; i <= 6; i++)
    {
    
        if(a[i]>2)
        {
        j=a[i];
        }
        for(int k=3;k<j;k++){
            if(j % k != 0){
                
                prime++;
                break;
               
            }
           
        }
       
    }
    return prime;
}