#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    int d = 4;
    
    // first store the first d elements in a temp array;
    int temp[d];
    for(int i = 0; i<d;i++){
        temp[i] = arr[i];
    }
    
    
    
    // Now shift the last n-d elements left 
    for(int i = d; i<n;i++ ){
        arr[i-d] = arr[i];
    }
    
  
    
    // Now append the temp array to the original from end
    for(int i = 0; i< d;i++){
        arr[n-d+i] = temp[i];
    }
    
    for(int i = 0; i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}