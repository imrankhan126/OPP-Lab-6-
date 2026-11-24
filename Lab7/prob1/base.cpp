#include <iostream>
#include "base.h"
using namespace std;
Base::Base() : baseData{0} {
    cout << "Base()" << endl;
}
Base::~Base() {
    cout << "~Base()" << endl;
}
Derived1::Derived1() : derived1Data{0} {
    cout << "Derived1()" << endl;
}
Derived1::~Derived1() {
    cout << "~Derived1()" << endl;
}
Derived2::Derived2() : derived2Data{0} {
    cout << "Derived2()" << endl;
}
Derived2::~Derived2() {
    cout << "~Derived2()" << endl;
}