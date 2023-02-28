#include <stdio.h>
int main()
{
    int n;
    int i=2;
    scanf("%d",&n);
    while(n>1){
        if(n%i==0){
            printf("%d ",i);
            n=n/i;
        }
        i++;
    }
    return 0;
}