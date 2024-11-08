// Write a program to overload + and - operator to find the sum of two numbers using member function and friend function.
#include <iostream>
using namespace std;

class Number {
private:
    int value;

public:
    Number(int v = 0) : value(v) {}

    int getValue() const {
        return value;
    }

    Number operator+(const Number& other) {
        return Number(this->value + other.value);
    }

    Number operator-(const Number& other) {
        return Number(this->value - other.value);
    }

    friend Number operator+(const Number& n1, const Number& n2);
    friend Number operator-(const Number& n1, const Number& n2);
};

Number operator+(const Number& n1, const Number& n2) {
    return Number(n1.value + n2.value);
}

Number operator-(const Number& n1, const Number& n2) {
    return Number(n1.value - n2.value);
}

int main() {
    Number num1(10), num2(20);

    Number sum1 = num1 + num2;
    cout << "Sum using member function: " << sum1.getValue() << endl;

    Number diff1 = num1 - num2;
    cout << "Difference using member function: " << diff1.getValue() << endl;

    Number sum2 = operator+(num1, num2);
    cout << "Sum using friend function: " << sum2.getValue() << endl;

    Number diff2 = operator-(num1, num2);
    cout << "Difference using friend function: " << diff2.getValue() << endl;

    return 0;
}
