#include <iostream>
#include "Derived1.h"
using namespace std;

Derived1::Derived1() {
    b = 0;
    cout << "Derived1" << endl;
}

Derived1::~Derived1() {
    cout << "~Derived1" << endl;
}
