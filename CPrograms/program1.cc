#include<iostream>
using namespace std;
int main()
{
   int n,a[30],sum=0;
   cout<<"Enter the number of elements ";
   cin>>n;
   cout<<"Enter "<<n<<" elements ";
  for(int i =1;i<=n;i++)
  {
     cin>>a[i];
     sum=sum+a[i];
  }
     cout<<"Sum of elements is "<<sum<<endl;
    return 0;
}




