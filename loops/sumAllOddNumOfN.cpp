#include<iostream>
using namespace std;
int main (){

    // with for loop, we can find the sum of all odd number of n
    // int n;
    // int oddsum = 0;
    // cout << "Enter A Natural Number : ";
    // cin >> n;

    // for(int i=1; i<=n; i++){
    //     if(i%2 != 0){
    //         cout << i << " ";
    //         oddsum +=i;
    //     }

    // }
    // cout << endl;

    // cout << "Sum of All Odd Number : " << oddsum;
    
    // with while loop, we can find the sum of all odd number of n

    int n;
    int oddSum = 0;
    int i=1;

    cout << "Enter A Natural Number : ";
    cin >> n;

    while (i <= n){
        if (i % 2 != 0){
            cout << i << " ";
            oddSum += i;
        }
        i++;
    }
    cout << endl;
    cout << "Sum Of All Odd Number : " << oddSum;
    
    return 0;
}