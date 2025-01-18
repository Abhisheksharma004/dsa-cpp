#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter n Number : ";
    cin >> n;
    int count = 1;

    while(count <= n){
        cout << count << " ";
        count++;
    }
    
    return 0;
}