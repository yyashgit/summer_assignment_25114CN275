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

    int startIndex = 0;
    int endIndex = totalNumbers - 1;

    while (startIndex < endIndex) {
        int temp = numbers[startIndex];
        numbers[startIndex] = numbers[endIndex];
        numbers[endIndex] = temp;

        startIndex++;
        endIndex--;
    }

    cout << "Reversed array: ";
    for (int i = 0; i < totalNumbers; i++) {
        cout << numbers[i] << " ";
    }

    cout << endl;

    return 0;
}