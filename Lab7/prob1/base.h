#ifndef BASE_H
#define BASE_H

class Base {
private:
    int baseData;
public:
    Base();
    ~Base();
};

class Derived1 : public Base {
private:
    int derived1Data;
public:
    Derived1();
    ~Derived1();
};

class Derived2 : public Derived1 {
private:
    int derived2Data;
public:
    Derived2();
    ~Derived2();
};

#endif
