/* 
    Created by Toufik
    CS Instructor Phitron
*/
#include <bits/stdc++.h>
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    // testcase input
    int t = 1; 
    // cin >> t;
    while(t--) {
        // input
        int n; cin >> n;
        vector<int> a(n);
        for(int i=0;i<n;++i) cin >> a[i];

        // counting 
        map<int, int> mp;
        
        for(int i=0;i<n;++i) {
            int val = a[i];

            mp[val]++;
        }

        // find which box count is maximum
        int mx = 0;
        for(auto [val, count] : mp) {
            mx = max(count , mx);
        }
        
        cout << mx << endl;
    }
    return 0;
}