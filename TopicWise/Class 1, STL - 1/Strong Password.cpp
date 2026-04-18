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

    // input
    int t; cin >> t;
    while(t--) {
        // input
        string s; cin >> s;
        // find if the adj is same 
        int same_index = -1;
        for(int i=1;i<s.size();++i) {
            if(s[i] == s[i-1]) {
                same_index = i;
                break;
            }
        }


        if(same_index == -1) {
            // all adjacent distinct 
            // abcd
            if(s.back() == 'a') s += 'b';
            else s += 'a';

            cout << s << endl;
            continue;
        }

        // abc_cdef
        for(int i=0;i<same_index;i++) {
            cout << s[i];
        }
        if(s[same_index] == 'a') cout << 'b';
        else cout << 'a';
        
        for(int i=same_index;i<s.size();++i) {
            cout << s[i];
        }
        cout << endl;
    }
    return 0;
}