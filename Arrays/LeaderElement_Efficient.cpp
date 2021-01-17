// An element is called the leader of an array if there is no element greater than it on the right side.
// Efficient way : Time = 0(n)

#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {1,4,3,6,7,2};
    int n = sizeof(arr)/ sizeof(arr[0]);
    int curr_leader = arr[n-1];
    cout << curr_leader << " ";
    
    for(int i = n-2; i>=0; i--) {
        if(curr_leader < arr[i]) {
            curr_leader = arr[i];
            cout << curr_leader << " ";
        }
    }
    return 0;
}