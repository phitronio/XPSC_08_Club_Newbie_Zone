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
        long long ans = 0;
        map<char, int> surur, sesher;
        map<string, int> total;
        
        while(n--) {
            string s; cin >> s;
            char surur_char = s[0];
            char sesher_char = s[1];
            
            int current_pair = surur[surur_char] + sesher[sesher_char];
            int extra = 2 * total[s];
            
            ans += current_pair - extra;
            
            surur[surur_char]++;
            sesher[sesher_char]++;
            
            total[s]++;
        }
        cout << ans << endl;
    }
    return 0;
}