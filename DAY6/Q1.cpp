#include <iostream>
using namespace std;

int main() {
    int decimalNumber;

    cout << "Enter a decimal number: ";
    cin >> decimalNumber;

    int binaryNumber[32];
    int index = 0;

    while (decimalNumber > 0) {
        binaryNumber[index] = decimalNumber % 2;
        decimalNumber = decimalNumber / 2;
        index++;
    }

    cout << "Binary equivalent: ";

    for (int i = index - 1; i >= 0; i--) {
        cout << binaryNumber[i];
    }

    cout << endl;

    return 0;
}