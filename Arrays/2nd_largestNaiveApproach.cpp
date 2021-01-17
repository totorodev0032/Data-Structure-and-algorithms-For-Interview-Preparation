#include <bits/stdc++.h>

using namespace std;

// Naive approach

int main() {
    int arr[] = {12, 50, 80, 20};
    int size = sizeof(arr)/sizeof(int);
    int max_1 = arr[0];
    int max_2 = arr[0];
    //first largest element
    for(int i = 0; i<size; i++){
        if(arr[i] > max_1){
            max_1 = arr[i];
        }
    }
    
    // printing largest element
    cout<< max_1 << "\n";
    
    // second largest element
    for(int i = 0; i< size; i++){
        if(arr[i] > max_2 && arr[i] < max_1) {
            max_2 = arr[i];
        }
    }
    
    // printing second largest number
    cout << max_2 << "\n";
    return 0;
}