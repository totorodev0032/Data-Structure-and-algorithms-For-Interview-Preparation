// reversing an array ;

#include <bits/stdc++.h>
using namespace std;


int main() {
    int arr[] = {1,2,3,4};
    int size = sizeof(arr)/sizeof(arr[0]);
    int temp = 0;
    
    for(int i = 0, k = size - 1; i<size;i++, k--) {
        if(i<k){
            temp = arr[i];
            arr[i] = arr[k] ;
            arr[k] = temp;

        }
       
       
    }
    
    for(int i = 0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}