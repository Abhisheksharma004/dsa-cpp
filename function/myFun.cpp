#include<iostream>
using namespace std;

// void myfun(){
//     cout << "Hello My Function";
// }

int myfun(){
    cout << "Hello My Function" << endl;
    return 3;
}


int main(){

    // cout << "hello" << endl;
    // myfun();


    int val = myfun();
    cout << "Value : " << val << endl;
    return 0;
}