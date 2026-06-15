#include <iostream>
using namespace std;

int main() {
    int totalNumbers;

    cout << "Enter the number of elements: ";
    cin >> totalNumbers;

    int numbers[100];

    cout << "Enter the elements: ";
    for (int i = 0; i < totalNumbers; i++) {
        cin >> numbers[i];
    }

    int lastElement = numbers[totalNumbers - 1];

    for (int i = totalNumbers - 1; i > 0; i--) {
        numbers[i] = numbers[i - 1];
    }

    numbers[0] = lastElement;

    cout << "Array after right rotation: ";
    for (int i = 0; i < totalNumbers; i++) {
        cout << numbers[i] << " ";
    }

    cout << endl;

    return 0;
}