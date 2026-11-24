#include <iostream>
#include "Derived1.h"
using namespace std;

Derived1::Derived1(int x, int y) : Base(x), b(y) {
    cout << "Derived1" << endl;
}

void Derived1::print() {
    cout << "Derived1::print" << endl;
    Base::print();
    cout << "Derived1 value: " << b << endl;
}

Derived1::~Derived1() {
    cout << "~Derived1" << endl;
}
