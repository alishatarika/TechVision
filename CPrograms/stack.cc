#include <iostream>
using namespace std;
#define maxstack 10
class stck
{
    int stack[maxstack];
    static int top;

public:
    void push()
    {
        if (top == maxstack)
        { 
            cout << "Stack is overflow ";
        }
        else
        {
            cin >> stack[top];
            top=top+1;
        
        }
    }
    void pop()
    {
        top = top - 1;
        cout << stack[top] << " ";
        if(top==2)
        {
            cout<<stack[2]<<"al";
        }
    }
};
int stck::top;
int main()
{
    int n, i;
    stck p;
    cout << endl << "Enter number of elements in stack ";
    cin >>n;
    for (int i = 1; i <= n; i++)
    {
        p.push();
    }
    cout << "Pop elements from stack ";
    for (i = 1; i <=n ; i++)
    {
        p.pop();
    }

}
