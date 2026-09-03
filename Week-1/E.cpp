#include <bits/stdc++.h>
#ifdef LOCAL
#include "debugcp.hpp"
#else
#define DEBUG(i)
#define DEBUG_RANGE(...)
#endif
using namespace std;
using ll = long long;
using vi = vector<int>;
const int INF = 1e9;
const long long INFLL = 1e18;
#define sz(x) (int)(x).size()
const int MOD = 1e9 + 7;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;

    while (t--) {
        int n; cin >> n;
        
        vector<pair<ll,ll>> p(n);
        for (int i = 0; i < n; i++) {
            cin >> p[i].first;
            cin >> p[i].second;
        }

        auto cmp = [](const pair<ll,ll>& a, const pair<ll,ll>& b) {
            return a.second > b.second;
        };

        sort(p.begin(), p.end());
        priority_queue<pair<ll,ll>, vector<pair<ll,ll>>, decltype(cmp)> pq;

        bool r = true;
        int i = 0; 
        ll x = -1;
        while (i < n || !pq.empty()) {
            if (pq.empty()) x = p[i].first;

            for (; i < n && p[i].first <= x; i++) pq.push(p[i]);

            if (pq.top().second < x) {
                r = false;
                break;
            }
            else {
                pq.pop();
                x++;
            }
        }

        cout << (r ? "Yes" : "No") << endl;
    }
}
