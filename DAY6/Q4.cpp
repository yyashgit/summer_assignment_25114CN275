#include <iostream>
using namespace std;

int main() {
    int baseNumber, powerValue;
    long long result = 1;

    cout << "Enter the base number: ";
    cin >> baseNumber;

    cout << "Enter the power: ";
    cin >> powerValue;

    for (int i = 1; i <= powerValue; i++) {
        result = result * baseNumber;
    }

    cout << baseNumber << "^" << powerValue << " = " << result << endl;

    return 0;
}