// Leader element ----naive approach
// An element is called the leader of an array if there is no element greater than it on the right side.


#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {4,10,6,7,1,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int pos = 0, flag = 0;
    
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(arr[i] < arr[j]) {
                break;
            }
            
            else {
                flag = 1;
            }
            
        }
        
        if(flag == 1)
            {
                pos = i;
                break;
            }
    }
    
    cout << pos;
    return 0;
}