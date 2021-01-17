// Left rotate by d Places
// Naive Approach

#include <bits/stdc++.h>
using namespace std;

void leftRotateByOne(int arr[], int n) {
    int temp = arr[0];
    for(int i = 1; i<n;i++){
        arr[i-1] = arr[i];
    }
    
    arr[n-1] = temp;
}

int main() {
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int d = 3;
    
    for(int i = 0; i<d;i++){
        leftRotateByOne(arr,n);
    }
    
    for(int i = 0; i< n; i++){
        cout<<arr[i] << " ";
    }
    
    return 0;
}