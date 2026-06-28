#include "bits/stdc++.h"

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector<vector<int>> dp(n, vector<int> (n));
    for (int l = n - 1; l >= 0; l--) {
        for (int r = l; r < n; r++) {
            if (l == r) {
                dp[l][r] = a[l];
                continue;
            }
            dp[l][r] = max(dp[l][r - 1], dp[l + 1][r]);
            int len = r - l, res = 0;
            for (int msk = len; ; msk = (msk - 1) & len) {
                res ^= a[l + msk];
                if (msk == 0) {
                    break;
                }
            }
            dp[l][r] = max(dp[l][r], res);
        }
    }
    int q;
    cin >> q;
    while (q--) {
        int l, r;
        cin >> l >> r;
        l--, r--;
        cout << dp[l][r] << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int q;
    q = 1;
    while (q--) {
        solve();
    }
}
