// Move all the zeroes in the array to the end without disturbing the sequence of the element;
// naive approach. Time = O(n^2)

#include <bits/stdc++.h>
using namespace std;

void moveZeroToEnd(int arr[], int size){
    for(int i = 0; i<size; i++){
        
        if(arr[i] == 0){
           
            for(int j = i; j<size; j++){
                arr[j] = arr[j+1];
            }
            arr[size-1] = 0;
        }
    }
    
    for(int i = 0; i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int main() {
    int arr[] = {2,3,0,5,8,3};
    int size = sizeof(arr)/sizeof(arr[0]);
    moveZeroToEnd(arr,size);
    
    return 0;
}