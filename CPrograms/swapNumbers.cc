#include<iostream>
using namespace std;
int swap(int  *x,int *y);
int main()
{
	int a,b;
	cout<<"Enter the value of a ";
	cin>>a;
	cout<<"Enter the value of b ";
	cin>>b;
	swap(&a,&b);
	cout<<"After swapping value of a is "<<a<<" and value of b is "<<b;	
}
int swap(int *x,int *y)
{
	int t;
	 t=*x;
	*x=*y;
	*y=t;
}
