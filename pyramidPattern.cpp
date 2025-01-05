#include<iostream>
using namespace std;
int main(){

    int n;
    cout << "Enter a Number : ";
    cin >> n;

    for(int i=0; i<n; i++){
        //space print : n-i-1
        for (int j=0; j<n-i-1; j++){
            cout<<" ";
        }
        //numbers1 : i+1
        for(int j=1; j<=i+1; j++){
            cout << j;
        }
        //numbers2
        for(int j=i; j>=1; j--){
            cout << j;
        }
        cout << endl;
    }

    return 0;
}