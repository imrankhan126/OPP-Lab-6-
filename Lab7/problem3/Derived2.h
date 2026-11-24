#ifndef DERIVED2_H
#define DERIVED2_H

#include "Derived1.h"

class Derived2 : public Derived1 {
private:
    int c;
public:
    Derived2(int x, int y, int z);
    Derived2(const Derived2& obj);              // Copy Constructor
    Derived2& operator=(const Derived2& obj);   // Assignment Operator
    void setValue(int z);                       // Value set karne ke liye
    void print();
    ~Derived2();
};

#endif
