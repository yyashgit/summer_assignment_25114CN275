#include <iostream>
using namespace std;

int reversedNumber = 0;

void reverseNumber(int number) {
    if (number == 0) {
        return;
    }

    reversedNumber = reversedNumber * 10 + (number % 10);
    reverseNumber(number / 10);
}

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    reverseNumber(number);

    cout << "Reversed number = " << reversedNumber << endl;

    return 0;
}