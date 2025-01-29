#include <iostream>
using namespace std;
int main(){

    int n;
    cout << "Enter a Number : ";
    cin >> n;
    int k=4;
    
     for(int i=1; i<=n; i++){

        //spaces
        for(int j=1; j<=k; j++){
            cout << " ";
        }
        k--;
        //numbers
        for(int j = 1; j<=i; j++){
            cout << j;
        }
        cout << endl;
    }

    return 0;
}