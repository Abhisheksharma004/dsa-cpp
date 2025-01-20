#include<iostream>
using namespace std;

int a = 10, b = 2; //this is a global variable and it can be used in any scope

int main(){
    int a = 10, b = 2; //this is a global variable and it can be used in any scope

    for(int i =0; i<5; i++){
        int a = 20; //this is a local variable and it will be used in this scope only
    } 
    return 0;
}   