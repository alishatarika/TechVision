#include<stdio.h>
int main()
{
    int p,l,s,c;
    printf("Enter cost price of an item ");
    scanf("%d",&c);
    printf("Enter selling price of an item ");
    scanf("%d",&s);
    if(c<s)
    {
    printf("profit on item is is %d" ,s-c);
    }
    else
    {
    printf("loss on item is %d ",c-s);
    }
    return 0;
    }