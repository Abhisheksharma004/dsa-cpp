#include <iostream>
using namespace std;

int main(){
    char ch;
    cout << "Enter Character : ";
    cin >> ch;
// method 01
    if (ch >= 'a' && ch <= 'z'){
        cout << "Lower Case";
    }else{
        cout << "Upper Case";
    }
    return 0;
}