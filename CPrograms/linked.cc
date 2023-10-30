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
    temp->age = 89;
    temp->link=NULL;
    while (current->link != nullptr)
    {
        current = current->link;
    }
    current->link = temp;


    current = start;
    while (current != nullptr)
    {
        cout << "Age: " << current->age << endl;
        current = current->link;
    }

    cout << "search: ";
    cin >> search;
    current = start;
    while (current != nullptr)
    {
        if (current->age == search)
        {
            flag = 1;
            break;
        }
        current = current->link;
    }

    if (flag == 1)
    {
        cout << "Age found: " << current->age << endl;
    }
    else
    {
        cout << "Age not found" << endl;
    }

    return 0;
}
