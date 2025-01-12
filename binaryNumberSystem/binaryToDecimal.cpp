#include<iostream>
using namespace std;

int binToDec(){
    int n, dec = 0, base = 1;
    cout << "Enter a binary number: ";
    cin >> n;
    while (n != 0) {
        dec = dec + (n % 10) * base;
        base = base * 2;
        n = n / 10;
        }
        return dec;
}

int main(){

    cout << "Convert in Decimal : " << binToDec() << endl;

    return 0;
}