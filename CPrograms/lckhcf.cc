#include<iostream>
using namespace std;
int main()
{
    int n=56;
    int n1=27;
    int i=2;
    int lcm=1;
    int hcf=0;
    while(i<=n1)
    {
        if(n%i==0 || n1%i==0)
        {
            if(n%i==0)
            {
                n=n/i;
            }
             if(n1%i==0)
            {
                n1=n1/i;
            }
              lcm=i*lcm;
        }
        else 
        {
            i++;
        }
        
    }
    cout<<lcm;
    for(int i=1;i<=n1;i++)
    {   
        if(n%i==0&&n1%i==0)
         hcf=i;
    }
    cout<<hcf;
    return 0;
}