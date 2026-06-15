#include <iostream>
using namespace std;

int findSumOfDigits(int number) {
    if (number == 0) {
        return 0;
    }

    return (number % 10) + findSumOfDigits(number / 10);
}

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    cout << "Sum of digits = " << findSumOfDigits(number) << endl;

    return 0;
}