// kth largest distinct element.

#include <bits/stdc++.h>
using namespace std;

int main() {
	int arr[] = {3,2,3,1,2,4,5,5,6};
	int size = sizeof(arr)/sizeof(int);
	
	sort(arr, arr + size, greater<int>());
	
	for(int i = 0; i<size; i++) {
	    cout<< arr[i] << endl;
	}
	
	// kth largest element
	int k = 4;
	int count = 0;
	int pos = 0;
	if(k >= size) {
	    return 1;
	}
	
	
	for(int i = 0; i < size; i++){
	    pos = i;
	    if(arr[i]!=arr[i+1] ) {
	        count ++;
	    }
	    
	    
	    if(count == k)
	        break;
	}
	
	cout << "kth largest number is" << " " << arr[pos] ;
	
	
	
	return 0;
}