#include <iostream>
#include<vector>
using namespace std;
// function will return  result 
// if montonic result will return 1 else 0
bool isMonotonicArray(vector<int>array,int n)
{
    int flag=1,fla=1;
    bool result=false;
     for (int i = 0; i < n - 1; i++)
    {
        if (array[i] > array[i + 1])
        {

            flag = 0;
        }
        if (array[i] < array[i + 1])

        {
            fla = 0;
        }
    }
     if (flag || fla)
    {
        result= true;
    }
    return result;

}

int main()
{
    vector<int>array;
    int n;
    int num;
    cout<<"enter number of elements ";
    cin>>n;
    cout << "Enter " << n << " elements: ";
    for(int i=0;i<n;i++)
    {   cin>>num;
        array.push_back(num);
    }
    bool result=isMonotonicArray(array,array.size());
    cout<<"result";
    cout<<result;
    return 0;
}
