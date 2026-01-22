#include <iostream>
using namespace std;

class A {
public:
    void showA() {
        cout << "Class A\n";
    }
};

class B : public A {
};

class C : public B {
};

int main() {
    C obj;
    obj.showA();
    return 0;
}
