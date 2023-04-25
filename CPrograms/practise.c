#include <stdio.h>
int add(int a[]);

int main()
{
    int a[] = {1,2,4,6,1};
    int sum=add(a);
    printf("%d",sum);
return 0;

}
int add(int a[])
{
    int sum = 0;
    for (int i=0; i<=4; i++)
    {
        sum = sum + a[i];
    }
    
    return sum;
}