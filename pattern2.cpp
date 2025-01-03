#include<iostream>
using namespace std;
int main(){
    
    int num;
    cout << "Enter a number: ";
    cin >> num;
    // int n = 1;

    char n = 'A';

    for(int i=1; i<=num; i++){
        for (int j=1; j<=num; j++){
            cout << n << " ";
            n++;
        }
        cout << endl;
    }
    
    return 0;
}