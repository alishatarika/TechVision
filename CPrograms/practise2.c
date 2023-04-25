#include <stdio.h>
int total0(int a[]);
int main()
{
    int a[] = { 1,0,0,4,5,9,0,5 };
    int count=total0(a);
    
    printf("total number of 0 is %d ",count);
    return 0;
}
int total0(int a[])
{
    int count = 0;
    for (int i = 0; i <= 6; i++)
    {

        if (a[i] == 0)
        {
            count++;
        }
    }
    return count;
}
