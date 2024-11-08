// Write a program to overload increment operator to increment value of a by 5, decrement operator to decrement value of a by 1, negation operator to change the value of a from -ve to +ve and +ve to -ve using member function and friend function.

#include <iostream>
using namespace std;

class Number {
private:
    int a;

public:
    Number(int value) : a(value) {}

    Number operator++() {
        a += 5; 
        return *this; 
    }

    Number operator--() {
        a -= 1; 
        return *this; 
    }

    friend Number operator-(Number& num);

    void display() const {
        cout << "Value of a: " << a << endl;
    }
};

Number operator-(Number& num) {
    return Number(-num.a); // Change the sign of a
}

int main() {
    Number num(10); 

    num.display();

    ++num;
    cout << "After incrementing by 5: ";
    num.display();

    --num;
    cout << "After decrementing by 1: ";
    num.display();

    Number negatedNum = -num;
    cout << "After negation: ";
    negatedNum.display();

    return 0;
}