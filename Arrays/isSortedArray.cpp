// arrays is sorted or not

#include <bits/stdc++.h>
#include <cmath>
using namespace std;

bool isSorted(int arr[], int size) {
    for(int i = 1; i< size; i++) {
        if(arr[i] < arr[i-1]) 
            return false;
    
    }
    
    return true;
}

int main() {
	int arr[] = {1,4,3};
	
	int size = sizeof(arr)/sizeof(arr[0]);
	
	int res = isSorted(arr,size) ;
	
    cout << res;
	
	return 0;
}