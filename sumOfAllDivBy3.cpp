#include<iostream>
using namespace std;
int main(){
    
    int n;
    int sum = 0;
    cout << "Enter A Number : ";
    cin >> n;

    for(int i=1; i<=n; i++){
        if(i%3 == 0){
            cout << i << " ";
            sum +=i;
        }

    }
    cout << endl;

    cout << "Sum of All Number Div By 3 : " << sum;

    return 0;
}