#include<stdio.h>
int main()
{
    int a[5]={4,6,7,8,9};
    int first=0;
    int last=4;
    int mid=(first+last)/2;
    int n;
    scanf("%d",&n);
    while(first<=last)
    {
        if(a[mid]<n)
        {
             first=mid+1;
             mid=(first+last)/2;
        }
        else if (a[mid]==n)
        {
            printf("element found at %d",mid);
            break;
        }
         else
        {
             last=last-1;
             mid=(first+last)/2;
        }
        if(first>last){
            printf("element not found");
        }

    }

}