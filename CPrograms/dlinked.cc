#include <iostream>
using namespace std;

struct node
{
    int age;
    node *link;
};

int main()
{
    node *start, *ptr, *q, *temp;
    start = new node;
    ptr = new node;
    q = new node;
    temp = new node;

    start->age = 9;
    ptr->age = 78;
    q->age = 9;
    start->link = ptr;
    ptr->link = q;
    q->link = nullptr;

    node *current;
    current = start;
     temp=start;
     cout
    while(current->link != NULL)
    {  
        temp=current;
       current= current->link;
    }
    temp->link=NULL;
   
    current = start;

    while (current != nullptr)
    {
        cout << "Age: " << current->age << endl;
        current = current->link;
    }

    return 0;
}
