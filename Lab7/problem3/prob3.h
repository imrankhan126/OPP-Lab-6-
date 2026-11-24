#ifndef PROB3_H
#define PROB3_H

class Base {
private:
    int a;
public:
    Base(int x);
    Base(const Base& obj);              // Copy Constructor
    Base& operator=(const Base& obj);   // Assignment Operator
    void print();
    ~Base();
};

#endif
