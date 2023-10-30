#include<iostream>
using namespace std;
int main()
{    
    // 123454321
    // 1234 4321
    // 123   321
    // 12     21
    // 1       1  
    for(int i=5;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j;
        }
        for(int u=5-i;u>=1;u--)
        {
                cout<<" ";
        }
        for(int u=5-i;u>1;u--)
        {
            
                cout<<" ";
        }
        for(int k=i;k>=1;k--)
        {
            if(k==5)
            {
                continue;
            }
            cout<<k;
        }

        cout<<endl;
    }
    for(char i=71;i>=65;i--)
    {
        for(char j=65;j<=i;j++)
        {
            cout<<j;
        }
        for(char u=71-i;u>=1;u--)
        {
                cout<<" ";
        }
        for(char u=71-i;u>1;u--)
        {
            
                cout<<" ";
        }
        for(char k=i;k>=65;k--)
        {
            if(k==71)
            {
                continue;
            }
            cout<<k;
        }

        cout<<endl;
    }
    //    1 
    //   232
    //  34543
    // 4567654
    //567898765
    int count=1;
     for(int i=1;i<=5;i++)
     {
        for(int j=1;j<=5-i;j++)
        {
            cout<<" ";
        }
        for(int k=i;k<=2*i-1;k++)
        {
            
            
           cout<<k;
        }
         for(int k=2*i-2;k>=i;k--)
        {
            
            
           cout<<k;
        }
cout<<endl;

        
     }
}