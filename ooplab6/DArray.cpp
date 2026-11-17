#include "DArray.h"

DArray::DArray() {
    arr = nullptr;
    size = 0;
}

void DArray::push_back(int value) {
    int* temp = new int[size + 1];

    for (int i = 0; i < size; i++) {
        temp[i] = arr[i];
    }

    temp[size] = value;

    delete[] arr;

    arr = temp;
    size++;
}

DArray& DArray::operator=(const DArray& other) {
    if (this != &other) {
        delete[] arr;

        size = other.size;
        arr = new int[size];

        for (int i = 0; i < size; i++) {
            arr[i] = other.arr[i];
        }
    }

    return *this;
}

ostream& operator<<(ostream& out, const DArray& obj) {
    for (int i = 0; i < obj.size; i++) {
        out << obj.arr[i] << " ";
    }

    return out;
}