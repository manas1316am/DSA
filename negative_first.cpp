//
// Question 4
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a;

    for (int i = 0; i < n; i++)
    {
        int input;
        cin >> input;
        a.push_back(input);
    }

    sort(a.begin(), a.end());
    // for (int i = 0; i < n; i++)
    // {
    //     cout << a[i];
    // }
    for(int i=0; i<n; i++){
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}