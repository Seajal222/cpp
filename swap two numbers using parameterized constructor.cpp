//swap two numbers using parameterized constructor
#include <iostream>

using namespace std;

class Swapper {
private:
    int a;
    int b;

public:
    // Parameterized constructor
    Swapper(int x, int y) : a(x), b(y) {}

    // Function to swap the values
    void swap() {
        int temp = a;
        a = b;
        b = temp;
    }

    // Function to display the values
    void display() const {
        cout << "a: " << a << ", b: " << b << endl;
    }
};

int main() {
    // Create an object of Swapper with initial values
    Swapper swapper(5, 10);

    cout << "Before swapping:" << endl;
    swapper.display();

    // Swap the values
    swapper.swap();

    cout << "After swapping:" << endl;
    swapper.display();

    return 0;
}
