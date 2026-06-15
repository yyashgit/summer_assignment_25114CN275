#include <iostream>
using namespace std;

long long findFactorial(int number) {
    if (number == 0 || number == 1) {
        return 1;
    }

    return number * findFactorial(number - 1);
}

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    cout << "Factorial of " << number << " is " 
         << findFactorial(number) << endl;

    return 0;
}