// left rotate array by d place ...reversing technique;

#include <bits/stdc++.h>
using namespace std;


 void reverseArray(int arr[], int initialIndex, int secondIndex) {
    int temp;
    for(int i = initialIndex, j = secondIndex - 1; i<secondIndex; i++, j--) {
        if(i<j) {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
}

int main() {
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int d = 2;
    reverseArray(arr, 0, d);  
    reverseArray(arr, d, n);
    reverseArray(arr, 0, n);
    for(int i = 0; i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    
    return 0;
}