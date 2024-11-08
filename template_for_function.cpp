//Write a program to create a template for functions and implement function overloading.
#include <iostream>
using namespace std;

template <typename T>
T add(T a, T b) {
    return a + b;
}

int add(int a, int b) {
    return a + b;
}

double add(double a, double b) {
    return a + b;
}

int main() {
    int intSum = add(10, 20);
    cout << "Sum of integers: " << intSum << endl;

    double doubleSum = add(10.5, 20.5);
    cout << "Sum of doubles: " << doubleSum << endl;

    int intAdd = add(5, 15);
    cout << "Overloaded sum of integers: " << intAdd << endl;

    double doubleAdd = add(5.5, 15.5);
    cout << "Overloaded sum of doubles: " << doubleAdd << endl;

    return 0;
}
