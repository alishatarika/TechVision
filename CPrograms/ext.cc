#include<iostream>
using namespace std;
int main()
{
    for(int i=0;i<=4;i++)
    {
        
        if(i==3)
        {
            continue;
        }
        cout<<i;
    }
}