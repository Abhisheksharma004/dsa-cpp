#include<iostream>

using namespace std;

int main(){

    // long  => 64 bit -2^63 to 2^63-1
    // short => 16 bit -2^15 to 2^15-1
    // int   => 32 bit -2^31 to 2^31-1
    // char  => 8 bit -2^7 to 2^7-1
    // float => 32 bit
    // double => 64 bit
    // wchar_t => 16 bit


    cout << "Size of char : " << sizeof(char) << " byte" << endl;
    cout << "Size of int : " << sizeof(int) << " bytes" << endl;
    cout << "Size of short int : " << sizeof(short int) << " bytes" << endl;
    cout << "Size of long int : " << sizeof(long int) << " bytes" << endl;
    cout << "Size of float : " << sizeof(float) << " bytes" << endl;
    cout << "Size of double : " << sizeof(double) << " bytes" << endl;
    cout << "Size of wchar_t : " << sizeof(wchar_t) << " bytes" << endl;
    cout << "Size of long long int : " << sizeof(long long int) << " bytes" << endl;


    return 0;
}