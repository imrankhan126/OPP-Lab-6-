#include <iostream>
#include "prob2.h"
using namespace std;

Base::Base(int x) : a(x) {
    cout << "Base" << endl;
}

void Base::print() {
    cout << "Base::print" << endl;
    cout << "Base value: " << a << endl;
}

Base::~Base() {
    cout << "~Base" << endl;
}
