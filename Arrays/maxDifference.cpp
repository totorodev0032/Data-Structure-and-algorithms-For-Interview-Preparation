// Maximum difference problem
// Maximum value of arr[j] - arr[i] where j>i 
// naive approach

#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {3,6,3,8,9,2,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int res = arr[1] - arr[0];
    
    for(int i = 0; i<n-1; i++) {
        for(int j = i+1; j<n;j++){
            res = max(arr[j] - arr[i], res);
        }
    }
    
    cout<< res <<endl;
    
    return 0;
}