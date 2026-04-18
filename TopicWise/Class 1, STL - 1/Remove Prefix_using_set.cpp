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
    int t; cin >> t;
    while(t--) {
        // input
        int n; cin >> n;
        vector<int> a(n);
        for(int i=0;i<n;++i) cin >> a[i];

        // using set
        set<int> st;
        // 1st approch
        // find duplicate from last
        int ans = 0;
        for(int i=n-1;i>=0;--i) {
            if(st.find(a[i]) == st.end()  ) { // set e nai
                st.insert(a[i]);
            }
            else {
                ans = i + 1; // index
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}