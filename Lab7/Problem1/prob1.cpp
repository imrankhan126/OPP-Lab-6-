#include <iostream>
#include "prob1.h"
using namespace std;

Base::Base() {
    a = 0;
    cout << "Base" << endl;
}

Base::~Base() {
    cout << "~Base" << endl;
}
