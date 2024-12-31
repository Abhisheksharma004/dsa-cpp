#include<iostream>
using namespace std;

int main(){
    
    // for(int i=1; i<=5; i++){
    //     // cout << "*****" << endl;
    //     for(int j=1; j<=5; j++){
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    int i=1;
   
    while (i <= 5) {
        int j=1;
       
        while (j <= 5) {
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
    }
    
    return 0;
}