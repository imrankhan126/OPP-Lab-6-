#include <iostream>
using namespace std;

class DArray {
private:
    int* arr;
    int size;

public:
    DArray();
    void push_back(int value);
    DArray& operator=(const DArray& other);
    friend ostream& operator<<(ostream& out, const DArray& obj);
};