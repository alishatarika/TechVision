#include <iostream>
using namespace std;

class B {
public:
    int sub(int a, int b) {
        return a - b;
    }
};

class A {
public:
    int a, b;
    B t1;

    int sum(int a, int b) {
        return a + b;
    }
};

int main() {
    A t;
    t.a = 4;
    t.b = 6;

    int result_sum = t.sum(t.a, t.b);
    cout << "Sum: " << result_sum << endl;

    int result_sub = t.t1.sub(t.a, t.b);
    cout << "Subtraction: " << result_sub << endl;

    return 0;
}
