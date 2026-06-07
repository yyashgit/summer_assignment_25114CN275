#include <iostream>
using namespace std;

int main() {
    int num;
    bool Prime = true;

    cout << "Enter a number: ";
    cin >> num;

    if (num <= 1) {
        Prime = false;
    } else {
        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                Prime = false;
                break;
            }
        }
    }

    if (Prime)
        cout << num << " is a Prime Number.";
    else
        cout << num << " is not a Prime Number.";

    return 0;
}