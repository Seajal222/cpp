//display sum of two integer values, sum of two float values, two char values using constructor overloading
#include <iostream>

using namespace std;

class SumCalculator {
public:
    // Constructor for two integers
    SumCalculator(int a, int b) {
        cout << "Sum of integers: " << (a + b) << endl;
    }

    // Constructor for two floats
    SumCalculator(float a, float b) {
        cout << "Sum of floats: " << (a + b) << endl;
    }

    // Constructor for two characters
    SumCalculator(char a, char b) {
        cout << "Sum of characters (ASCII): " << (static_cast<int>(a) + static_cast<int>(b)) << endl;
    }
};

int main() {
    // Create objects to invoke the constructors
    SumCalculator intSum(5, 10);          // Sum of integers
    SumCalculator floatSum(3.5f, 2.5f);   // Sum of floats
    SumCalculator charSum('A', 'B');      // Sum of characters

    return 0;
}
