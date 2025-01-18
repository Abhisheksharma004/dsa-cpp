#include<iostream>
using namespace std;

main(){
    int age;
    cout << "Enter Your Age :";
    cin >>age;

    if (age >= 18){
        cout << "Your Can Vote\n";
    }else{
        cout << "You can't vote\n";
    }
    return 0;
}