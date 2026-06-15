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

    int firstElement = numbers[0];

    for (int i = 0; i < totalNumbers - 1; i++) {
        numbers[i] = numbers[i + 1];
    }

    numbers[totalNumbers - 1] = firstElement;

    cout << "Array after left rotation: ";
    for (int i = 0; i < totalNumbers; i++) {
        cout << numbers[i] << " ";
    }

    cout << endl;

    return 0;
}