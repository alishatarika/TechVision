#include<stdio.h>
int fib(int n);
int main()
{
    int n;
    printf("enter a number");
    scanf("%d",&n);
    printf("%d",fib(n));
}
    
//0 1 1 2 3 5 8
int fib(int n)
//6
// fib(4)+fib(5)
//fib(3)+fib(2)+fib(4)+fib(3)
//fib(2)+fib(1)+fib(1)+fib(0)+fib(3)+fib(2)+fib(2)+fib(1)
//1+1+1+fib(2)+fib(1)+fib(1)+fib(1)+1
//8
//n=2

{
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }

    int fib1=fib(n-1);
    int fib2=fib(n-2);

    int fibn=fib1+fib2;
   
   


    
    return fibn;
}