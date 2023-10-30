
#include<iostream>
using namespace std;

class student
{
public:
    int roll_no;
    string name;
    int contact_no;
    string city;

public:
    int input()
    {
        cout << "Enter your name ";
        cin >> name;
        cout << "Enter your roll_no ";
        cin >> roll_no;
        cout << "Enter your contact_no ";
        cin >> contact_no;
        cout << "Enter your city ";
        cin >> city;
    }
    int output()
    {

        cout << "Name of student is " << name << endl;
        cout << "Roll_no of student is " << roll_no << endl;
        cout << "Contact_no of student is " << contact_no << endl;
        cout << "City of student is " << city << endl;
    }
};
int main()
{
    student s1;
    s1.input();
    s1.output();
    return 0;
}
