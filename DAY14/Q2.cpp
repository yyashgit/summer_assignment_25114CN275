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

    cout << "Enter the element whose frequency you want to find: ";
    cin >>x;

    int frequency = 0;

    for (int i = 0; i < n; i++) {
        if (numbers[i] ==x) {
            frequency++;
        }
    }

    cout << "Frequency of " <<x << " is " << frequency << endl;

    return 0;
}