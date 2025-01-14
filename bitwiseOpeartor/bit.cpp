#include<iostream>
using namespace std;
int main() {

    int a = 10, b = 1;

    cout << (a & b) << endl; //bitwise and
    cout << (a | b) << endl; //bitwise or
    cout << (a ^ b) << endl; //bitwise xor
    cout << (a << b) << endl; //bitwise left shift 
    cout << (a >> b) << endl; //bitwise right shift 

    return 0;
}