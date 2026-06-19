#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;

    cout << "Enter the order of the square matrix: ";
    cin >> n;

    int matrix[100][100];

    cout << "Enter matrix elements:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    // Calculate sum of main diagonal elements
    for (int i = 0; i < n; i++) {
        sum += matrix[i][i];
    }

    cout << "Sum of diagonal elements = " << sum << endl;

    return 0;
}