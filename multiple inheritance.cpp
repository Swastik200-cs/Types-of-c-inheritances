#include <iostream>
using namespace std;

// First base class
class A {
public:
    void showA() {
        cout << "Class A";
    }
};

// Second base class
class B {
public:
    void showB() {
        cout << "\nClass B";
    }
};

// Derived class
class C : public A, public B {
};

int main() {
    C obj;
    obj.showA();
    obj.showB();
    return 0;
}
