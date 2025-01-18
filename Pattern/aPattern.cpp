#include <iostream>
using namespace std;

int main() {
    int n;

    // Input the size of the pattern
    cout << "Enter the size of the letter 'A': ";
    cin >> n;

    // Loop for rows
    for (int i = 1; i <= n; i++) {
        // Loop for columns
        for (int j = 1; j <= 2 * n - 1; j++) {
            // Conditions to print '*'
            if (j == n - i + 1 || j == n + i - 1 || (i == n / 2 + 1 && j > n - i + 1 && j < n + i - 1)) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl; // Move to the next line
    }

    return 0;
}
