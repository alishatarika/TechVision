
#include <iostream>
using namespace std;
int main()
{
	int arr[10], element, n, i, k;
	cout << "Enter the size of an array ";
	cin >> n;
	cout << "Enter " << n << " elements ";
	for (i = 1; i <= n; i++)
	{
		cin >> arr[i];
	}
	element = arr[n];
	n = n - 1;
	cout << "Array after insertion is ";
	for (i = 1; i <= n; i++)
	{
		cout << arr[i] << endl;
	}
	return 0;
}
