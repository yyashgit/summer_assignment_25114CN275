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

    int position = 0;

    for (int i = 0; i < totalNumbers; i++) {
        if (numbers[i] != 0) {
            numbers[position] = numbers[i];
            position++;
        }
    }

    while (position < totalNumbers) {
        numbers[position] = 0;
        position++;
    }

    cout << "Array after moving zeroes to the end: ";
    for (int i = 0; i < totalNumbers; i++) {
        cout << numbers[i] << " ";
    }

    cout << endl;

    return 0;
}
