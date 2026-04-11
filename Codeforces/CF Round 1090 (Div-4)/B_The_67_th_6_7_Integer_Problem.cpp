#include <bits/stdc++.h>
using namespace std;

int32_t main()
{
    int t = 1, cs = 0;
    cin >> t;
    while (t--){
        int n = 7;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int ans = -1e9;
        for (int i = 0; i < n; i++) {
            int sum = 0;
            for(int j = 0;j<n; ++j) {
                if(i == j) sum += a[j];
                else sum -= a[j];
            }
            ans = max(ans, sum);
        }
        cout << ans << endl;
    }
    return 0;
}