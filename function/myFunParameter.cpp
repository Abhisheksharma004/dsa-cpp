#include <iostream>
using namespace std;


//sum of 2 numbers
// int sum(int a, int b){
//     int s = a+b;
//     return s;
// }

//sum of n number

// int sumN(int n){
//     int sum = 0;
//     for (int i = 0; i <= n ; i++){
//         sum += i;
//     }
//     return sum;
// }


//calculate N Number of factorial 

int fact(int n){
    int fac = 1;
    for (int i = 1; i<=n; i++){
        fac *= i;
    }

    return fac;
}


int main(){

//    cout << "Fun Sum : " << sum(10,20) << endl;

    // cout << sumN(5) << endl;
    cout << fact(5) << endl;
    
    return 0;
}