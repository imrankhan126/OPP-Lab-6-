#include <iostream>
#include "prob3.h"
using namespace std;

Base::Base(int x) : a(x) {
    cout << "Base" << endl;
}

Base::Base(const Base& obj) : a(obj.a) {
    cout << "Base Copy Constructor" << endl;
}

Base& Base::operator=(const Base& obj) {
    cout << "Base::operator=" << endl;
    if (this != &obj) {
        a = obj.a;
    }
    return *this;
}

void Base::print() {
    cout << "Base::print" << endl;
    cout << "Base value: " << a << endl;
}

Base::~Base() {
    cout << "~Base" << endl;
}
