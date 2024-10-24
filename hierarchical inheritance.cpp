//using hierarchical inheritance where two numbers are declared in base class. Create one function in first derive class and one function in second derive class. First derive class displays the first number with the help of their function and the second derive class displays the second function with the help of their function
#include <iostream>
using namespace std;

class Base {
protected:
    int number1;
    int number2;

public:
    Base(int num1, int num2) : number1(num1), number2(num2) {}
};

class Derived1 : public Base {
public:
    Derived1(int num1, int num2) : Base(num1, num2) {}

    void displayFirstNumber() {
        cout << "The first number is: " << number1 << endl;
    }
};

class Derived2 : public Base {
public:
    Derived2(int num1, int num2) : Base(num1, num2) {}

    void displaySecondNumber() {
        cout << "The second number is: " << number2 << endl;
    }
};

int main() {
    Derived1 obj1(10, 20);
    obj1.displayFirstNumber();

    Derived2 obj2(10, 20);
    obj2.displaySecondNumber();

    return 0;
}
