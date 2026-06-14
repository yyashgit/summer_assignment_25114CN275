#include <iostream>
using namespace std;

int main() {
    int n, x;

    cout << "Enter the number of elements: ";
    cin >> n;

    int numbers[100];

    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }

    cout << "Enter the value to search: ";
    cin >> x;

    int position = -1;

    for (int i = 0; i < n; i++) {
        if (numbers[i] == x) {
            position = i;
            break;
        }
    }

    if (position != -1) {
        cout << "Value found at position " << position + 1 << endl;
    } else {
        cout << "Value not found in the array." << endl;
    }

    return 0;
}