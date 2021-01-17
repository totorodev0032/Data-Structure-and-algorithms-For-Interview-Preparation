#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main() {
    vector<int> v{5,10,20,7};
    int max = v[0];
    for(auto i = v.begin(); i!=v.end(); i++) {
        if((*i) > max) {
            max = (*i);
        }
    }
    cout<< max << "\n";
    cout<< "\n";
    cout<< "hello";
    return 0;
}