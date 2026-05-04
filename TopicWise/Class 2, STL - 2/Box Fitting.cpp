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
        int n, box_size; cin >> n >> box_size;
        vector<int> a(n);
        for(int i=0;i<n;++i) cin >> a[i];
        
        // boro theke choto
        sort(a.rbegin(), a.rend());
        
        // khali jayga
        multiset<int> khali;
        
        int ans = 0;
        
        for(auto val : a) {
            auto it = khali.lower_bound(val);
            
            if(it == khali.end()) {
                // boro khali jayga nai
                // notun box lagbe
                
                ans++;
                int notun_khali = box_size - val;
                
                khali.insert(notun_khali);
            }
            else {
                // jayga ase.. new box lagbe nai
                int available = *it;
                khali.erase(it);
                int notun_khali = available - val;
                khali.insert(notun_khali);
            }
        }
        cout << ans << endl;
    }
    return 0;
}