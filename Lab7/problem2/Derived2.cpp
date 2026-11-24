#include <iostream>
#include "Derived2.h"
using namespace std;

Derived2::Derived2(int x, int y, int z) : Derived1(x, y), c(z) {
    cout << "Derived2" << endl;
}

void Derived2::print() {
    cout << "Derived2::print" << endl;
    Derived1::print();
    cout << "Derived2 value: " << c << endl;
}

Derived2::~Derived2() {
    cout << "~Derived2" << endl;
}
