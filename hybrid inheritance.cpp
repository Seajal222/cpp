//create a program on hybrid inheritance where we have five classes A,B,C,D and E. Class B,C and D inherit from class A and class E inherit from class B
#include <iostream>
using namespace std;

class A {
protected:
    int valueA;

public:
    A(int val) : valueA(val) {}
};

class B : public A {
protected:
    int valueB;

public:
    B(int valA, int valB) : A(valA), valueB(valB) {}
};

class C : public A {
protected:
    int valueC;

public:
    C(int valA, int valC) : A(valA), valueC(valC) {}
};

class D : public A {
protected:
    int valueD;

public:
    D(int valA, int valD) : A(valA), valueD(valD) {}
};

class E : public B {
private:
    int valueE;

public:
    E(int valA, int valB, int valE) : B(valA, valB), valueE(val
