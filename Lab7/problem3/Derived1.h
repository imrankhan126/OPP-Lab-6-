#ifndef DERIVED1_H
#define DERIVED1_H

#include "prob3.h"

class Derived1 : public Base {
private:
    int b;
public:
    Derived1(int x, int y);
    Derived1(const Derived1& obj);              // Copy Constructor
    Derived1& operator=(const Derived1& obj);   // Assignment Operator
    void print();
    ~Derived1();
};

#endif
