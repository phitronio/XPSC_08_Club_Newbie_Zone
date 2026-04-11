#include <bits/stdc++.h>
using namespace std;

int32_t main()
{
    int t = 1, cs = 0;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        vector<int> a;
        int r = n * 3;
        for (int i = 0; i < n; i++) {
            a.push_back(i+1); 
            a.push_back(r-1);
            a.push_back(r);
            r-=2;
        }
        for(auto i: a) cout << i << ' '; cout << endl;
    }
    return 0;
}