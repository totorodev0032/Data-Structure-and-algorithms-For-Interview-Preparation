// Remove the duplicates from an sorted array.
// Naive approach --> time = 0(n), space: O(n)

#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {2,2,3,4,5,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    int temp[size];
    temp[0] = arr[0];
    int res = 1;
    for(int i = 1;i<size;i++) {
        if(temp[res-1] != arr[i]){
            temp[res] = arr[i];
            res++;
        }
    }
    
    for(int i = 0; i< res;i++){
        cout<<temp[i]<<" ";
    }
    return 0;
}