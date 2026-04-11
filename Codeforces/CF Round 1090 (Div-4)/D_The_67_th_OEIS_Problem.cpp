#include <bits/stdc++.h>
using namespace std;

int32_t main()
{
    int t = 1, cs = 0;
    cin >> t;
    while (t--){
        int n; cin >> n;
        vector<int> ans;
        int a = 1, b = 3;
        while(ans.size() < n) {
            ans.push_back(a*b);
            a += 2;
            b += 2;
        }
        for(auto i: ans) cout << i << ' '; cout << endl;
    }
    return 0;
}