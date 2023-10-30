#include <iostream>
#include <vector>
using namespace std;
vector<int> twoSum(vector<int> &nums, int target)
{

    vector<int> target1;
    vector<int> target2;

    for (int i = 0; i < nums.size() -1; i++)
    {
      for(int j=i+1;j<nums.size();j++)
        if (nums[i] + nums[j] == target)
        {
            
            target1.push_back(i);
            target1.push_back(j);
            
            return target1;
        }
    }
    return target1;
}

int main()
{
    vector<int> elements;
    int num;
    int n;
    vector<int> targetelement;
    cout << "How many elements you want to enter ";
    cin >> n;
    int target;
    cout << "Enter elements ";
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        elements.push_back(num);
    }
    cout << "Enter a value to want to target ";
    cin >> target;

    vector<int> result = twoSum( elements,target);

    for (int index : result)
    {
        cout << index << " ";
    }
}