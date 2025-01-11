#include <iostream>
using namespace std;

int sumOfDigits(int num) {
    int digSum = 0;
    while (num > 0) {
        int lastDigit = num % 10;  // Extract the last digit
        digSum += lastDigit;       // Add the digit to the sum
        num /= 10;                 // Remove the last digit
    }
    return digSum;
}

int input() {
    int num;
    cout << "Enter Digits: ";
    cin >> num;
    return num; // Return the input value
}

int main() {
    int inp = input();  // Call input() to get the number
    cout << "Sum = " << sumOfDigits(inp) << endl; // Compute and display the sum of digits
    return 0;
}
