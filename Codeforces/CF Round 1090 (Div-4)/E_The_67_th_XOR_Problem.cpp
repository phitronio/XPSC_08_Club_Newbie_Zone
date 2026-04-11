#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    int t = 1, cs = 0;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int ans = 0;
        for(auto i: a) {
            for(auto j: a) {
                ans = max(ans, i^j);
            }
        }
        cout << ans << endl;
    }
    return 0;
}