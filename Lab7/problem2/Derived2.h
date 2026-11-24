#ifndef DERIVED2_H
#define DERIVED2_H

#include "Derived1.h"

class Derived2 : public Derived1 {
private:
    int c;
public:
    Derived2(int x, int y, int z);
    void print();
    ~Derived2();
};

#endif