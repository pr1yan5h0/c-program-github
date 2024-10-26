#include <iostream>
using namespace std;

class SumOfPositiveNumbers {
    int *arr;
    int size;
    int sum;

public:
    SumOfPositiveNumbers(int arr[], int size) {
        this->size = size;
        this->arr = new int[size];
        for (int i = 0; i < size; i++) {
            this->arr[i] = arr[i];
        }
        sum = 0;
    }

    SumOfPositiveNumbers(const SumOfPositiveNumbers &obj) {
        size = obj.size;
        arr = new int[size];
        sum = 0;
        for (int i = 0; i < size; i++) {
            arr[i] = obj.arr[i];
            if (arr[i] > 0) {
                sum += arr[i];
            }
        }
    }

    void displaySum() {
        cout << "The sum of all positive numbers is: " << sum << endl;
    }

    ~SumOfPositiveNumbers() {
        delete[] arr;
    }
};

int main() {
    int arr[] = {1, -3, 5, -2, 8, -7, 10};
    int size = sizeof(arr) / sizeof(arr[0]);

    SumOfPositiveNumbers obj1(arr, size);

    SumOfPositiveNumbers obj2 = obj1;
    obj2.displaySum();

    return 0;
}
