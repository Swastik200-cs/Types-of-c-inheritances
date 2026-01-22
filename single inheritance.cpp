#include <iostream>
using namespace std;

// Base class
class Vehicle {
public:
    void run() {
        cout << "Vehicle is running";
    }
};

// Derived class
class Bike : public Vehicle {
};

int main() {
    Bike b;
    b.run();   // inherited function
    return 0;
}
