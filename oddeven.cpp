#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter A Number : ";
    cin >> n;
    if (n % 2 == 0){
        cout << "The Number Is Even\n";
    }else{
        cout << "The Number Is Odd\n";
    }
    return 0;
}