#include <iostream>
using namespace std;

int main() {
    int n, digit;
    int product = 1;

    cout << "Enter a number: ";
    cin >> n;

    while (n > 0) {
        digit = n % 10;      // Extract last digit
        product *= digit;    // Multiply with product
        n /= 10;             // Remove last digit
    }

    cout << "Product of digits = " << product << endl;

    return 0;
}