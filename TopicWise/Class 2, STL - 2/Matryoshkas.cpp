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

    // testcase
    int t; cin >> t;
    while(t--) {
        // input
        int n; cin >> n;
        vector<int> a(n);
        for(int i=0;i<n;++i) cin >> a[i];
        
        // counting 
        map<int, int> mp;
        for(auto val: a) {
            mp[val]++;
        }
        // for(auto [x, y] : mp) {
        //     cout << x << " -> " << y << endl;
        // }
        // calculate ans
        int ans = 0;
        map<int, int> duplicate;
        for(auto val: a) {
            if(duplicate[val] > 0) {
                continue;
            }
            int prev = val - 1;
            if(mp[prev] > mp[val]) {
                // small box besi ache
                ans += 0;
            }
            else {
                // boro box besi.. extra lagbe
                int extra = mp[val] - mp[prev];
                ans += extra;
            }
            duplicate[val]++;
            // cout << val << " = " << ans << endl;
        }
        cout << ans << endl;
    }
    return 0;
}