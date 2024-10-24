//display the sum of first n natural numbers using default constructor
#include <iostream>
using namespace std;
class sumofnn {
private:
    int n;
    int sum;
public:
    sumofnn() : n(0), sum(0) {}
    void calculateSum(int value) {
        n = value;
        sum = (n * (n + 1)) / 2;
    }
    void displaySum()  {
        cout << "The sum of the first " << n << " natural numbers is: " << sum << endl;
    }
};
int main() {
    sumofnn nSum;
    int n;
    cout << "Enter a positive integer n: ";
    cin >> n;
    nSum.calculateSum(n);
    nSum.displaySum();
    return 0;
}
