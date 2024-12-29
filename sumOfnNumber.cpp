#include<iostream>
using namespace std;

int main(){

    int n;
    int sum = 0;
    cout << "Enter N Number : ";
    cin >> n;

    for(int i = 1; i <= n; i++){

        sum += i;
    
    }
    cout<< "Your Sum : " << sum;

    return 0;
}