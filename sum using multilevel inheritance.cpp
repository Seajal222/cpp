//display the sum of two  numbers using multilevel inheritance where one number is declared in the base class and one number is declared in first derived class. Function is defined in second derived class to sum two numbers
#include <iostream>
using namespace std;

class Base {
protected:
    int number1;

public:
    Base(int num1) : number1(num1) {}
};

class Intermediate : public Base {
protected:
    int number2;

public:
    Intermediate(int num1, int num2) : Base(num1), number2(num2) {}
};

class SumCalculator : public Intermediate {
public:
    SumCalculator(int num1, int num2) : Intermediate(num1, num2) {}

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
