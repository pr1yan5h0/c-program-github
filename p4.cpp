#include <iostream>
using namespace std;

class SumValues {
public:
    SumValues(int a, int b) {
        cout << "Sum of two integers: " << (a + b) << endl;
    }

    SumValues(float a, float b) {
        cout << "Sum of two floats: " << (a + b) << endl;
    }

    SumValues(char a, char b) {
        cout << "Sum of two chars (ASCII values): " << (a + b) << endl;
    }
};

int main() {
    SumValues intSum(5, 10);
    SumValues floatSum(3.5f, 2.5f);
    SumValues charSum('A', 'B');

    return 0;
}
