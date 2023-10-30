#include <iostream>
using namespace std;

struct node
{
    int age;
    node* link;
};

int main()
{
    int search, flag = 0;
    node *start, *ptr, *q;
    start = new node;
    ptr = new node;
    q = new node;

    start->age = 9;
    ptr->age = 78;
    q->age = 9;
    start->link = ptr;
    ptr->link = q;
    q->link = nullptr;

    node *current = start;
    node *temp;
    temp = new node;
    
    int pos;
    cout << "Enter the position to insert the new age: ";
    cin >> pos;

    int count = 1;
    current = start;

    while (current != nullptr)
    {
        if (count == pos - 1) // Insert before the specified position
        {
            temp->age = 89;
            temp->link = current->link; // Update the links
            current->link = temp;
            break;
        }
        current = current->link;
        count++;
    }

    current = start;

    while (current != nullptr)
    {
        cout << "Age: " << current->age << endl;
        current = current->link;
    }

    return 0;
}
