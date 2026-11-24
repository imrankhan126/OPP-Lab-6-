#ifndef DERIVED1_H
#define DERIVED1_H

#include "prob2.h"

class Derived1 : public Base {
private:
    int b;
public:
    Derived1(int x, int y);
    void print();
    ~Derived1();
};

#endif
