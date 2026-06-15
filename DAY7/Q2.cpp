#include <iostream>
using namespace std;

int fibonacci(int position) {
    if (position == 0)
        return 0;

    if (position == 1)
        return 1;

    return fibonacci(position - 1) + fibonacci(position - 2);
}

int main() {
    int totalTerms;

    cout << "Enter the number of terms: ";
    cin >> totalTerms;

    cout << "Fibonacci Series: ";

    for (int i = 0; i < totalTerms; i++) {
        cout << fibonacci(i) << " ";
    }

    cout << endl;

    return 0;
}