//friend class
// #include<iostream>
// using namespace std;
// class myclass;
// class D{public:
//  int a=9;
//  friend class myclass;
// };
// class myclass{
//     public:
//     int b=5;
//     int sum()
//     {
//         cout<<D().a+b;
//     }

// };
// int main()
// {
//     myclass t;
//     t.sum();}
// friend function
// #include<iostream>
// using namespace std;

// class D{
//     private:
//     int a=9;
//     friend int sum(D A);

// };


// int sum(D A)
//  {    int b=5;
//     cout<<D().a+b;
//     }


// int main()
// {
//     D t;
//     sum(t);
// }
//single inheritance
// #include<iostream>
// using namespace std;

// class myclass{
//     protected:
//     int a=9;
//     public:
//     int b=7;


// };
// class derived:private myclass{public:
// int sum(){
// cout<<a+b;}
// };
// int main(){
//     derived d;
//     d.sum ();

// }
//multipel inheritance
// #include<iostream>
// using namespace std;

// class myclass{
//     protected:
//     int a=9;
//     public:
//     int b=7;


// };
// class N{
//     public:
//     int r=8;
//     int sub()
//     {
//         int w=3;
//         cout<<r-w;
//     }
// };
// class derived:private myclass,public N{public:
// int sum(){
// cout<<a+b;}
// };
// int main(){
//     derived d;
//     d.sum ();
//     d.sub();

// }
//multilevel
// #include<iostream>
// using namespace std;

// // Base class
// class Animal {
// public:
//     void eat() {
//         cout << "Animal is eating" << endl;
//     }
// };

// // Intermediate class inheriting from Animal
// class Mammal : public Animal {
// public:
//     void walk() {
//         cout << "Mammal is walking" << endl;
//     }
// };

// // Derived class inheriting from Mammal
// class Dog : public Mammal {
// public:
//     void bark() {
//         cout << "Dog is barking" << endl;
//     }
// };

// int main() {
//     Dog myDog;
//     myDog.eat();   // Inherited from Animal
//     myDog.walk();  // Inherited from Mammal
//     myDog.bark();  // Defined in Dog class
    
//     return 0;
// }

//heirachial inheritance
// #include <iostream>
// using namespace std;

// // Base class
// class Shape {
// public:
//     void draw() {
//         cout << "Drawing a shape" << endl;
//     }
// };

// // Derived class 1
// class Circle : public Shape {
// public:
//     void drw() {
//         cout << "Drawing a circle" << endl;
//     }
// };

// // Derived class 2
// class Rectangle : public Shape {
// public:
//     void draw() {
//         cout << "Drawing a rectangle" << endl;
//     }
// };

// int main() {
//     Circle circle;
//     Rectangle rectangle;
    
//     circle.draw();     // Calls Circle's draw method
//     rectangle.draw();  // Calls Rectangle's draw method
    
//     return 0;
// }
#include<iomanip>
#include<iostream>
using namespace std;

int main()
{
    int m=34;
   
    cout<<m<<setw(10)<<m;

   

}
