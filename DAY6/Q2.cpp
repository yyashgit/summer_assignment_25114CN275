#include <iostream>
using namespace std;

int main() {
    long long binaryNumber;
    int decimalNumber = 0;
    int power = 1;

    cout << "Enter a binary number: ";
    cin >> binaryNumber;

    while (binaryNumber > 0) {
        int lastDigit = binaryNumber % 10;

        decimalNumber = decimalNumber + (lastDigit * power);

        power = power * 2;
        binaryNumber = binaryNumber / 10;
    }

    cout << "Decimal equivalent: " << decimalNumber << endl;

    return 0;
}