//display the sum of all positive numbers of an array using copy constructor
#include <iostream>

using namespace std;

class ArraySum {
private:
    int* arr; // Pointer to the array
    int size; // Size of the array
    int sum;  // Sum of positive numbers

public:
    // Parameterized constructor
    ArraySum(int* inputArr, int s) : size(s), sum(0) {
        arr = new int[size];
        for (int i = 0; i < size; ++i) {
            arr[i] = inputArr[i];
            if (arr[i] > 0) {
                sum += arr[i]; // Sum positive numbers
            }
        }
    }

    // Copy constructor
    ArraySum(const ArraySum& other) {
        size = other.size;
        sum = other.sum;
        arr = new int[size];
        for (int i = 0; i < size; ++i) {
            arr[i] = other.arr[i];
        }
    }

    // Destructor to free allocated memory
    ~ArraySum() {
        delete[] arr;
    }

    // Function to display the sum
    void displaySum() const {
        cout << "Sum of all positive numbers: " << sum << endl;
    }
};

int main() {
    // Sample array
    int numbers[] = {-1, 2, 3, -4, 5, 6};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    // Create an object of ArraySum
    ArraySum arraySum(numbers, size);

    // Use the copy constructor
    ArraySum copiedArraySum = arraySum;

    // Display the sum of positive numbers
    copiedArraySum.displaySum();

    return 0;
}
