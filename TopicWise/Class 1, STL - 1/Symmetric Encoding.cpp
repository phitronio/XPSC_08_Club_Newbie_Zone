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
        string s; cin >> s;
        // make unique string
        string unq = "";
        map<char, int> mp;
        for(int i = 0; i< n; ++i) {
            if(mp[s[i]] == 0) {
                // map e nai
                unq.push_back(s[i]);
                mp[s[i]]++;
            }
            else {
                // kaj nai;
            }
        }

        // alphabetic order 
        sort(unq.begin(), unq.end());

        // symetry mapping
        map<char, char> symetry;
        int l = 0, r = unq.size() - 1;
        while(l <= r) {
            symetry[unq[l]] = unq[r];

            symetry[unq[r]] = unq[l];

            l++, r--;
        }
        // for(auto [x,y]: symetry) {
        //     cout << x << " -> " << y << endl;
        // }

        // replace with symetry
        for(int i=0;i<n;++i) {
            s[i] = symetry[s[i]];
        }

        cout << s << endl;
    }
    return 0;
}