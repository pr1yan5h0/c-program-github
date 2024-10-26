#include <iostream>
using namespace std;

class SumOfNaturalNumbers {
    int n;
    int sum;

public:
    SumOfNaturalNumbers() {
        cout << "Enter the value of n: ";
        cin >> n;
        sum = (n * (n + 1)) / 2;
    }

    void displaySum() {
        cout << "The sum of the first " << n << " natural numbers is: " << sum << endl;
    }
};

int main() {
    SumOfNaturalNumbers sumObj;
    sumObj.displaySum();
    return 0;
}
