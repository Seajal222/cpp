// Find the sum of three numbers with the help of function overriding. Display sum of base class with the help of derived class object and vice versa.
#include <iostream>
using namespace std;

class Base {
public:
    virtual int sum(int a, int b, int c) {
        return a + b + c;
    }
};

class Derived : public Base {
public:
    int sum(int a, int b, int c) override {
        return a + b + c + 10; 
    }
};

int main() {
    Base baseObj;
    Derived derivedObj;

    cout << "Sum using Base class: " << baseObj.sum(1, 2, 3) << endl;

    cout << "Sum using Derived class: " << derivedObj.sum(1, 2, 3) << endl;

    Base* basePtr = &derivedObj;
    cout << "Sum using Base class function from Derived class object: " << basePtr->sum(1, 2, 3) << endl;

    return 0;
}