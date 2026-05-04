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
        for(auto &i: a) cin >> i;
        
        // store positions of each value
        map<int, vector<int> > mp1;
        
        for(int i=0;i<n;++i) {
            int val = a[i];
            int pos = i + 1; // 1 based 
            
            mp1[val].push_back(pos);
        }
        // for(auto [val, v]: mp1) {
        //     cout << val << " -> ";
        //     for(auto j: v) cout << j << ' '; cout << endl;
        // }
        // query
        int q; cin >> q;
        while(q--) {
            string s; cin >> s;
            if(s.size() != n) {
                cout << "NO\n";
                continue;
            }
            // store all letter positions
            map<char, vector<int> > mp2;
            for(int i=0;i<s.size();++i) {
                char c = s[i];
                int pos = i + 1; // 1 based 
                
                mp2[c].push_back(pos);
            }
            // cout << "char array\n";
            // for(auto [val, v]: mp2) {
            // cout << val << " -> ";
            // for(auto j: v) cout << j << ' '; cout << endl;
            // }
            
            int flag = 1;
            map<int, int> duplicate;
            // matching
            for(int i=0;i<n;++i) {
                int val = a[i];
                char ch = s[i];
                if(duplicate[val] > 0) {
                    // calculation sesh
                    continue;
                }
                // cout << "val = " << val << " matching char = " << ch << endl;
                // match positions 
                if(mp1[val] != mp2[ch]) {
                    flag = 0;
                    break;
                }
                duplicate[val]++;
            }
            if(flag == 1) cout << "YES\n";
            else cout << "NO\n";
        }
    }
    return 0;
}