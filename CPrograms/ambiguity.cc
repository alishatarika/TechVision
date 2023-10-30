#include<iostream>
using namespace std;
class student
{
    public:
   
    void display()
    { int a=8;
cout<<a;
    }
};

class student1
{
    public:
    
    void display()
    {int a=5;
cout<<a;
    }
};
class teacher:public student, public student1
{
    public:
  
    void display()
    {
          int a=15;
cout<<a;
    }
};
int main()
{
 teacher t;
 t.display();  
 t.student::display();
 t.student1::display();

}
