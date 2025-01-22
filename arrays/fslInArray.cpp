#include <iostream>
#include <climits> // This is for INT_MAX and INT_MIN
using namespace std;
int main (){

    int arr[] = {1,2,3,4,-1,6};
    int size = 6;
    int smallest = INT_MAX;
    int largest = INT_MIN;
    for (int i = 0; i < size; i++){
        // if (arr[i] < smallest){ 
        //     smallest = arr[i];
        // }

        smallest = min(smallest, arr[i]);
         largest = max(largest, arr[i]);
    }

    // for (int i = 0; i < size; i++){
    //     // if (arr[i] > largest){ 
    //     //     largest = arr[i];
    //     // }

    //     largest = max(largest, arr[i]);
    // }

    cout << "The smallest element in the array is: " << smallest << endl; 
    cout << "The largest element in the array is: " << largest << endl;

    return 0;
}