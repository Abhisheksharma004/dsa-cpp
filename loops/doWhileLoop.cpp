#include<iostream>
using namespace std;

int main (){
    int n;
    cout << "Enter A Natural Number : ";
    cin >> n;
    int i=1;
    do{
        cout << i << "\n";
        i++;
    }while(i<=n);
    cout << endl;
    return 0;
}