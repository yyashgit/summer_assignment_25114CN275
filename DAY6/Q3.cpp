#include <iostream>
using namespace std;

int main() {
    int number;
    int setBitCount = 0;

    cout << "Enter a number: ";
    cin >> number;

    while (number > 0) {
        if (number % 2 == 1) {
            setBitCount++;
        }
        number = number / 2;
    }

    cout << "Number of set bits: " << setBitCount << endl;

    return 0;
}