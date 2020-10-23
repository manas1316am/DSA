//
//
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    vector<int> my;

    cin >> n;

    for(int i=0; i<n; i++){
        int input;
        
        cin >> input;
        my.push_back(input);
    }
    reverse(my.begin(), my.end());
    
    for(int i=0; i<n; i++){
        cout << my[i] << " ";
    }
    cout << endl;
    return 0;
}