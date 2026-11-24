#include <iostream>
#include "Derived1.h"
using namespace std;

Derived1::Derived1(int x, int y) : Base(x), b(y) {
    cout << "Derived1" << endl;
}

Derived1::Derived1(const Derived1& obj) : Base(obj), b(obj.b) {
    cout << "Derived1 Copy Constructor" << endl;
}

Derived1& Derived1::operator=(const Derived1& obj) {
    cout << "Derived1::operator=" << endl;
    if (this != &obj) {
        Base::operator=(obj); // Parent class ka assignment operator call kiya
        b = obj.b;
    }
    return *this;
}

void Derived1::print() {
    cout << "Derived1::print" << endl;
    Base::print();
    cout << "Derived1 value: " << b << endl;
}

Derived1::~Derived1() {
    cout << "~Derived1" << endl;
}
