#include <iostream>
#include "Derived2.h"
using namespace std;

Derived2::Derived2() {
    c = 0;
    cout << "Derived2" << endl;
}

Derived2::~Derived2() {
    cout << "~Derived2" << endl;
}
