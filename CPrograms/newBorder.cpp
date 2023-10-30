#include<iostream>
using namespace std;
int main()
{
    for (int i = 0; i < 20; i++)
    {
        for (int j = 0; j < 30; j++)
        {
            if(j==0 || i==0 || j==29 || i==19)
            {
                cout<<"#";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
        
    }
    return 0;
}  