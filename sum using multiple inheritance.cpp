//display  the sum of two numbers using multiple inheritance where one number is declared in first base class and one number is declared in second base class. Function is defined in the derived class to sum two numbers
#include <iostream>
using namespace std;

class Base1 {
protected:
    int number1;

public:
    Base1(int num1) : number1(num1) {}
};

class Base2 {
protected:
    int number2;

public:
    Base2(int num2) : number2(num2) {}
};

class SumCalculator : public Base1, public Base2 {
public:
    SumCalculator(int num1, int num2) : Base1(num1), Base2(num2) {}

    int calculateSum() {
        return number1 + number2;
    }
};

int main() {
    SumCalculator sumCalculator(10, 20);
    int result = sumCalculator.calculateSum();
    cout << "The sum of " << sumCalculator.number1 << " and " 
         << sumCalculator.number2 << " is " << result << endl;

    return 0;
}
