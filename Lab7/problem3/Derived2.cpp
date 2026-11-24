#include <iostream>
#include "Derived2.h"
using namespace std;

Derived2::Derived2(int x, int y, int z) : Derived1(x, y), c(z) {
    cout << "Derived2" << endl;
}

Derived2::Derived2(const Derived2& obj) : Derived1(obj), c(obj.c) {
    cout << "Derived2 Copy Constructor" << endl;
}

Derived2& Derived2::operator=(const Derived2& obj) {
    cout << "Derived2::operator=" << endl;
    if (this != &obj) {
        Derived1::operator=(obj); // Parent class ka assignment operator call kiya
        c = obj.c;
    }
    return *this;
}

void Derived2::setValue(int z) {
    cout << "Derived2::setValue" << endl;
    c = z;
}

void Derived2::print() {
    cout << "Derived2::print" << endl;
    Derived1::print();
    cout << "Derived2 value: " << c << endl;
}

Derived2::~Derived2() {
    cout << "~Derived2" << endl;
}
