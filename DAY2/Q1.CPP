#include <iostream>
using namespace std;

int main() {
    int num, digit, sum = 0;

    cout << "Enter a number: ";
    cin >> num;

    while (num != 0) {
        digit = num % 10;   // Get the last digit
        sum += digit;       // Add it to sum
        num = num / 10;     // Remove the last digit
    }

    cout << "Sum of digits = " << sum;

    return 0;
}