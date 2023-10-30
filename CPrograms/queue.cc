#include<iostream>
using namespace std;

#define maxstack 10
int arr[15] = {3, 6, 5, 4, 3, 2, 4, 5};

class queue
{
public:
    int front = 0;
    int rear = 7;

    void push(int value)
    {
        if (rear == maxstack - 1)
        {
            cout << "Queue overflow" << endl;
        }
        else
        {
            rear++;
            arr[rear] = value;
        }
    }

    void pop()
    {
        if (front > rear)
        {
            cout << "Queue underflow" << endl;
        }
        else
        {
            // Shift elements to the left to remove the front element
            for (int i = front; i <=rear; i++)
            {
                arr[i] = arr[i + 1];
            }
            rear--;
        }
    }
};

int main()
{
    queue t;

    t.push(14);
    t.pop();
    t.pop();
    t.pop();

    for (int i = 0; i <= t.rear; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}
