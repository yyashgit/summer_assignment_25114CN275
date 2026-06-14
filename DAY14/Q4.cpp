#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    int numbers[100];

    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }

    cout << "Duplicate elements are: ";

    bool duplicateFound = false;

    for (int i = 0; i < n; i++) {
        bool alreadyPrinted = false;

        for (int k = 0; k < i; k++) {
            if (numbers[i] == numbers[k]) {
                alreadyPrinted = true;
                break;
            }
        }

        if (alreadyPrinted)
            continue;

        for (int j = i + 1; j < n; j++) {
            if (numbers[i] == numbers[j]) {
                cout << numbers[i] << " ";
                duplicateFound = true;
                break;
            }
        }
    }

    if (!duplicateFound) {
        cout << "No duplicates found";
    }

    cout << endl;

    return 0;
}