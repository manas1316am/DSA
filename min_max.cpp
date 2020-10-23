//
//
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    vector<int> arr;

    cin >> n;
    for(int i=0; i<n; i++) {
        int input;
        cin >> input;
        arr.push_back(input);
    }

    sort(arr.begin(), arr.end());
    
    int max = arr[n-1];
    int min = arr[0];

    cout << max << " " << min << endl;

    
    


}