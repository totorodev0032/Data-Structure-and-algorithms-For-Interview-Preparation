// Removing duplicate elements from the std::array ;
// Efficient approach. Time = O(n) , Space = O(1);


#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {2,2,3,4,4,5,6};
    int size = sizeof(arr)/sizeof(arr[0]);
    int res = 1;
    for(int i = 1; i < size; i++) {
        if(arr[i] !=arr[res-1]){
            arr[res] = arr[i];
            res++;
        }
    }
    cout<<res<<endl;
    
    for(int i = 0; i<res;i++){
        cout<<arr[i];
    }
    return 0;
}